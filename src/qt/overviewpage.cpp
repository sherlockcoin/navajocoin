#include "overviewpage.h"
#include "ui_overviewpage.h"

#include "walletmodel.h"
#include "bitcoinunits.h"
#include "optionsmodel.h"
#include "transactiontablemodel.h"
#include "transactionfilterproxy.h"
#include "guiutil.h"
#include "guiconstants.h"
#include "askpassphrasedialog.h"

#include <QAbstractItemDelegate>
#include <QPainter>

#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrl>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QTableWidgetItem>
#include <QtGui>
#include <QDebug>

#define DECORATION_SIZE 64
#define NUM_ITEMS 3

class TxViewDelegate : public QAbstractItemDelegate
{
    Q_OBJECT
public:
    TxViewDelegate(): QAbstractItemDelegate(), unit(BitcoinUnits::BTC)
    {

    }

    inline void paint(QPainter *painter, const QStyleOptionViewItem &option,
                      const QModelIndex &index ) const
    {
        painter->save();

        QIcon icon = qvariant_cast<QIcon>(index.data(Qt::DecorationRole));
        QRect mainRect = option.rect;
        QRect decorationRect(mainRect.topLeft(), QSize(DECORATION_SIZE, DECORATION_SIZE));
        int xspace = DECORATION_SIZE + 8;
        int ypad = 6;
        int halfheight = (mainRect.height() - 2*ypad)/2;
        QRect amountRect(mainRect.left() + xspace, mainRect.top()+ypad, mainRect.width() - xspace, halfheight);
        QRect addressRect(mainRect.left() + xspace, mainRect.top()+ypad+halfheight, mainRect.width() - xspace, halfheight);
        icon.paint(painter, decorationRect);

        QDateTime date = index.data(TransactionTableModel::DateRole).toDateTime();
        QString address = index.data(Qt::DisplayRole).toString();
        qint64 amount = index.data(TransactionTableModel::AmountRole).toLongLong();
        bool confirmed = index.data(TransactionTableModel::ConfirmedRole).toBool();
        QVariant value = index.data(Qt::ForegroundRole);
        QColor foreground = option.palette.color(QPalette::Text);
        if(qVariantCanConvert<QColor>(value))
        {
            foreground = qvariant_cast<QColor>(value);
        }

        painter->setPen(foreground);
        painter->drawText(addressRect, Qt::AlignLeft|Qt::AlignVCenter, address);

        if(amount < 0)
        {
            foreground = COLOR_NEGATIVE;
        }
        else if(!confirmed)
        {
            foreground = COLOR_UNCONFIRMED;
        }
        else
        {
            foreground = option.palette.color(QPalette::Text);
        }
        painter->setPen(foreground);
        QString amountText = BitcoinUnits::formatWithUnit(unit, amount, true);
        if(!confirmed)
        {
            amountText = QString("[") + amountText + QString("]");
        }
        painter->drawText(amountRect, Qt::AlignRight|Qt::AlignVCenter, amountText);

        painter->setPen(option.palette.color(QPalette::Text));
        painter->drawText(amountRect, Qt::AlignLeft|Qt::AlignVCenter, GUIUtil::dateTimeStr(date));

        painter->restore();
    }

    inline QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
    {
        return QSize(DECORATION_SIZE, DECORATION_SIZE);
    }

    int unit;

};
#include "overviewpage.moc"

OverviewPage::OverviewPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OverviewPage),
    currentBalance(-1),
    currentStake(0),
    currentUnconfirmedBalance(-1),
    currentImmatureBalance(-1),
    txdelegate(new TxViewDelegate()),
    filter(0)
{
    ui->setupUi(this);

    // Recent transactions
    ui->listTransactions->setItemDelegate(txdelegate);
    ui->listTransactions->setIconSize(QSize(DECORATION_SIZE, DECORATION_SIZE));
    ui->listTransactions->setMinimumHeight(NUM_ITEMS * (DECORATION_SIZE + 2));
    ui->listTransactions->setAttribute(Qt::WA_MacShowFocusRect, false);

    connect(ui->listTransactions, SIGNAL(clicked(QModelIndex)), this, SLOT(handleTransactionClicked(QModelIndex)));

    // init "out of sync" warning labels
    ui->labelWalletStatus->setText("(" + tr("out of sync") + ")");
    ui->labelTransactionsStatus->setText("(" + tr("out of sync") + ")");

    // start with displaying the "out of sync" warnings
    showOutOfSyncWarning(true);

    //start ticker
    tickerInterval =60000;

    tickerTimer.start(tickerInterval, this);

    this->getMarketData();

}

void OverviewPage::timerEvent(QTimerEvent *event)
{

    if(event->timerId() == tickerTimer.timerId()){
       this->getMarketData();
    }
}


void OverviewPage::getMarketData()
{

    qDebug() << "getMarketData";


    static bool bPrepare1st = true;

    // allocate only 1 time
    static QNetworkAccessManager *networkManager = new QNetworkAccessManager(this);
    static QNetworkAccessManager *cryptsyNetworkManager = new QNetworkAccessManager(this);
    static QNetworkAccessManager *poloNetworkManager = new QNetworkAccessManager(this);
    static QNetworkAccessManager *bterNetworkManager = new QNetworkAccessManager(this);


    //bittrex

    qDebug() << "getMarketData";

    QUrl bittrexUrl;
    bittrexUrl.setUrl("https://bittrex.com/api/v1.1/public/getticker?market=BTC-NAV");
    static QNetworkRequest bittrexReq(bittrexUrl);
    bittrexReq.setHeader(QNetworkRequest::ContentTypeHeader, "application/octet-stream");



    //cryptsy

    QUrl cryptsyUrl;
    cryptsyUrl.setUrl("http://pubapi.cryptsy.com/api.php?method=singlemarketdata&marketid=252");
    static QNetworkRequest cryptsyReq(cryptsyUrl);
    cryptsyReq.setHeader(QNetworkRequest::ContentTypeHeader, "application/octet-stream");



    //polo

    QUrl poloUrl;
    poloUrl.setUrl("https://poloniex.com/public?command=returnTicker");
    static QNetworkRequest poloReq(poloUrl);
    poloReq.setHeader(QNetworkRequest::ContentTypeHeader, "application/octet-stream");



    //bter
    /*
    QUrl bterUrl;
    bterUrl.setUrl("http://data.bter.com/api/1/ticker/NAV_BTC");
    static QNetworkRequest bterReq(bterUrl);
    bterReq.setHeader(QNetworkRequest::ContentTypeHeader, "application/octet-stream");
    */

    // connect only first time
    if (bPrepare1st)
    {
        qDebug() << "getMarketData connect";
        connect(networkManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(bittrexRequest(QNetworkReply*)));
        connect(cryptsyNetworkManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(cryptsyRequest(QNetworkReply*)));
        connect(poloNetworkManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(poloRequest(QNetworkReply*)));
        connect(bterNetworkManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(bterRequest(QNetworkReply*)));
        bPrepare1st = false;
    }

    // start get
    networkManager->get(bittrexReq);
    cryptsyNetworkManager->get(cryptsyReq);
    poloNetworkManager->get(poloReq);
    //bterNetworkManager->get(bterReq);

}


void OverviewPage::bterRequest(QNetworkReply *reply){

    QString rawReply = reply->readAll();

    QJsonDocument jsonDoc =  QJsonDocument::fromJson(rawReply.toUtf8());

    QJsonObject navObject = jsonDoc.object();

    if(navObject["result"].toString() == "true"){

        QString bidString = navObject["buy"].toString();
        double bidValue = bidString.toDouble()*100000000;
        QTableWidgetItem *bid = new QTableWidgetItem();
        bid->setFlags(bid->flags() ^ Qt::ItemIsEditable);
        bid->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        bid->setText(QString::number(bidValue));
        ui->marketTableWidget->setItem(3,0,bid);

        QString askString = navObject["sell"].toString();
        double askValue = askString.toDouble()*100000000;
        QTableWidgetItem *ask = new QTableWidgetItem();
        ask->setFlags(ask->flags() ^ Qt::ItemIsEditable);
        ask->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ask->setText(QString::number(askValue));
        ui->marketTableWidget->setItem(3,1,ask);

        QString lastString = navObject["last"].toString();
        double lastValue = lastString.toDouble()*100000000;
        QTableWidgetItem *last = new QTableWidgetItem();
        last->setFlags(last->flags() ^ Qt::ItemIsEditable);
        last->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        last->setText(QString::number(lastValue));
        ui->marketTableWidget->setItem(3,2,last);

        ui->marketTableWidget->verticalHeaderItem(3)->setToolTip(
                    GUIUtil::dateTimeStr(QDateTime::currentDateTime()));
    }


    reply->deleteLater();
}

void OverviewPage::poloRequest(QNetworkReply *reply){

    QString rawReply = reply->readAll();

    QJsonDocument jsonDoc =  QJsonDocument::fromJson(rawReply.toUtf8());

    QJsonObject jsonObject = jsonDoc.object();

    QJsonObject navObject = jsonObject["BTC_NAV"].toObject();

    QString bidString = navObject["highestBid"].toString();
    double bidValue = bidString.toDouble()*100000000;
    QTableWidgetItem *bid = new QTableWidgetItem();
    bid->setFlags(bid->flags() ^ Qt::ItemIsEditable);
    bid->setText(QString::number(bidValue));
    bid->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->marketTableWidget->setItem(2,0,bid);

    QString askString = navObject["lowestAsk"].toString();
    double askValue = askString.toDouble()*100000000;
    QTableWidgetItem *ask = new QTableWidgetItem();
    ask->setFlags(ask->flags() ^ Qt::ItemIsEditable);
    ask->setText(QString::number(askValue));
    ask->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->marketTableWidget->setItem(2,1,ask);

    QString lastString = navObject["last"].toString();
    double lastValue = lastString.toDouble()*100000000;
    QTableWidgetItem *last = new QTableWidgetItem();
    last->setFlags(last->flags() ^ Qt::ItemIsEditable);
    last->setText(QString::number(lastValue));
    last->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->marketTableWidget->setItem(2,2,last);

    ui->marketTableWidget->verticalHeaderItem(2)->setToolTip(
                GUIUtil::dateTimeStr(QDateTime::currentDateTime()));

    reply->deleteLater();
}


void OverviewPage::cryptsyRequest(QNetworkReply *reply){

    QString rawReply = reply->readAll();

    QJsonDocument jsonDoc =  QJsonDocument::fromJson(rawReply.toUtf8());

    QJsonObject jsonObject = jsonDoc.object();

    bool success = jsonObject["success"].toInt();

    if(success == 1){

        QJsonObject returnObject = jsonObject["return"].toObject();
        QJsonObject marketsObject = returnObject["markets"].toObject();
        QJsonObject navObject = marketsObject["NAV"].toObject();
        QJsonArray sellObject = navObject["sellorders"].toArray();
        QJsonArray buyObject = navObject["buyorders"].toArray();

        QJsonObject firstSell = sellObject[0].toObject();
        QJsonObject firstBuy = buyObject[0].toObject();

        QString bidString = firstBuy["price"].toString();
        double bidValue = bidString.toDouble()*100000000;
        QTableWidgetItem *bid = new QTableWidgetItem();
        bid->setFlags(bid->flags() ^ Qt::ItemIsEditable);
        bid->setText(QString::number(bidValue));
        bid->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->marketTableWidget->setItem(1,0,bid);

        QString askString = firstSell["price"].toString();
        double askValue = askString.toDouble()*100000000;
        QTableWidgetItem *ask = new QTableWidgetItem();
        ask->setFlags(ask->flags() ^ Qt::ItemIsEditable);
        ask->setText(QString::number(askValue));
        ask->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->marketTableWidget->setItem(1,1,ask);

        QString lastString = navObject["lasttradeprice"].toString();
        double lastValue = lastString.toDouble()*100000000;
        QTableWidgetItem *last = new QTableWidgetItem();
        last->setFlags(last->flags() ^ Qt::ItemIsEditable);
        last->setText(QString::number(lastValue));
        last->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->marketTableWidget->setItem(1,2,last);

        ui->marketTableWidget->verticalHeaderItem(1)->setToolTip(
                    GUIUtil::dateTimeStr(QDateTime::currentDateTime()));
    }

    reply->deleteLater();
}

void OverviewPage::bittrexRequest(QNetworkReply *reply){


    QString rawReply = reply->readAll();

    QJsonDocument jsonDoc =  QJsonDocument::fromJson(rawReply.toUtf8());

    QJsonObject jsonObject = jsonDoc.object();

    bool success = jsonObject["success"].toBool();

    if(success){

        QJsonObject replyObject = jsonObject["result"].toObject();

        double bidValue = replyObject["Bid"].toDouble()*100000000;
        QTableWidgetItem *bid = new QTableWidgetItem();
        bid->setFlags(bid->flags() ^ Qt::ItemIsEditable);
        bid->setText(QString::number(bidValue));
        bid->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->marketTableWidget->setItem(0,0,bid);

        double askValue = replyObject["Ask"].toDouble()*100000000;
        QTableWidgetItem *ask = new QTableWidgetItem();
        ask->setFlags(ask->flags() ^ Qt::ItemIsEditable);
        ask->setText(QString::number(askValue));
        ask->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->marketTableWidget->setItem(0,1,ask);

        double lastValue = replyObject["Last"].toDouble()*100000000;
        QTableWidgetItem *last = new QTableWidgetItem();
        last->setFlags(last->flags() ^ Qt::ItemIsEditable);
        last->setText(QString::number(lastValue));
        last->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->marketTableWidget->setItem(0,2,last);

        ui->marketTableWidget->verticalHeaderItem(0)->setToolTip(
                    GUIUtil::dateTimeStr(QDateTime::currentDateTime()));

    }

    reply->deleteLater();
}

void OverviewPage::handleTransactionClicked(const QModelIndex &index)
{
    if(filter)
        emit transactionClicked(filter->mapToSource(index));
}

OverviewPage::~OverviewPage()
{
    delete ui;
}

void OverviewPage::setBalance(qint64 balance, qint64 stake, qint64 unconfirmedBalance, qint64 immatureBalance)
{
    int unit = model->getOptionsModel()->getDisplayUnit();
    currentBalance = balance;
    currentStake = stake;
    currentUnconfirmedBalance = unconfirmedBalance;
    currentImmatureBalance = immatureBalance;
    ui->labelBalance->setText(BitcoinUnits::formatWithUnit(unit, balance));
    ui->labelStake->setText(BitcoinUnits::formatWithUnit(unit, stake));
    ui->labelUnconfirmed->setText(BitcoinUnits::formatWithUnit(unit, unconfirmedBalance));
    ui->labelImmature->setText(BitcoinUnits::formatWithUnit(unit, immatureBalance));
    ui->labelTotal->setText(BitcoinUnits::formatWithUnit(unit, balance + stake + unconfirmedBalance + immatureBalance));

    // only show immature (newly mined) balance if it's non-zero, so as not to complicate things
    // for the non-mining users
    bool showImmature = immatureBalance != 0;
    ui->labelImmature->setVisible(showImmature);
    ui->labelImmatureText->setVisible(showImmature);
}


void OverviewPage::unlockWallet()
{
    if(model->getEncryptionStatus() == WalletModel::Locked)
    {
        AskPassphraseDialog dlg(AskPassphraseDialog::Unlock, this);
        dlg.setModel(model);
        if(dlg.exec() == QDialog::Accepted)
        {
            ui->unlockWalletButton->setText(QString("Lock Wallet"));
        }
    }
    else
    {
        model->setWalletLocked(true);
        ui->unlockWalletButton->setText(QString("Unlock Wallet"));
    }
}

void OverviewPage::setModel(WalletModel *model)
{
    this->model = model;
    if(model && model->getOptionsModel())
    {
        // Set up transaction list
        filter = new TransactionFilterProxy();
        filter->setSourceModel(model->getTransactionTableModel());
        filter->setLimit(NUM_ITEMS);
        filter->setDynamicSortFilter(true);
        filter->setSortRole(Qt::EditRole);
        filter->setShowInactive(false);
        filter->sort(TransactionTableModel::Status, Qt::DescendingOrder);

        ui->listTransactions->setModel(filter);
        ui->listTransactions->setModelColumn(TransactionTableModel::ToAddress);

        // Keep up to date with wallet
        setBalance(model->getBalance(), model->getStake(), model->getUnconfirmedBalance(), model->getImmatureBalance());
        connect(model, SIGNAL(balanceChanged(qint64, qint64, qint64, qint64)), this, SLOT(setBalance(qint64, qint64, qint64, qint64)));

        connect(model->getOptionsModel(), SIGNAL(displayUnitChanged(int)), this, SLOT(updateDisplayUnit()));

        // Unlock wallet button
        WalletModel::EncryptionStatus status = model->getEncryptionStatus();
        if(status == WalletModel::Unencrypted)
        {
            ui->unlockWalletButton->setDisabled(true);
            ui->unlockWalletButton->setText(QString("Wallet is not encrypted!"));

        }

        else
        {
            ui->unlockWalletButton->setText(QString("Unlock wallet"));
        }
        connect(ui->unlockWalletButton, SIGNAL(clicked()), this, SLOT(unlockWallet()));
    }

    // update the display unit, to not use the default ("BTC")
    updateDisplayUnit();
}

void OverviewPage::updateDisplayUnit()
{
    if(model && model->getOptionsModel())
    {
        if(currentBalance != -1)
            setBalance(currentBalance, model->getStake(), currentUnconfirmedBalance, currentImmatureBalance);

        // Update txdelegate->unit with the current unit
        txdelegate->unit = model->getOptionsModel()->getDisplayUnit();

        ui->listTransactions->update();
    }
}

void OverviewPage::showOutOfSyncWarning(bool fShow)
{
    ui->labelWalletStatus->setVisible(fShow);
    ui->labelTransactionsStatus->setVisible(fShow);
}
