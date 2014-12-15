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
#include <QtWidgets/QTextEdit>
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
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QListWidget *userListWidget;
    QFrame *verticalFrame1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QTextEdit *roomTextEdit;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *sayLineEdit;
    QPushButton *sayButton;
    QWidget *loginPage;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *titleLabel;
    QFrame *loginFrame;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *serverLineEdit;
    QLabel *label_2;
    QLineEdit *userLineEdit;
    QPushButton *loginButton;

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
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
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
        verticalFrame = new QFrame(chatPage);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
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
        label_3 = new QLabel(verticalFrame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("border:none;\n"
"padding: 0 0 6px 0;"));

        verticalLayout_3->addWidget(label_3);

        userListWidget = new QListWidget(verticalFrame);
        userListWidget->setObjectName(QStringLiteral("userListWidget"));
        userListWidget->setStyleSheet(QStringLiteral("background-color: #FFF;"));

        verticalLayout_3->addWidget(userListWidget);


        gridLayout->addWidget(verticalFrame, 0, 3, 2, 2);

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
        label_4 = new QLabel(verticalFrame1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("border:none;\n"
"padding: 0 0 6px 0;"));

        verticalLayout_4->addWidget(label_4);

        roomTextEdit = new QTextEdit(verticalFrame1);
        roomTextEdit->setObjectName(QStringLiteral("roomTextEdit"));
        roomTextEdit->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #FFF;\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
""));
        roomTextEdit->setReadOnly(true);

        verticalLayout_4->addWidget(roomTextEdit);


        gridLayout->addWidget(verticalFrame1, 0, 0, 2, 3);

        horizontalFrame = new QFrame(chatPage);
        horizontalFrame->setObjectName(QStringLiteral("horizontalFrame"));
        horizontalFrame->setMaximumSize(QSize(16777215, 29));
        horizontalFrame->setStyleSheet(QStringLiteral("background:none"));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(horizontalFrame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(90, 29));
        label_5->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius:3px;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"border: 1px solid #C4C1BD;\n"
"border-right: 1px solid #AAA;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
""));

        horizontalLayout->addWidget(label_5);

        sayLineEdit = new QLineEdit(horizontalFrame);
        sayLineEdit->setObjectName(QStringLiteral("sayLineEdit"));
        sayLineEdit->setStyleSheet(QLatin1String("background: none;\n"
"background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"border: 1px solid #C4C1BD;\n"
"border-left: none;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"margin-right:6px;"));

        horizontalLayout->addWidget(sayLineEdit);

        sayButton = new QPushButton(horizontalFrame);
        sayButton->setObjectName(QStringLiteral("sayButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sayButton->sizePolicy().hasHeightForWidth());
        sayButton->setSizePolicy(sizePolicy);
        sayButton->setMinimumSize(QSize(90, 29));
        sayButton->setMaximumSize(QSize(16777215, 16777215));
        sayButton->setStyleSheet(QLatin1String("background: none;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout->addWidget(sayButton);


        gridLayout->addWidget(horizontalFrame, 2, 0, 1, 5);

        stackedWidget->addWidget(chatPage);
        loginPage = new QWidget();
        loginPage->setObjectName(QStringLiteral("loginPage"));
        gridLayout_3 = new QGridLayout(loginPage);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(223, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(223, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 267, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 1, 1, 1);

        titleLabel = new QLabel(loginPage);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy1);
        QFont font;
        titleLabel->setFont(font);
        titleLabel->setLayoutDirection(Qt::LeftToRight);
        titleLabel->setAutoFillBackground(false);
        titleLabel->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;\n"
"color: #4C4C4C;"));
        titleLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(titleLabel, 0, 2, 1, 1);

        loginFrame = new QFrame(loginPage);
        loginFrame->setObjectName(QStringLiteral("loginFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loginFrame->sizePolicy().hasHeightForWidth());
        loginFrame->setSizePolicy(sizePolicy2);
        loginFrame->setMinimumSize(QSize(320, 0));
        loginFrame->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;"));
        loginFrame->setFrameShape(QFrame::StyledPanel);
        gridLayout_2 = new QGridLayout(loginFrame);
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(12);
        gridLayout_2->setVerticalSpacing(6);
        label = new QLabel(loginFrame);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: #4C4C4C;"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        serverLineEdit = new QLineEdit(loginFrame);
        serverLineEdit->setObjectName(QStringLiteral("serverLineEdit"));
        serverLineEdit->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"margin: 0px 6px 0px 0px;\n"
"color: #4C4C4C;"));

        gridLayout_2->addWidget(serverLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(loginFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color: #4C4C4C;"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        userLineEdit = new QLineEdit(loginFrame);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));
        userLineEdit->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"margin: 0px 6px 0px 0px;\n"
"color: #4C4C4C;"));

        gridLayout_2->addWidget(userLineEdit, 1, 1, 1, 1);

        loginButton = new QPushButton(loginFrame);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        sizePolicy2.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy2);
        loginButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        gridLayout_2->addWidget(loginButton, 2, 1, 1, 1);


        gridLayout_3->addWidget(loginFrame, 2, 2, 1, 1);

        stackedWidget->addWidget(loginPage);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout->addWidget(mainFrame);

        ChatWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(serverLineEdit, userLineEdit);
        QWidget::setTabOrder(userLineEdit, loginButton);

        retranslateUi(ChatWindow);
        QObject::connect(serverLineEdit, SIGNAL(returnPressed()), userLineEdit, SLOT(setFocus()));
        QObject::connect(userLineEdit, SIGNAL(returnPressed()), loginButton, SLOT(animateClick()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ChatWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChatWindow)
    {
        ChatWindow->setWindowTitle(QApplication::translate("ChatWindow", "ChatWindow", 0));
        label_3->setText(QApplication::translate("ChatWindow", "User list", 0));
        label_4->setText(QApplication::translate("ChatWindow", "Chat history", 0));
        label_5->setText(QApplication::translate("ChatWindow", "Message", 0));
        sayButton->setText(QApplication::translate("ChatWindow", "Send", 0));
        titleLabel->setText(QApplication::translate("ChatWindow", "TALK IN CODE! ", 0));
        label->setText(QApplication::translate("ChatWindow", "Base Camp:", 0));
        serverLineEdit->setText(QApplication::translate("ChatWindow", "talkincode.servehttp.com", 0));
        label_2->setText(QApplication::translate("ChatWindow", "Username:", 0));
        loginButton->setText(QApplication::translate("ChatWindow", "Login", 0));
    } // retranslateUi

};

namespace Ui {
    class ChatWindow: public Ui_ChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
