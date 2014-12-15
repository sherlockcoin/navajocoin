/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QFrame *verticalFrame1;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *versionLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *copyrightLabel;
    QFrame *line;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(670, 320);
        AboutDialog->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(AboutDialog);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalFrame = new QFrame(AboutDialog);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
        verticalLayout_10 = new QVBoxLayout(verticalFrame);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, 6, -1, 40);
        label_4 = new QLabel(verticalFrame);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(127, 128));
        label_4->setMaximumSize(QSize(127, 127));
        label_4->setStyleSheet(QStringLiteral("background-repeat:none;"));
        label_4->setLineWidth(1);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/about")));
        label_4->setIndent(-1);

        verticalLayout_10->addWidget(label_4);


        horizontalLayout_2->addWidget(verticalFrame, 0, Qt::AlignVCenter);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalFrame1 = new QFrame(AboutDialog);
        verticalFrame1->setObjectName(QStringLiteral("verticalFrame1"));
        verticalFrame1->setMinimumSize(QSize(0, 0));
        verticalFrame1->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        verticalFrame1->setFrameShape(QFrame::StyledPanel);
        verticalLayout_7 = new QVBoxLayout(verticalFrame1);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(6, 6, 6, 6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(verticalFrame1);
        label->setObjectName(QStringLiteral("label"));
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setMargin(0);
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label);

        versionLabel = new QLabel(verticalFrame1);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setCursor(QCursor(Qt::IBeamCursor));
        versionLabel->setText(QStringLiteral("2.0.4 - UT-ZAH"));
        versionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(versionLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_7->addLayout(horizontalLayout);

        copyrightLabel = new QLabel(verticalFrame1);
        copyrightLabel->setObjectName(QStringLiteral("copyrightLabel"));
        copyrightLabel->setCursor(QCursor(Qt::IBeamCursor));
        copyrightLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_7->addWidget(copyrightLabel);

        line = new QFrame(verticalFrame1);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line);

        label_2 = new QLabel(verticalFrame1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setCursor(QCursor(Qt::IBeamCursor));
        label_2->setWordWrap(true);
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_7->addWidget(label_2);


        verticalLayout_2->addWidget(verticalFrame1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About NavajoCoin", 0));
        label->setText(QApplication::translate("AboutDialog", "<b>NavajoCoin</b> version", 0));
        copyrightLabel->setText(QApplication::translate("AboutDialog", "<html><head/><body><p>Copyright \302\251 2014 - 2015 The SummerCoin Developers<br />Copyright \302\251 2014 - 2015 The NavajoCoin Developers<br />Copyright \302\251 2014 - 2015 The NavajoAnonBeta Developers</p></body></html>", 0));
        label_2->setText(QApplication::translate("AboutDialog", "This is experimental software.\n"
"\n"
"Distributed under the MIT/X11 software license, see the accompanying file COPYING or http://www.opensource.org/licenses/mit-license.php.\n"
"\n"
"This product includes software developed by the OpenSSL Project for use in the OpenSSL Toolkit (http://www.openssl.org/) and cryptographic software written by Eric Young (eay@cryptsoft.com) and UPnP software written by Thomas Bernard.", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
