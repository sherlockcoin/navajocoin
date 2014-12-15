/********************************************************************************
** Form generated from reading UI file 'sendcoinsentry.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSENTRY_H
#define UI_SENDCOINSENTRY_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendCoinsEntry
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QHBoxLayout *payToLayout;
    QValidatedLineEdit *payTo;
    QToolButton *addressBookButton;
    QToolButton *pasteButton;
    QToolButton *deleteButton;
    QPushButton *gonavanjoButton;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QValidatedLineEdit *addAsLabel;
    BitcoinAmountField *payAmount;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QFrame *line;

    void setupUi(QFrame *SendCoinsEntry)
    {
        if (SendCoinsEntry->objectName().isEmpty())
            SendCoinsEntry->setObjectName(QStringLiteral("SendCoinsEntry"));
        SendCoinsEntry->resize(731, 246);
        SendCoinsEntry->setStyleSheet(QStringLiteral("border:none;"));
        SendCoinsEntry->setFrameShape(QFrame::StyledPanel);
        SendCoinsEntry->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(SendCoinsEntry);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(6, 6, 6, 0);
        label_4 = new QLabel(SendCoinsEntry);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("border:none;"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 8, 0, 1, 1);

        payToLayout = new QHBoxLayout();
        payToLayout->setSpacing(0);
        payToLayout->setObjectName(QStringLiteral("payToLayout"));
        payTo = new QValidatedLineEdit(SendCoinsEntry);
        payTo->setObjectName(QStringLiteral("payTo"));
        payTo->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"margin: 0px 6px 0px 0px;"));
        payTo->setMaxLength(34);

        payToLayout->addWidget(payTo);

        addressBookButton = new QToolButton(SendCoinsEntry);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        addressBookButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"margin: 0px 6px 0px 0px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);

        payToLayout->addWidget(addressBookButton);

        pasteButton = new QToolButton(SendCoinsEntry);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));
        pasteButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"margin: 0px 6px 0px 0px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon1);

        payToLayout->addWidget(pasteButton);

        deleteButton = new QToolButton(SendCoinsEntry);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);

        payToLayout->addWidget(deleteButton);


        gridLayout->addLayout(payToLayout, 4, 1, 1, 1);

        gonavanjoButton = new QPushButton(SendCoinsEntry);
        gonavanjoButton->setObjectName(QStringLiteral("gonavanjoButton"));
        gonavanjoButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        gridLayout->addWidget(gonavanjoButton, 7, 1, 1, 1);

        label_3 = new QLabel(SendCoinsEntry);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("border:none;"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        lineEdit = new QLineEdit(SendCoinsEntry);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;"));

        gridLayout->addWidget(lineEdit, 6, 1, 1, 1);

        lineEdit_2 = new QLineEdit(SendCoinsEntry);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addAsLabel = new QValidatedLineEdit(SendCoinsEntry);
        addAsLabel->setObjectName(QStringLiteral("addAsLabel"));
        addAsLabel->setEnabled(true);
        addAsLabel->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;"));

        horizontalLayout_2->addWidget(addAsLabel);


        gridLayout->addLayout(horizontalLayout_2, 8, 1, 1, 1);

        payAmount = new BitcoinAmountField(SendCoinsEntry);
        payAmount->setObjectName(QStringLiteral("payAmount"));
        payAmount->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;"));

        gridLayout->addWidget(payAmount, 9, 1, 1, 1);

        label_5 = new QLabel(SendCoinsEntry);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("border:none;"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label = new QLabel(SendCoinsEntry);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("border:none;"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 9, 0, 1, 1);

        label_2 = new QLabel(SendCoinsEntry);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("border:none;"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 6, -1, -1);
        line = new QFrame(SendCoinsEntry);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 1));
        line->setMaximumSize(QSize(16777211, 16777215));
        line->setStyleSheet(QStringLiteral("border-top: 1px solid #C0C0C0;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);


        gridLayout->addLayout(verticalLayout, 10, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(addAsLabel);
        label->setBuddy(payAmount);
        label_2->setBuddy(payTo);
#endif // QT_NO_SHORTCUT

        retranslateUi(SendCoinsEntry);

        QMetaObject::connectSlotsByName(SendCoinsEntry);
    } // setupUi

    void retranslateUi(QFrame *SendCoinsEntry)
    {
        SendCoinsEntry->setWindowTitle(QApplication::translate("SendCoinsEntry", "Form", 0));
        label_4->setText(QApplication::translate("SendCoinsEntry", "&Label:", 0));
#ifndef QT_NO_TOOLTIP
        payTo->setToolTip(QApplication::translate("SendCoinsEntry", "The address to send the payment to  (e.g. sjz75uKHzUQJnSdzvpiigEGxseKkDhQToX)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("SendCoinsEntry", "Choose address from address book", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+A", 0));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Paste address from clipboard", 0));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
        pasteButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+P", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Remove this recipient", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QString());
        gonavanjoButton->setText(QApplication::translate("SendCoinsEntry", "Go Navajo", 0));
        label_3->setText(QApplication::translate("SendCoinsEntry", "Preferred Navajo Node:", 0));
#ifndef QT_NO_TOOLTIP
        addAsLabel->setToolTip(QApplication::translate("SendCoinsEntry", "Enter a label for this address to add it to your address book", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("SendCoinsEntry", "Transaction Comment:", 0));
        label->setText(QApplication::translate("SendCoinsEntry", "A&mount:", 0));
        label_2->setText(QApplication::translate("SendCoinsEntry", "Pay &To:", 0));
    } // retranslateUi

};

namespace Ui {
    class SendCoinsEntry: public Ui_SendCoinsEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSENTRY_H
