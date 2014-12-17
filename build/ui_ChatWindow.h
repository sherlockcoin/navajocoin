/********************************************************************************
** Form generated from reading UI file 'ChatWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *chatPage;
    QGridLayout *gridLayout;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QLineEdit *sayLineEdit;
    QPushButton *sayButton;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_3;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QPushButton *logoutButton;
    QListWidget *userListWidget;
    QFrame *verticalFrame1;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *loginPage;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_9;
    QFrame *loginFrame;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QLineEdit *serverLineEdit;
    QLabel *label_7;
    QLineEdit *userLineEdit;
    QCheckBox *rememberCheckBox;
    QLabel *errorMessageLabel;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *registerButton;
    QVBoxLayout *verticalLayout_7;
    QCommandLinkButton *transferUsername;
    QCommandLinkButton *recoverUsername;
    QCheckBox *loginAnonymousCheckBox;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_4;
    QWidget *registerPage;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QFrame *gridFrame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *emailLine;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *submitRegisterButton;
    QLabel *registerError;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *usernameLine;
    QFrame *gridFrame1;
    QGridLayout *gridLayout_12;
    QTableView *addressTableView;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer;
    QWidget *recoverPage;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_21;
    QFrame *gridFrame2;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *sendRecoveryEmail;
    QLabel *recoveryUsernameMessage;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *recoveryUsername;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *cancelRecovery;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_16;
    QFrame *gridFrame3;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_17;
    QLineEdit *recoveryToken;
    QLabel *label_11;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *submitRecoveryToken;
    QLabel *recoveryTokenMessage;
    QSpacerItem *horizontalSpacer_16;
    QFrame *gridFrame4;
    QGridLayout *gridLayout_13;
    QTableView *recoverAddressTable;
    QWidget *transferPage;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_20;
    QFrame *gridFrame5;
    QGridLayout *gridLayout_11;
    QFrame *gridFrame6;
    QGridLayout *gridLayout_14;
    QTableView *transferAddressTable;
    QHBoxLayout *horizontalLayout_22;
    QPushButton *submitTransferUsername;
    QLabel *submitTransferUsernameMessage;
    QSpacerItem *horizontalSpacer_19;
    QLineEdit *transferUsernameLine;
    QLineEdit *transferEmail;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *transferCancel;

    void setupUi(QMainWindow *ChatWindow)
    {
        if (ChatWindow->objectName().isEmpty())
            ChatWindow->setObjectName(QStringLiteral("ChatWindow"));
        ChatWindow->resize(800, 600);
        ChatWindow->setStyleSheet(QLatin1String("#titleLabel {\n"
"background: white;\n"
"color: black;\n"
"font-size: 20px;\n"
"border: none;\n"
"border-bottom:  1px solid black;\n"
"padding: 5px;\n"
"}\n"
"\n"
"#mainFrame {\n"
"border: none;\n"
"background: white;\n"
"}\n"
"\n"
"#loginFrame {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ddf, stop: 1 #aaf);\n"
"border: 1px solid gray;\n"
"padding: 10px;\n"
"border-radius: 25px;\n"
"}"));
        centralwidget = new QWidget(ChatWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(centralwidget);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setStyleSheet(QStringLiteral("background-color: #F2F1F0;"));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        verticalLayout_2 = new QVBoxLayout(mainFrame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 9);
        stackedWidget = new QStackedWidget(mainFrame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral("background-image:url(:/images/res/images/nav-bg.jpg)"));
        chatPage = new QWidget();
        chatPage->setObjectName(QStringLiteral("chatPage"));
        gridLayout = new QGridLayout(chatPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalFrame = new QFrame(chatPage);
        horizontalFrame->setObjectName(QStringLiteral("horizontalFrame"));
        horizontalFrame->setMaximumSize(QSize(16777215, 29));
        horizontalFrame->setStyleSheet(QStringLiteral("background:none"));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sayLineEdit = new QLineEdit(horizontalFrame);
        sayLineEdit->setObjectName(QStringLiteral("sayLineEdit"));
        sayLineEdit->setStyleSheet(QLatin1String("background: none;\n"
"background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"border-left: none;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"margin-right:6px;"));
        sayLineEdit->setMaxLength(3000);

        horizontalLayout->addWidget(sayLineEdit);

        sayButton = new QPushButton(horizontalFrame);
        sayButton->setObjectName(QStringLiteral("sayButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sayButton->sizePolicy().hasHeightForWidth());
        sayButton->setSizePolicy(sizePolicy);
        sayButton->setMaximumSize(QSize(16777215, 16777215));
        sayButton->setStyleSheet(QLatin1String("background: none;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout->addWidget(sayButton);


        gridLayout->addWidget(horizontalFrame, 2, 0, 1, 5);

        verticalFrame = new QFrame(chatPage);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
        verticalFrame->setMaximumSize(QSize(200, 16777215));
        verticalFrame->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
""));
        verticalLayout_3 = new QVBoxLayout(verticalFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 0, 3, 3);
        horizontalWidget = new QWidget(verticalFrame);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        horizontalWidget->setStyleSheet(QStringLiteral("border:none;"));
        horizontalLayout_2 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("border:none;\n"
"padding: 0 0 6px 0;"));

        horizontalLayout_2->addWidget(label_3);

        logoutButton = new QPushButton(horizontalWidget);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setMaximumSize(QSize(20, 16777215));
        logoutButton->setStyleSheet(QLatin1String("background: none;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 0;\n"
"margin-bottom: 4px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/res/icons/power.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutButton->setIcon(icon);

        horizontalLayout_2->addWidget(logoutButton);


        verticalLayout_3->addWidget(horizontalWidget);

        userListWidget = new QListWidget(verticalFrame);
        userListWidget->setObjectName(QStringLiteral("userListWidget"));
        userListWidget->setStyleSheet(QStringLiteral("background-color: #FFF;"));

        verticalLayout_3->addWidget(userListWidget);


        gridLayout->addWidget(verticalFrame, 0, 4, 2, 1);

        verticalFrame1 = new QFrame(chatPage);
        verticalFrame1->setObjectName(QStringLiteral("verticalFrame1"));
        verticalFrame1->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
""));
        verticalLayout_4 = new QVBoxLayout(verticalFrame1);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(3, 0, 3, 3);
        tabWidget = new QTabWidget(verticalFrame1);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral("background-color: #FFF;"));

        verticalLayout_4->addWidget(tabWidget);


        gridLayout->addWidget(verticalFrame1, 0, 0, 2, 4);

        stackedWidget->addWidget(chatPage);
        loginPage = new QWidget();
        loginPage->setObjectName(QStringLiteral("loginPage"));
        loginPage->setMinimumSize(QSize(0, 0));
        gridLayout_7 = new QGridLayout(loginPage);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 40, -1, -1);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        label_5 = new QLabel(loginPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMinimumSize(QSize(320, 0));
        label_5->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(14);
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;\n"
"color: #4C4C4C;\n"
"padding: 5px 20px;"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 20, -1, -1);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        loginFrame = new QFrame(loginPage);
        loginFrame->setObjectName(QStringLiteral("loginFrame"));
        sizePolicy.setHeightForWidth(loginFrame->sizePolicy().hasHeightForWidth());
        loginFrame->setSizePolicy(sizePolicy);
        loginFrame->setMinimumSize(QSize(320, 0));
        loginFrame->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;"));
        loginFrame->setFrameShape(QFrame::StyledPanel);
        gridLayout_4 = new QGridLayout(loginFrame);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(12);
        gridLayout_4->setVerticalSpacing(6);
        gridLayout_4->setContentsMargins(6, 6, 6, 6);
        label_6 = new QLabel(loginFrame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color: #4C4C4C;"));

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        serverLineEdit = new QLineEdit(loginFrame);
        serverLineEdit->setObjectName(QStringLiteral("serverLineEdit"));
        serverLineEdit->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"margin: 0px 6px 0px 0px;\n"
"color: #4C4C4C;"));

        gridLayout_4->addWidget(serverLineEdit, 0, 1, 1, 1);

        label_7 = new QLabel(loginFrame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color: #4C4C4C;"));

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        userLineEdit = new QLineEdit(loginFrame);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));
        userLineEdit->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"margin: 0px 6px 0px 0px;\n"
"color: #4C4C4C;"));
        userLineEdit->setMaxLength(20);

        gridLayout_4->addWidget(userLineEdit, 1, 1, 1, 1);

        rememberCheckBox = new QCheckBox(loginFrame);
        rememberCheckBox->setObjectName(QStringLiteral("rememberCheckBox"));

        gridLayout_4->addWidget(rememberCheckBox, 3, 1, 1, 1);

        errorMessageLabel = new QLabel(loginFrame);
        errorMessageLabel->setObjectName(QStringLiteral("errorMessageLabel"));
        errorMessageLabel->setMaximumSize(QSize(16777215, 0));
        errorMessageLabel->setStyleSheet(QStringLiteral("color:#BF3A2B"));

        gridLayout_4->addWidget(errorMessageLabel, 2, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, 6, -1);
        loginButton = new QPushButton(loginFrame);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy2);
        loginButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout_6->addWidget(loginButton);

        horizontalSpacer_8 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        registerButton = new QPushButton(loginFrame);
        registerButton->setObjectName(QStringLiteral("registerButton"));
        sizePolicy2.setHeightForWidth(registerButton->sizePolicy().hasHeightForWidth());
        registerButton->setSizePolicy(sizePolicy2);
        registerButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout_6->addWidget(registerButton);


        gridLayout_4->addLayout(horizontalLayout_6, 6, 1, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 0, -1, -1);
        transferUsername = new QCommandLinkButton(loginFrame);
        transferUsername->setObjectName(QStringLiteral("transferUsername"));
        transferUsername->setMaximumSize(QSize(16777215, 25));

        verticalLayout_7->addWidget(transferUsername);

        recoverUsername = new QCommandLinkButton(loginFrame);
        recoverUsername->setObjectName(QStringLiteral("recoverUsername"));
        recoverUsername->setMaximumSize(QSize(16777215, 25));
        recoverUsername->setIconSize(QSize(20, 20));

        verticalLayout_7->addWidget(recoverUsername);


        gridLayout_4->addLayout(verticalLayout_7, 7, 1, 1, 1);

        loginAnonymousCheckBox = new QCheckBox(loginFrame);
        loginAnonymousCheckBox->setObjectName(QStringLiteral("loginAnonymousCheckBox"));

        gridLayout_4->addWidget(loginAnonymousCheckBox, 4, 1, 1, 1);


        horizontalLayout_7->addWidget(loginFrame);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);


        verticalLayout_6->addLayout(horizontalLayout_7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);


        gridLayout_7->addLayout(verticalLayout_6, 0, 0, 1, 1);

        stackedWidget->addWidget(loginPage);
        registerPage = new QWidget();
        registerPage->setObjectName(QStringLiteral("registerPage"));
        gridLayout_3 = new QGridLayout(registerPage);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 40, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_4 = new QLabel(registerPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(320, 0));
        label_4->setBaseSize(QSize(0, 0));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;\n"
"color: #4C4C4C;\n"
"padding: 5px 20px;"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(6, 20, 6, 6);
        gridFrame = new QFrame(registerPage);
        gridFrame->setObjectName(QStringLiteral("gridFrame"));
        gridFrame->setMinimumSize(QSize(600, 0));
        gridFrame->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;\n"
"color: #4C4C4C;"));
        gridLayout_2 = new QGridLayout(gridFrame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, -1, 0);
        emailLine = new QLineEdit(gridFrame);
        emailLine->setObjectName(QStringLiteral("emailLine"));
        emailLine->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"color: #4C4C4C;"));

        horizontalLayout_8->addWidget(emailLine);


        gridLayout_2->addLayout(horizontalLayout_8, 8, 0, 1, 1);

        label_2 = new QLabel(gridFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 5, 0, 1, 1);

        label = new QLabel(gridFrame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        submitRegisterButton = new QPushButton(gridFrame);
        submitRegisterButton->setObjectName(QStringLiteral("submitRegisterButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(submitRegisterButton->sizePolicy().hasHeightForWidth());
        submitRegisterButton->setSizePolicy(sizePolicy3);
        submitRegisterButton->setStyleSheet(QLatin1String("background: none;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout_9->addWidget(submitRegisterButton);

        registerError = new QLabel(gridFrame);
        registerError->setObjectName(QStringLiteral("registerError"));
        registerError->setStyleSheet(QStringLiteral("color:#BF3A2B"));

        horizontalLayout_9->addWidget(registerError);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_9, 12, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        usernameLine = new QLineEdit(gridFrame);
        usernameLine->setObjectName(QStringLiteral("usernameLine"));
        usernameLine->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"color: #4C4C4C;"));

        horizontalLayout_11->addWidget(usernameLine);


        gridLayout_2->addLayout(horizontalLayout_11, 1, 0, 1, 1);

        gridFrame1 = new QFrame(gridFrame);
        gridFrame1->setObjectName(QStringLiteral("gridFrame1"));
        gridFrame1->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"color: #4C4C4C;\n"
"border: 1px solid #C4C1BD;\n"
""));
        gridLayout_12 = new QGridLayout(gridFrame1);
        gridLayout_12->setSpacing(0);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        addressTableView = new QTableView(gridFrame1);
        addressTableView->setObjectName(QStringLiteral("addressTableView"));
        addressTableView->setStyleSheet(QLatin1String("border:none;\n"
"background-color:none;"));

        gridLayout_12->addWidget(addressTableView, 0, 0, 1, 1);


        gridLayout_2->addWidget(gridFrame1, 3, 0, 1, 1);

        label_8 = new QLabel(gridFrame);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(gridFrame);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, -1, 6, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        cancelButton = new QPushButton(registerPage);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        sizePolicy3.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy3);
        cancelButton->setStyleSheet(QLatin1String("background: none;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout_10->addWidget(cancelButton);


        verticalLayout_5->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        gridLayout_3->addLayout(verticalLayout_5, 0, 0, 1, 1);

        stackedWidget->addWidget(registerPage);
        recoverPage = new QWidget();
        recoverPage->setObjectName(QStringLiteral("recoverPage"));
        gridLayout_6 = new QGridLayout(recoverPage);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(6, 20, 6, 6);
        gridFrame2 = new QFrame(recoverPage);
        gridFrame2->setObjectName(QStringLiteral("gridFrame2"));
        gridFrame2->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;\n"
"color: #4C4C4C;"));
        gridLayout_8 = new QGridLayout(gridFrame2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        sendRecoveryEmail = new QPushButton(gridFrame2);
        sendRecoveryEmail->setObjectName(QStringLiteral("sendRecoveryEmail"));
        sendRecoveryEmail->setStyleSheet(QLatin1String("background: none;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout_18->addWidget(sendRecoveryEmail);

        recoveryUsernameMessage = new QLabel(gridFrame2);
        recoveryUsernameMessage->setObjectName(QStringLiteral("recoveryUsernameMessage"));
        recoveryUsernameMessage->setStyleSheet(QStringLiteral("color:#BF3A2B"));

        horizontalLayout_18->addWidget(recoveryUsernameMessage);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_15);


        gridLayout_8->addLayout(horizontalLayout_18, 4, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        recoveryUsername = new QLineEdit(gridFrame2);
        recoveryUsername->setObjectName(QStringLiteral("recoveryUsername"));
        recoveryUsername->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"color: #4C4C4C;"));

        horizontalLayout_14->addWidget(recoveryUsername);


        gridLayout_8->addLayout(horizontalLayout_14, 1, 0, 1, 1);

        label_10 = new QLabel(gridFrame2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_8->addWidget(label_10, 0, 0, 1, 1);


        horizontalLayout_21->addWidget(gridFrame2);


        gridLayout_6->addLayout(horizontalLayout_21, 1, 0, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 40, -1, -1);
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_13);

        label_9 = new QLabel(recoverPage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(320, 0));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;\n"
"color: #4C4C4C;\n"
"padding: 5px 20px;"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_9);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);


        verticalLayout_8->addLayout(horizontalLayout_12);


        gridLayout_6->addLayout(verticalLayout_8, 0, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(-1, -1, 6, -1);
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);

        cancelRecovery = new QPushButton(recoverPage);
        cancelRecovery->setObjectName(QStringLiteral("cancelRecovery"));
        cancelRecovery->setStyleSheet(QLatin1String("background: none;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout_15->addWidget(cancelRecovery);


        gridLayout_6->addLayout(horizontalLayout_15, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 5, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(6, 0, 6, 6);
        gridFrame3 = new QFrame(recoverPage);
        gridFrame3->setObjectName(QStringLiteral("gridFrame3"));
        gridFrame3->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;\n"
"color: #4C4C4C;"));
        gridLayout_9 = new QGridLayout(gridFrame3);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        recoveryToken = new QLineEdit(gridFrame3);
        recoveryToken->setObjectName(QStringLiteral("recoveryToken"));
        recoveryToken->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"color: #4C4C4C;"));

        horizontalLayout_17->addWidget(recoveryToken);


        gridLayout_9->addLayout(horizontalLayout_17, 4, 0, 1, 1);

        label_11 = new QLabel(gridFrame3);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_9->addWidget(label_11, 3, 0, 1, 1);

        label_13 = new QLabel(gridFrame3);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_9->addWidget(label_13, 0, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        submitRecoveryToken = new QPushButton(gridFrame3);
        submitRecoveryToken->setObjectName(QStringLiteral("submitRecoveryToken"));
        submitRecoveryToken->setStyleSheet(QLatin1String("background: none;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout_19->addWidget(submitRecoveryToken);

        recoveryTokenMessage = new QLabel(gridFrame3);
        recoveryTokenMessage->setObjectName(QStringLiteral("recoveryTokenMessage"));
        recoveryTokenMessage->setStyleSheet(QStringLiteral("color:#BF3A2B"));

        horizontalLayout_19->addWidget(recoveryTokenMessage);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_16);


        gridLayout_9->addLayout(horizontalLayout_19, 5, 0, 1, 1);

        gridFrame4 = new QFrame(gridFrame3);
        gridFrame4->setObjectName(QStringLiteral("gridFrame4"));
        gridFrame4->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;"));
        gridLayout_13 = new QGridLayout(gridFrame4);
        gridLayout_13->setSpacing(0);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        recoverAddressTable = new QTableView(gridFrame4);
        recoverAddressTable->setObjectName(QStringLiteral("recoverAddressTable"));
        recoverAddressTable->setStyleSheet(QLatin1String("background: none;\n"
"border: none;"));

        gridLayout_13->addWidget(recoverAddressTable, 0, 0, 1, 1);


        gridLayout_9->addWidget(gridFrame4, 1, 0, 1, 1);


        horizontalLayout_16->addWidget(gridFrame3);


        gridLayout_6->addLayout(horizontalLayout_16, 2, 0, 1, 1);

        stackedWidget->addWidget(recoverPage);
        transferPage = new QWidget();
        transferPage->setObjectName(QStringLiteral("transferPage"));
        gridLayout_10 = new QGridLayout(transferPage);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(-1, 40, -1, -1);
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_17);

        label_14 = new QLabel(transferPage);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(320, 0));
        label_14->setFont(font);
        label_14->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;\n"
"color: #4C4C4C;\n"
"padding: 5px 20px;"));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_14);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_18);


        verticalLayout_9->addLayout(horizontalLayout_13);


        gridLayout_10->addLayout(verticalLayout_9, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_3, 3, 0, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(6, 20, 6, 6);
        gridFrame5 = new QFrame(transferPage);
        gridFrame5->setObjectName(QStringLiteral("gridFrame5"));
        gridFrame5->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;\n"
"color: #4C4C4C;"));
        gridLayout_11 = new QGridLayout(gridFrame5);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(6, 6, 6, 6);
        gridFrame6 = new QFrame(gridFrame5);
        gridFrame6->setObjectName(QStringLiteral("gridFrame6"));
        gridFrame6->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;"));
        gridLayout_14 = new QGridLayout(gridFrame6);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        transferAddressTable = new QTableView(gridFrame6);
        transferAddressTable->setObjectName(QStringLiteral("transferAddressTable"));

        gridLayout_14->addWidget(transferAddressTable, 0, 0, 1, 1);


        gridLayout_11->addWidget(gridFrame6, 4, 0, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        submitTransferUsername = new QPushButton(gridFrame5);
        submitTransferUsername->setObjectName(QStringLiteral("submitTransferUsername"));
        submitTransferUsername->setStyleSheet(QLatin1String("background: none;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout_22->addWidget(submitTransferUsername);

        submitTransferUsernameMessage = new QLabel(gridFrame5);
        submitTransferUsernameMessage->setObjectName(QStringLiteral("submitTransferUsernameMessage"));
        submitTransferUsernameMessage->setStyleSheet(QStringLiteral("color:#BF3A2B"));

        horizontalLayout_22->addWidget(submitTransferUsernameMessage);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_19);


        gridLayout_11->addLayout(horizontalLayout_22, 7, 0, 1, 1);

        transferUsernameLine = new QLineEdit(gridFrame5);
        transferUsernameLine->setObjectName(QStringLiteral("transferUsernameLine"));
        transferUsernameLine->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"color: #4C4C4C;"));

        gridLayout_11->addWidget(transferUsernameLine, 1, 0, 1, 1);

        transferEmail = new QLineEdit(gridFrame5);
        transferEmail->setObjectName(QStringLiteral("transferEmail"));
        transferEmail->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"color: #4C4C4C;"));

        gridLayout_11->addWidget(transferEmail, 6, 0, 1, 1);

        label_15 = new QLabel(gridFrame5);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_11->addWidget(label_15, 0, 0, 1, 1);

        label_16 = new QLabel(gridFrame5);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_11->addWidget(label_16, 2, 0, 1, 1);

        label_12 = new QLabel(gridFrame5);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_11->addWidget(label_12, 5, 0, 1, 1);


        horizontalLayout_20->addWidget(gridFrame5);


        gridLayout_10->addLayout(horizontalLayout_20, 1, 0, 1, 1);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(-1, -1, 6, -1);
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_20);

        transferCancel = new QPushButton(transferPage);
        transferCancel->setObjectName(QStringLiteral("transferCancel"));
        transferCancel->setStyleSheet(QLatin1String("background: none;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout_23->addWidget(transferCancel);


        gridLayout_10->addLayout(horizontalLayout_23, 2, 0, 1, 1);

        stackedWidget->addWidget(transferPage);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout->addWidget(mainFrame);

        ChatWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(serverLineEdit, userLineEdit);
        QWidget::setTabOrder(userLineEdit, rememberCheckBox);
        QWidget::setTabOrder(rememberCheckBox, loginAnonymousCheckBox);
        QWidget::setTabOrder(loginAnonymousCheckBox, loginButton);
        QWidget::setTabOrder(loginButton, registerButton);
        QWidget::setTabOrder(registerButton, transferUsername);
        QWidget::setTabOrder(transferUsername, recoverUsername);
        QWidget::setTabOrder(recoverUsername, usernameLine);
        QWidget::setTabOrder(usernameLine, emailLine);
        QWidget::setTabOrder(emailLine, submitRegisterButton);
        QWidget::setTabOrder(submitRegisterButton, cancelButton);
        QWidget::setTabOrder(cancelButton, recoveryUsername);
        QWidget::setTabOrder(recoveryUsername, sendRecoveryEmail);
        QWidget::setTabOrder(sendRecoveryEmail, recoveryToken);
        QWidget::setTabOrder(recoveryToken, submitRecoveryToken);
        QWidget::setTabOrder(submitRecoveryToken, cancelRecovery);
        QWidget::setTabOrder(cancelRecovery, transferUsernameLine);
        QWidget::setTabOrder(transferUsernameLine, transferEmail);
        QWidget::setTabOrder(transferEmail, submitTransferUsername);
        QWidget::setTabOrder(submitTransferUsername, transferCancel);
        QWidget::setTabOrder(transferCancel, sayLineEdit);
        QWidget::setTabOrder(sayLineEdit, sayButton);
        QWidget::setTabOrder(sayButton, recoverAddressTable);
        QWidget::setTabOrder(recoverAddressTable, transferAddressTable);
        QWidget::setTabOrder(transferAddressTable, tabWidget);
        QWidget::setTabOrder(tabWidget, addressTableView);
        QWidget::setTabOrder(addressTableView, logoutButton);
        QWidget::setTabOrder(logoutButton, userListWidget);

        retranslateUi(ChatWindow);

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ChatWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChatWindow)
    {
        ChatWindow->setWindowTitle(QApplication::translate("ChatWindow", "ChatWindow", 0));
        sayButton->setText(QApplication::translate("ChatWindow", "Send", 0));
        label_3->setText(QApplication::translate("ChatWindow", "User list", 0));
        logoutButton->setText(QString());
        label_5->setText(QApplication::translate("ChatWindow", "TALK NAVAJO", 0));
        label_6->setText(QApplication::translate("ChatWindow", "Base Camp:", 0));
        serverLineEdit->setText(QApplication::translate("ChatWindow", "talkincode.servehttp.com", 0));
        label_7->setText(QApplication::translate("ChatWindow", "Username:", 0));
        rememberCheckBox->setText(QApplication::translate("ChatWindow", "remember me", 0));
        errorMessageLabel->setText(QString());
        loginButton->setText(QApplication::translate("ChatWindow", "Login", 0));
        registerButton->setText(QApplication::translate("ChatWindow", "Register", 0));
        transferUsername->setText(QApplication::translate("ChatWindow", "Transfer username", 0));
        recoverUsername->setText(QApplication::translate("ChatWindow", "Recover username", 0));
        loginAnonymousCheckBox->setText(QApplication::translate("ChatWindow", "login anonymously", 0));
        label_4->setText(QApplication::translate("ChatWindow", "REGISTER USERNAME", 0));
        label_2->setText(QApplication::translate("ChatWindow", "Email address (optional):", 0));
        label->setText(QApplication::translate("ChatWindow", "Wallet address:", 0));
        submitRegisterButton->setText(QApplication::translate("ChatWindow", "Register", 0));
        registerError->setText(QString());
        label_8->setText(QApplication::translate("ChatWindow", "Username:", 0));
        cancelButton->setText(QApplication::translate("ChatWindow", "Cancel", 0));
        sendRecoveryEmail->setText(QApplication::translate("ChatWindow", "Send Recovery Email", 0));
        recoveryUsernameMessage->setText(QString());
        label_10->setText(QApplication::translate("ChatWindow", "Username to recover:", 0));
        label_9->setText(QApplication::translate("ChatWindow", "RECOVER USERNAME", 0));
        cancelRecovery->setText(QApplication::translate("ChatWindow", "Cancel", 0));
        label_11->setText(QApplication::translate("ChatWindow", "Recovery token from email:", 0));
        label_13->setText(QApplication::translate("ChatWindow", "New wallet address:", 0));
        submitRecoveryToken->setText(QApplication::translate("ChatWindow", "Recover Username", 0));
        recoveryTokenMessage->setText(QString());
        label_14->setText(QApplication::translate("ChatWindow", "TRANSFER USERNAME", 0));
        submitTransferUsername->setText(QApplication::translate("ChatWindow", "Transfer Username", 0));
        submitTransferUsernameMessage->setText(QString());
        label_15->setText(QApplication::translate("ChatWindow", "Username to transfer:", 0));
        label_16->setText(QApplication::translate("ChatWindow", "New wallet address:", 0));
        label_12->setText(QApplication::translate("ChatWindow", "Email address (optional):", 0));
        transferCancel->setText(QApplication::translate("ChatWindow", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ChatWindow: public Ui_ChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
