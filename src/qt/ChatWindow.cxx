#include "ChatWindow.h"
#include <QCheckBox>
#include <QRegExp>
#include <QSettings>
#include <QTime>
#include <QTextBrowser>
#include <QDesktopServices>
#include <QUrl>
#include <bitcoingui.h>
#include <QTabWidget>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <wallet.h>
#include <walletmodel.h>
#include <addresstablemodel.h>
#include <QSortFilterProxyModel>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QNetworkReply>

ChatWindow::ChatWindow(QWidget *parent) : QMainWindow(parent)
{

    setupUi(this);

    stackedWidget->setCurrentWidget(loginPage);

    QSettings settings("navajocoin","wallet");

    QString username = settings.value("username").toString();

    if(username != ""){
        userLineEdit->setText(username);
        rememberCheckBox->setChecked(true);
    }else{
        userLineEdit->setFocus();
    }

    socket = new QTcpSocket(this);

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));




}

void ChatWindow::on_loginButton_clicked()
{

    proxyModel = new QSortFilterProxyModel(this);

    proxyModel->setSourceModel(bitcoinGUI->getWalletModel()->getAddressTableModel());
    proxyModel->setDynamicSortFilter(true);
    proxyModel->setSortCaseSensitivity(Qt::CaseInsensitive);
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyModel->setFilterRole(AddressTableModel::TypeRole);
    proxyModel->setFilterFixedString(AddressTableModel::Receive);

    username = userLineEdit->text().trimmed();

    if(!username.isEmpty())
    {
        QRegExp invalidChars("[&\"\'*<>]");

        if(username.toLower() == "chat" || username.toLower() == "server"){
            errorMessageLabel->setText("Invalid Username");
            errorMessageLabel->setMaximumHeight(17);

        }else if(invalidChars.indexIn(username) != -1){
            errorMessageLabel->setText("Invalid Characters");
            errorMessageLabel->setMaximumHeight(17);

        }else{
            errorMessageLabel->setText("");
            errorMessageLabel->setMaximumHeight(0);
            isChecked = rememberCheckBox->checkState();

            QSettings settings("navajocoin","wallet");

            if(isChecked)
            {
                settings.setValue("username",username);
            }else{
                settings.setValue("username","");
            }

            QUrl url;
            QByteArray postData;

            //username
            QString usernameValue = username;
            QString usernameKey = "username";
            postData.append(usernameKey).append("=").append(usernameValue).append("&");

            if(loginAnonymousCheckBox->checkState()){
                url.setUrl("http://navajocoin.org/api/check-username");
            }else{
                url.setUrl("http://navajocoin.org/api/login");

                QJsonArray jsonAddresses;

                for(int i = 0; i < proxyModel->rowCount(); i++){
                   jsonAddresses.push_back(proxyModel->data(proxyModel->index(i,1)).toString());
                }

                QJsonDocument *jsonDocument = new QJsonDocument(jsonAddresses);
                QString stripped = jsonDocument->toJson();
                stripped = stripped.simplified();

                //username
                QString addressesKey = "walletAddresses";
                postData.append(addressesKey).append("=").append(stripped).append("&");
            }

            QNetworkRequest request(url);

            request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

            QNetworkAccessManager *networkManager = new QNetworkAccessManager(this);
            connect(networkManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(loginRequest(QNetworkReply*)));
            networkManager->post(request, postData);
        }
    }


}

void ChatWindow::loginRequest(QNetworkReply *reply){

    QString rawReply = reply->readAll();

    QJsonDocument jsonDoc =  QJsonDocument::fromJson(rawReply.toUtf8());

    QJsonObject jsonObject = jsonDoc.object();

    QString responseType = jsonObject["type"].toString();
    QString responseMessage = jsonObject["message"].toString();

    qDebug() << responseType;
    qDebug() << responseMessage;

    if(responseType == "FAIL"){
        errorMessageLabel->setText(responseMessage);
        errorMessageLabel->setMaximumHeight(17);
    }else{
        errorMessageLabel->setText("Logging in");
        errorMessageLabel->setMaximumHeight(17);
        socket->connectToHost(serverLineEdit->text(), 4200);
    }

}

void ChatWindow::on_sayButton_clicked()
{
    this->postMessage();
}

void ChatWindow::readyRead()
{

    QRegExp regExp("((([A-Za-z]{3,9}:(?:\\/\\/)?)(?:[\\-;:&=\\+\\$,\\w]+@)?[A-Za-z0-9\\.\\-]+|(?:www\\.|[\\-;:&=\\+\\$,\\w]+@)[A-Za-z0-9\\.\\-]+)((?:\\/[\\+~%\\/\\.\\w\\-]*)?\\??(?:[\\-\\+=&;%@\\.\\w]*)#?(?:[\\.\\!\\/\\\\\\w]*))?)");

    while(socket->canReadLine())
    {
        QString line = QString::fromUtf8(socket->readLine()).trimmed();

        QRegExp messageRegex("^([^:]+):(.*)$");

        QRegExp usersRegex("^/users:(.*)$");

        if(usersRegex.indexIn(line) != -1)
        {
            QStringList users = usersRegex.cap(1).split(",");
            userListWidget->clear();

            int numMatches = 0;

            foreach(QString user, users){

                if(user == username){
                    numMatches++;
                }

                new QListWidgetItem(QPixmap(":/res/icons/user.png"), user, userListWidget);
            }

            //if first user list received, check for multiple users
            if(!userChecked){

                if(numMatches > 1){
                    on_logoutButton_clicked();
                    errorMessageLabel->setText("Username already in use");
                    errorMessageLabel->setMaximumHeight(17);
                }else{
                    stackedWidget->setCurrentWidget(chatPage);
                    userChecked = true;
                    errorMessageLabel->setText("");
                    errorMessageLabel->setMaximumHeight(0);
                }

            }//if userChecked

        }
        else if(messageRegex.indexIn(line) != -1)
        {

            QString user = messageRegex.cap(1);

            SimpleCrypt crypto(Q_UINT64_C(0x2517faa84f557b3dc0c3)); //some random number
            QString rawMessage = crypto.decryptToString(messageRegex.cap(2));

            if(rawMessage == ""){
                rawMessage = messageRegex.cap(2);
            }

            //QString rawMessage = messageRegex.cap(2);

            QJsonDocument jsonDoc =  QJsonDocument::fromJson(rawMessage.toUtf8());

            QJsonObject jsonObject = jsonDoc.object();

            QTime time;
            QTime currentTime = time.currentTime();

            if(jsonObject.count() == 0){

                roomTextBrowser->append("("+currentTime.toString()+") <b>Server</b>: " +rawMessage);

            }else{

                QString message = jsonObject["message"].toString();
                QString to = jsonObject["to"].toString();
                QString from = jsonObject["from"].toString();
                QString isServer = jsonObject["is_server"].toString();

                QString anchorMessage = message.replace(regExp, "<a href='\\1'>\\1</a>" );

                QTime time;
                QTime currentTime = time.currentTime();

                QString newText;

                if(isServer == "TRUE"){
                    newText = "("+currentTime.toString()+") <b>Server</b>: " + from + " " + anchorMessage;
                }else{
                    newText = "("+currentTime.toString()+") <b>" + from + "</b>: " + anchorMessage;
                }

                if(to == "Chat"){
                    roomTextBrowser->append(newText);
                }else{

                    if(from == username){

                        int tabIndex = -1;
                        int numTabs = tabWidget->count();

                        for(int i = 0; i < numTabs; i++){

                            if(tabWidget->tabText(i) == to){
                                tabIndex = i;
                            }

                        }

                        if(tabIndex != -1){
                            QTextBrowser *tab = tabWidget->widget(tabIndex);
                            tab->append(newText);
                        }

                    }//from me

                    if(to == username){

                        int tabIndex = -1;
                        int numTabs = tabWidget->count();

                        for(int i = 0; i < numTabs; i++){

                            if(tabWidget->tabText(i) == from){
                                tabIndex = i;
                            }

                        }

                        qDebug() << isServer;

                        if(tabIndex != -1){

                            QTextBrowser *tab = tabWidget->widget(tabIndex);
                            tab->append(newText);

                        }else if(isServer == "FALSE"){

                            QString initText = "("+currentTime.toString()+") <b>" + from + "</b>: " + anchorMessage;
                            tabIndex = addTab(initText, from);
                            tabWidget->tabBar()->setTabTextColor(tabIndex, QColor(191,58,43,255));

                        }

                        if(tabIndex != tabWidget->currentIndex()){
                            tabWidget->tabBar()->setTabTextColor(tabIndex, QColor(191,58,43,255));
                        }


                    }//to me

                }//is json object

            }

            bitcoinGUI->chatUpdated();


        }
    }
}


void ChatWindow::setGUI(BitcoinGUI* gui){
    bitcoinGUI = gui;
}

void ChatWindow::disconnected(){

    qDebug() << "DISCONNECTED";

    heartBeatTimer.stop();

    stackedWidget->setCurrentWidget(loginPage);
    if(!isChecked){
        userLineEdit->clear();
        userLineEdit->setFocus();
    }

    userChecked = false;

    errorMessageLabel->setText("Connection Lost");
    errorMessageLabel->setMaximumHeight(17);
}

void ChatWindow::connected()
{
    //stackedWidget->setCurrentWidget(chatPage);

    //configure chat tab

    int numTabs = tabWidget->count();

    int tabIndex = -1;

    for(int i = 0; i < numTabs; i++){

        if(tabWidget->tabText(i) == "Chat"){
            tabIndex = i;
        }

    }

    if(tabIndex == -1){

        roomTextBrowser = new QTextBrowser(tabWidget);
        tabWidget->addTab(roomTextBrowser, "Chat");
        roomTextBrowser->setGeometry(-10,-5,542,481);
        roomTextBrowser->setOpenExternalLinks(false);
        roomTextBrowser->setOpenLinks(false);
        connect(roomTextBrowser, SIGNAL(anchorClicked(QUrl)), this, SLOT(on_roomTextBrowser_anchorClicked(QUrl)));
        tabWidget->setTabsClosable(true);
        tabWidget->tabBar()->tabButton(0, QTabBar::RightSide)->resize(0,0);
    }

    sayLineEdit->setFocus();

    socket->write(QString("/me:" + userLineEdit->text() + "\n").toUtf8());

    heartBeatTimer.start(heartBeatInterval, this);

}

void ChatWindow::on_logoutButton_clicked()
{
    socket->disconnectFromHost();

    heartBeatTimer.stop();

    int numTabs = tabWidget->count();

    for(int i = 1; i < numTabs; i++){
        tabWidget->removeTab(i);
    }

    QTextBrowser *chatTab = tabWidget->widget(0);
    chatTab->clear();

    stackedWidget->setCurrentWidget(loginPage);
    if(!isChecked){
        userLineEdit->clear();
        userLineEdit->setFocus();
    }

    userChecked = false;
}

void ChatWindow::on_sayLineEdit_returnPressed()
{
    this->postMessage();
}

void ChatWindow::postMessage()
{

    if(messageAllowed)
    {

        //start the timer and disable the button style
        timer.start(messageTimeout, this);
        messageAllowed = false;
        sayButton->setStyleSheet("background: none;\nbackground-color: rgb(255,255,255);\nborder-radius:3px;\nborder: 1px solid #C4C1BD;\ncolor: #AAAAAA;\npadding: 4px 12px;");

        //find active tab

        int currentTab = tabWidget->currentIndex();

        QString message = sayLineEdit->text().trimmed();

        QJsonObject jsonMessage;

        jsonMessage["to"] = tabWidget->tabText(currentTab);
        jsonMessage["from"] = username;
        jsonMessage["is_server"] = QString("FALSE");
        jsonMessage["message"] = message.toHtmlEscaped() + "\n";

        QJsonDocument *jsonDocument = new QJsonDocument(jsonMessage);

        if(!message.isEmpty())
        {
            QString stripped = jsonDocument->toJson();
            stripped = stripped.simplified();

            SimpleCrypt crypto(Q_UINT64_C(0x2517faa84f557b3dc0c3)); //some random number
            QString toEncrypt(stripped);
            QString encrypted = crypto.encryptToString(toEncrypt) + "\n";

            socket->write(encrypted.toUtf8());

        }

        sayLineEdit->clear();

        sayLineEdit->setFocus();

    }//message allowed

}

void ChatWindow::timerEvent(QTimerEvent *event)
{

    if(event->timerId() == heartBeatTimer.timerId()){
        //qDebug() << "heartbeat";
        //qDebug() << socket->state();
        if(socket->state() == QAbstractSocket::UnconnectedState){
            qDebug("QAbstractSocket::UnconnectedState");
        }

    }

    if(event->timerId() == timer.timerId()){
        //stop the timer and reset the button style
        sayButton->setStyleSheet("background: none;\nbackground-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\nborder-radius:3px;\nborder: 1px solid #C4C1BD;\ncolor: #4C4C4C;\npadding: 4px 12px;");
        timer.stop();
        messageAllowed = true;
    }



}

void ChatWindow::on_roomTextBrowser_anchorClicked(QUrl url)
{
    QString urlString = url.toString();

    if(!urlString.startsWith("http") && urlString.indexOf("://") == -1){
        urlString = "http://"+urlString;
    }

    QDesktopServices::openUrl(QUrl(urlString, QUrl::TolerantMode));

}

void ChatWindow::on_userListWidget_itemDoubleClicked(QListWidgetItem *item)
{

    //only add tab if it doesnt already exist and you haven't clicked on yourself
    int numTabs = tabWidget->count();

    int tabIndex = -1;

    for(int i = 0; i < numTabs; i++){

        if(tabWidget->tabText(i) == item->text()){
            tabIndex = i;
        }

    }

    if(username != item->text() && tabIndex == -1){
        QTime time;
        QTime currentTime = time.currentTime();
        QString initText = "("+currentTime.toString()+") <b>Server</b>: Now chatting with <b>" + item->text() + "</b>";

        addTab(initText, item->text());

        tabIndex = numTabs;

        tabWidget->setCurrentIndex(tabIndex);

    }//if new tab

}

int ChatWindow::addTab(QString initText, QString tabText){

    QTextBrowser *pmTextBrowser = new QTextBrowser(tabWidget);

    connect(pmTextBrowser, SIGNAL(anchorClicked(QUrl)), this, SLOT(on_roomTextBrowser_anchorClicked(QUrl)));

    pmTextBrowser->setGeometry(-10,-5,542,481);

    //pmTextBrowser->setStyleSheet("background: none; background-color: #FFF; border-radius:3px; border: 1px solid #C4C1BD; color: #4C4C4C; padding: 4px;");

    pmTextBrowser->setOpenExternalLinks(false);
    pmTextBrowser->setOpenLinks(false);

    pmTextBrowser->setText(initText);



    return tabWidget->addTab(pmTextBrowser, tabText);
}

void ChatWindow::on_tabWidget_tabCloseRequested(int index)
{
    QJsonObject jsonQuitMessage;

    jsonQuitMessage["to"] = tabWidget->tabText(index);
    jsonQuitMessage["from"] = username;

    jsonQuitMessage["is_server"] = QString("TRUE");
    jsonQuitMessage["message"] = QString("has left this private message \n");

    QJsonDocument *jsonDocument = new QJsonDocument(jsonQuitMessage);

    QString stripped = jsonDocument->toJson();
    stripped = stripped.simplified() + "\n";
    socket->write(stripped.toUtf8());

    tabWidget->removeTab(index);

}

void ChatWindow::on_tabWidget_tabBarClicked(int index)
{
    //reset color of tab
    tabWidget->tabBar()->setTabTextColor(tabWidget->currentIndex(), QColor(76,76,76,255));

}

void ChatWindow::on_registerButton_clicked()
{
    stackedWidget->setCurrentWidget(registerPage);

    registerError->setText("");
    usernameLine->setText("");
    emailLine->setText("");

    proxyModel = new QSortFilterProxyModel(this);

    proxyModel->setSourceModel(bitcoinGUI->getWalletModel()->getAddressTableModel());
    proxyModel->setDynamicSortFilter(true);
    proxyModel->setSortCaseSensitivity(Qt::CaseInsensitive);
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);

    proxyModel->setFilterRole(AddressTableModel::TypeRole);
    proxyModel->setFilterFixedString(AddressTableModel::Receive);

    addressTableView->setModel(proxyModel);
    addressTableView->sortByColumn(0, Qt::AscendingOrder);

    addressTableView->horizontalHeader()->resizeSection(AddressTableModel::Address, 320);
    addressTableView->horizontalHeader()->setResizeMode(AddressTableModel::Label,QHeaderView::Stretch);

}

void ChatWindow::on_cancelButton_clicked()
{
    stackedWidget->setCurrentWidget(loginPage);
}

void ChatWindow::on_submitRegisterButton_clicked()
{
    QUrl url;
    QByteArray postData;

    registerError->setText("");

    url.setUrl("http://navajocoin.org/api/register");

    QNetworkRequest request(url);

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    //email
    QString emailValue = emailLine->text().trimmed();
    QString emailKey = "email";
    postData.append(emailKey).append("=").append(emailValue).append("&");

    //username
    QString usernameValue = usernameLine->text().trimmed();
    QString usernameKey = "username";
    postData.append(usernameKey).append("=").append(usernameValue).append("&");

    //wallet
    int selectedRow = addressTableView->selectionModel()->currentIndex().row();

    QString walletValue = QString(addressTableView->model()->data(addressTableView->model()->index(selectedRow,1)).toString());
    QString walletKey = "walletAddress";
    postData.append(walletKey).append("=").append(walletValue).append("&");

    if(usernameValue == ""){
        registerError->setText("Please enter a username");
    }else if(walletValue == ""){
        registerError->setText("Please select a wallet address");
    }else{

        QRegExp invalidChars("[&\"\'*<>]");

        if(usernameValue.toLower() == "chat" || usernameValue.toLower() == "server"){
            registerError->setText("Invalid Username");
        }else if(invalidChars.indexIn(usernameValue) != -1){
            registerError->setText("Invalid Characters");
        }else{

            QSettings settings("navajocoin","wallet");
            settings.setValue("username",usernameValue);

            QNetworkAccessManager *networkManager = new QNetworkAccessManager(this);
            connect(networkManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(registerRequest(QNetworkReply*)));
            networkManager->post(request, postData);
        }


    }

}

void ChatWindow::registerRequest(QNetworkReply *reply){

    QString rawReply = reply->readAll();

    QJsonDocument jsonDoc =  QJsonDocument::fromJson(rawReply.toUtf8());

    QJsonObject jsonObject = jsonDoc.object();

    QString responseType = jsonObject["type"].toString();
    QString responseMessage = jsonObject["message"].toString();

    qDebug() << responseType;
    qDebug() << responseMessage;

    if(responseType == "FAIL"){
        registerError->setText(responseMessage);
    }else{
        stackedWidget->setCurrentWidget(loginPage);
        QSettings settings("navajocoin","wallet");
        QString username = settings.value("username").toString();
        usernameLine->setText("");
        userLineEdit->setText(username);
    }

}

void ChatWindow::on_transferUsername_clicked()
{
    transferUsernameLine->setText("");
    transferEmail->setText("");
    submitTransferUsernameMessage->setText("");

    stackedWidget->setCurrentWidget(transferPage);

    proxyModel = new QSortFilterProxyModel(this);

    proxyModel->setSourceModel(bitcoinGUI->getWalletModel()->getAddressTableModel());
    proxyModel->setDynamicSortFilter(true);
    proxyModel->setSortCaseSensitivity(Qt::CaseInsensitive);
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);

    proxyModel->setFilterRole(AddressTableModel::TypeRole);
    proxyModel->setFilterFixedString(AddressTableModel::Receive);

    transferAddressTable->setModel(proxyModel);
    transferAddressTable->sortByColumn(0, Qt::AscendingOrder);

    transferAddressTable->horizontalHeader()->resizeSection(AddressTableModel::Address, 320);
    transferAddressTable->horizontalHeader()->setResizeMode(AddressTableModel::Label,QHeaderView::Stretch);

}

void ChatWindow::on_recoverUsername_clicked()
{
    recoveryUsername->setText("");
    recoveryUsernameMessage->setText("");
    recoveryToken->setText("");
    recoveryTokenMessage->setText("");

    stackedWidget->setCurrentWidget(recoverPage);

    proxyModel = new QSortFilterProxyModel(this);

    proxyModel->setSourceModel(bitcoinGUI->getWalletModel()->getAddressTableModel());
    proxyModel->setDynamicSortFilter(true);
    proxyModel->setSortCaseSensitivity(Qt::CaseInsensitive);
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);

    proxyModel->setFilterRole(AddressTableModel::TypeRole);
    proxyModel->setFilterFixedString(AddressTableModel::Receive);

    recoverAddressTable->setModel(proxyModel);
    recoverAddressTable->sortByColumn(0, Qt::AscendingOrder);

    recoverAddressTable->horizontalHeader()->resizeSection(AddressTableModel::Address, 320);
    recoverAddressTable->horizontalHeader()->setResizeMode(AddressTableModel::Label,QHeaderView::Stretch);
}

void ChatWindow::on_sendRecoveryEmail_clicked()
{
    //send recovery email
    recoveryUsernameMessage->setText("");

    QUrl url;
    QByteArray postData;

    url.setUrl("http://navajocoin.org/api/send-recovery-email");

    QNetworkRequest request(url);

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    //username
    QString usernameValue = recoveryUsername->text().trimmed();
    QString usernameKey = "username";
    postData.append(usernameKey).append("=").append(usernameValue).append("&");

    if(usernameValue == ""){
        recoveryUsernameMessage->setText("Please enter a username");
    }else{
        QNetworkAccessManager *networkManager = new QNetworkAccessManager(this);
        connect(networkManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(recoveryEmailRequest(QNetworkReply*)));
        networkManager->post(request, postData);
    }
}

void ChatWindow::recoveryEmailRequest(QNetworkReply *reply){

    QString rawReply = reply->readAll();
    QJsonDocument jsonDoc =  QJsonDocument::fromJson(rawReply.toUtf8());
    QJsonObject jsonObject = jsonDoc.object();

    QString responseType = jsonObject["type"].toString();
    QString responseMessage = jsonObject["message"].toString();

    if(responseType == "FAIL"){
        recoveryUsernameMessage->setText(responseMessage);
    }else{
        recoveryUsernameMessage->setText("Please retrieve the recovery token from your email");
    }

}

void ChatWindow::on_cancelRecovery_clicked()
{
    stackedWidget->setCurrentWidget(loginPage);

}

void ChatWindow::on_submitTransferUsername_clicked()
{
    submitTransferUsernameMessage->setText("");

    //transfer submitted
    QUrl url;
    QByteArray postData;

    url.setUrl("http://navajocoin.org/api/transfer-username");

    QNetworkRequest request(url);

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    //token
    QString emailValue = transferEmail->text().trimmed();
    QString emailKey = "email";
    postData.append(emailKey).append("=").append(emailValue).append("&");

    //username
    QString usernameValue = transferUsernameLine->text().trimmed();
    QString usernameKey = "username";
    postData.append(usernameKey).append("=").append(usernameValue).append("&");

    //new wallet
    int selectedRow = transferAddressTable->selectionModel()->currentIndex().row();

    QString walletValue = QString(transferAddressTable->model()->data(transferAddressTable->model()->index(selectedRow,1)).toString());
    QString walletKey = "newAddress";
    postData.append(walletKey).append("=").append(walletValue).append("&");

    //existing wallets
    QJsonArray jsonAddresses;

    for(int i = 0; i < proxyModel->rowCount(); i++){
       jsonAddresses.push_back(proxyModel->data(proxyModel->index(i,1)).toString());
    }

    QJsonDocument *jsonDocument = new QJsonDocument(jsonAddresses);
    QString stripped = jsonDocument->toJson();
    stripped = stripped.simplified();

    //username
    QString addressesKey = "walletAddresses";
    postData.append(addressesKey).append("=").append(stripped).append("&");

    if(usernameValue == ""){
        submitTransferUsernameMessage->setText("Please enter a username");
    }else if(walletValue == ""){
        submitTransferUsernameMessage->setText("Please select a wallet address");
    }else{
        QNetworkAccessManager *networkManager = new QNetworkAccessManager(this);
        connect(networkManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(transferRequest(QNetworkReply*)));
        networkManager->post(request, postData);
    }
}

void ChatWindow::transferRequest(QNetworkReply *reply){

    QString rawReply = reply->readAll();

    QJsonDocument jsonDoc =  QJsonDocument::fromJson(rawReply.toUtf8());

    QJsonObject jsonObject = jsonDoc.object();

    QString responseType = jsonObject["type"].toString();
    QString responseMessage = jsonObject["message"].toString();

    qDebug() << responseType;
    qDebug() << responseMessage;

    if(responseType == "FAIL"){
        submitTransferUsernameMessage->setText(responseMessage);
    }else{
        submitTransferUsernameMessage->setText("Successfully updated");
    }

}

void ChatWindow::on_transferCancel_clicked()
{
    stackedWidget->setCurrentWidget(loginPage);
}

void ChatWindow::on_submitRecoveryToken_clicked()
{
    //recovery token submitted

    recoveryTokenMessage->setText("");

    QUrl url;
    QByteArray postData;

    url.setUrl("http://navajocoin.org/api/recover-username");

    QNetworkRequest request(url);

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    //token
    QString tokenValue = recoveryToken->text().trimmed();
    QString tokenKey = "token";
    postData.append(tokenKey).append("=").append(tokenValue).append("&");

    //username
    QString usernameValue = recoveryUsername->text().trimmed();
    QString usernameKey = "username";
    postData.append(usernameKey).append("=").append(usernameValue).append("&");

    //wallet
    int selectedRow = recoverAddressTable->selectionModel()->currentIndex().row();

    QString walletValue = QString(recoverAddressTable->model()->data(recoverAddressTable->model()->index(selectedRow,1)).toString());
    QString walletKey = "newAddress";
    postData.append(walletKey).append("=").append(walletValue).append("&");

    if(usernameValue == ""){
        recoveryTokenMessage->setText("Please enter a username");
    }else if(tokenValue == ""){
        recoveryTokenMessage->setText("Please enter your recovery token");
    }else if(walletValue == ""){
        recoveryTokenMessage->setText("Please select a wallet address");
    }else{
        QNetworkAccessManager *networkManager = new QNetworkAccessManager(this);
        connect(networkManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(recoveryRequest(QNetworkReply*)));
        networkManager->post(request, postData);
    }

}

void ChatWindow::recoveryRequest(QNetworkReply *reply){

    QString rawReply = reply->readAll();

    QJsonDocument jsonDoc =  QJsonDocument::fromJson(rawReply.toUtf8());

    QJsonObject jsonObject = jsonDoc.object();

    QString responseType = jsonObject["type"].toString();
    QString responseMessage = jsonObject["message"].toString();

    qDebug() << responseType;
    qDebug() << responseMessage;

    if(responseType == "FAIL"){
        recoveryTokenMessage->setText(responseMessage);
    }else{
        stackedWidget->setCurrentWidget(loginPage);
        QSettings settings("navajocoin","wallet");
        QString username = settings.value("username").toString();
        usernameLine->setText("");
        userLineEdit->setText(username);
    }

}
