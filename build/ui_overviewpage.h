/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *labelBalance;
    QLabel *label_6;
    QLabel *labelStake;
    QLabel *label_3;
    QLabel *labelUnconfirmed;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QFrame *line;
    QLabel *labelTotalText;
    QLabel *labelTotal;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_icon_title;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QFrame *line_2;
    QListView *listTransactions;
    QPushButton *unlockWalletButton;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *rbLang_en;
    QRadioButton *rbLang_ru;
    QRadioButton *rbLang_cn;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QTextEdit *txtChat;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnBold;
    QLineEdit *txtChatNick;
    QLineEdit *txtChatMsg;
    QPushButton *btnSmiley;
    QPushButton *btnChatSend;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(732, 548);
        OverviewPage->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(OverviewPage);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setHorizontalSpacing(12);
        formLayout_2->setVerticalSpacing(6);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelBalance->setFont(font1);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QStringLiteral("0 NAV"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelBalance);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        labelStake = new QLabel(frame);
        labelStake->setObjectName(QStringLiteral("labelStake"));
        labelStake->setFont(font1);
        labelStake->setCursor(QCursor(Qt::IBeamCursor));
        labelStake->setText(QStringLiteral("0 NAV"));
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelStake);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font1);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QStringLiteral("0 NAV"));
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, labelUnconfirmed);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, labelImmatureText);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font1);
        labelImmature->setText(QStringLiteral("0 NAV"));
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, labelImmature);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, line);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, labelTotalText);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font1);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QStringLiteral("0 NAV"));
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, labelTotal);


        verticalLayout_4->addLayout(formLayout_2);


        verticalLayout_2->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_6->setContentsMargins(-1, 0, 0, 0);
        label_icon_title = new QLabel(OverviewPage);
        label_icon_title->setObjectName(QStringLiteral("label_icon_title"));
        QFont font2;
        font2.setPointSize(13);
        label_icon_title->setFont(font2);
        label_icon_title->setLayoutDirection(Qt::LeftToRight);
        label_icon_title->setStyleSheet(QStringLiteral("QLabel{qproperty-alignment: AlignCenter; }"));

        verticalLayout_6->addWidget(label_icon_title);


        verticalLayout_2->addLayout(verticalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(12, 0, 12, 0);
        label_2 = new QLabel(OverviewPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/Wallet_Logo")));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_2);


        verticalLayout_2->addLayout(verticalLayout_8);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        line_2 = new QFrame(frame_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);

        unlockWalletButton = new QPushButton(OverviewPage);
        unlockWalletButton->setObjectName(QStringLiteral("unlockWalletButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(unlockWalletButton->sizePolicy().hasHeightForWidth());
        unlockWalletButton->setSizePolicy(sizePolicy);
        unlockWalletButton->setMaximumSize(QSize(16777214, 16777214));
        unlockWalletButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 0;"));
        unlockWalletButton->setCheckable(false);
        unlockWalletButton->setAutoDefault(false);
        unlockWalletButton->setDefault(true);
        unlockWalletButton->setFlat(false);

        verticalLayout_3->addWidget(unlockWalletButton);

        line_3 = new QFrame(OverviewPage);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setStyleSheet(QStringLiteral(""));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        rbLang_en = new QRadioButton(OverviewPage);
        rbLang_en->setObjectName(QStringLiteral("rbLang_en"));
        rbLang_en->setMinimumSize(QSize(25, 19));
        rbLang_en->setMaximumSize(QSize(25, 19));
        rbLang_en->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_en);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));
        rbLang_en->setChecked(true);

        horizontalLayout_6->addWidget(rbLang_en);

        rbLang_ru = new QRadioButton(OverviewPage);
        rbLang_ru->setObjectName(QStringLiteral("rbLang_ru"));
        rbLang_ru->setMinimumSize(QSize(25, 19));
        rbLang_ru->setMaximumSize(QSize(25, 19));
        rbLang_ru->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_ru);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));
        rbLang_ru->setCheckable(true);
        rbLang_ru->setChecked(false);

        horizontalLayout_6->addWidget(rbLang_ru);

        rbLang_cn = new QRadioButton(OverviewPage);
        rbLang_cn->setObjectName(QStringLiteral("rbLang_cn"));
        rbLang_cn->setMinimumSize(QSize(25, 19));
        rbLang_cn->setMaximumSize(QSize(25, 19));
        rbLang_cn->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_cn);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));

        horizontalLayout_6->addWidget(rbLang_cn);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 6, 0, 6);
        txtChat = new QTextEdit(OverviewPage);
        txtChat->setObjectName(QStringLiteral("txtChat"));
        QFont font3;
        font3.setPointSize(10);
        txtChat->setFont(font3);
        txtChat->setStyleSheet(QStringLiteral(""));
        txtChat->setFrameShape(QFrame::Box);
        txtChat->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        txtChat->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        txtChat->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_8->addWidget(txtChat);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 6, 0, 6);
        btnBold = new QPushButton(OverviewPage);
        btnBold->setObjectName(QStringLiteral("btnBold"));
        btnBold->setMaximumSize(QSize(32, 27));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(false);
        font4.setWeight(50);
        btnBold->setFont(font4);
#ifndef QT_NO_TOOLTIP
        btnBold->setToolTip(QStringLiteral("<html><head/><body><p><span style=\" font-weight:600;\">10 CHAT</span></p></body></html>"));
#endif // QT_NO_TOOLTIP
        btnBold->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 8px;\n"
"margin: 0px 6px 0px 0px;"));
        btnBold->setShortcut(QStringLiteral(""));
        btnBold->setCheckable(true);

        horizontalLayout_5->addWidget(btnBold);

        txtChatNick = new QLineEdit(OverviewPage);
        txtChatNick->setObjectName(QStringLiteral("txtChatNick"));
        txtChatNick->setMaximumSize(QSize(999, 27));
        txtChatNick->setFont(font4);
        txtChatNick->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"margin: 0px 6px 0px 0px;"));
        txtChatNick->setMaxLength(20);

        horizontalLayout_5->addWidget(txtChatNick);

        txtChatMsg = new QLineEdit(OverviewPage);
        txtChatMsg->setObjectName(QStringLiteral("txtChatMsg"));
        txtChatMsg->setMaximumSize(QSize(999, 27));
        QFont font5;
        font5.setPointSize(11);
        txtChatMsg->setFont(font5);
        txtChatMsg->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"margin: 0px 6px 0px 0px;"));
        txtChatMsg->setMaxLength(140);

        horizontalLayout_5->addWidget(txtChatMsg);

        btnSmiley = new QPushButton(OverviewPage);
        btnSmiley->setObjectName(QStringLiteral("btnSmiley"));
        btnSmiley->setMaximumSize(QSize(32, 27));
        btnSmiley->setFont(font3);
        btnSmiley->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 8px;\n"
"margin: 0px 6px 0px 0px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/smiley-button"), QSize(), QIcon::Normal, QIcon::Off);
        btnSmiley->setIcon(icon);

        horizontalLayout_5->addWidget(btnSmiley);

        btnChatSend = new QPushButton(OverviewPage);
        btnChatSend->setObjectName(QStringLiteral("btnChatSend"));
        btnChatSend->setMaximumSize(QSize(70, 27));
        btnChatSend->setFont(font5);
        btnChatSend->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout_5->addWidget(btnChatSend);


        verticalLayout_7->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_7);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0));
        label_5->setText(QApplication::translate("OverviewPage", "Wallet", 0));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the NavajoCoin network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OverviewPage", "Spendable:", 0));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", 0));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("OverviewPage", "Stake:", 0));
#ifndef QT_NO_TOOLTIP
        labelStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked, and do not yet count toward the current balance", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OverviewPage", "Unconfirmed:", 0));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", 0));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", 0));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", 0));
#endif // QT_NO_TOOLTIP
        label_icon_title->setText(QApplication::translate("OverviewPage", "Navajocoin - The Unbreakable Code", 0));
        label_2->setText(QString());
        label_4->setText(QApplication::translate("OverviewPage", "<b>Recent transactions</b>", 0));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the NavajoCoin network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        unlockWalletButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        unlockWalletButton->setText(QApplication::translate("OverviewPage", "wallet unlock button", 0));
        rbLang_en->setText(QString());
        rbLang_ru->setText(QString());
        rbLang_cn->setText(QString());
        btnBold->setText(QApplication::translate("OverviewPage", "B", 0));
        txtChatNick->setInputMask(QString());
        txtChatNick->setText(QString());
        txtChatMsg->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnSmiley->setToolTip(QApplication::translate("OverviewPage", "List of emoticons", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnChatSend->setToolTip(QApplication::translate("OverviewPage", "1 CHAT", 0));
#endif // QT_NO_TOOLTIP
        btnChatSend->setText(QApplication::translate("OverviewPage", "Send", 0));
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
