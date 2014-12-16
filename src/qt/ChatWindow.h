#include <QMainWindow>
#include <QTcpSocket>
#include <QBasicTimer>
#include <bitcoingui.h>
#include <QTextBrowser>
#include "simplecrypt.h"
#include <QNetworkReply>

#include "ui_ChatWindow.h"

class AddressTableModel;
class OptionsModel;
class WalletModel;

QT_BEGIN_NAMESPACE
class QTableView;
class QItemSelection;
class QSortFilterProxyModel;
class QMenu;
class QModelIndex;
QT_END_NAMESPACE

class ChatWindow : public QMainWindow, public Ui::ChatWindow
{
    Q_OBJECT

    public:

        ChatWindow(QWidget *parent=0);

        void setGUI(BitcoinGUI* const);

    private slots:

        void on_loginButton_clicked();

        void on_sayButton_clicked();

        void readyRead();

        void connected();

        void disconnected();

        void on_logoutButton_clicked();

        void on_sayLineEdit_returnPressed();

        void on_roomTextBrowser_anchorClicked(QUrl url);

        void on_userListWidget_itemDoubleClicked(QListWidgetItem *item);

        void on_tabWidget_tabCloseRequested(int index);

        void on_tabWidget_tabBarClicked(int index);

        void on_registerButton_clicked();

        void on_cancelButton_clicked();

        void on_submitRegisterButton_clicked();

        void registerRequest(QNetworkReply *reply);
        void recoveryEmailRequest(QNetworkReply *reply);
        void recoveryRequest(QNetworkReply *reply);
        void loginRequest(QNetworkReply *reply);
        void transferRequest(QNetworkReply *reply);

        void on_transferUsername_clicked();

        void on_recoverUsername_clicked();

        void on_sendRecoveryEmail_clicked();

        void on_cancelRecovery_clicked();

        void on_submitTransferUsername_clicked();

        void on_transferCancel_clicked();

        void on_submitRecoveryToken_clicked();

protected:

        void timerEvent(QTimerEvent *event);

        void postMessage();

    private:

        AddressTableModel *model;
        QSortFilterProxyModel *proxyModel;
        WalletModel *walletModel;

        QTcpSocket *socket;

        QBasicTimer timer;

        QBasicTimer heartBeatTimer;

        int heartBeatInterval = 5000;

        bool messageAllowed = true;

        int messageTimeout = 3000;

        bool isChecked;

        BitcoinGUI* bitcoinGUI;

        QString username;

        int addTab(QString initText, QString tabText);

        QTextBrowser *roomTextBrowser;

        bool userChecked = false;

};
