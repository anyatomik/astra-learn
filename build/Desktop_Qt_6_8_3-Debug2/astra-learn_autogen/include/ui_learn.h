/********************************************************************************
** Form generated from reading UI file 'learn.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARN_H
#define UI_LEARN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_learn
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QFrame *menu;
    QLabel *windows;
    QWidget *layoutWidget1;
    QHBoxLayout *buttlayout;
    QPushButton *back_to_main;
    QPushButton *pins;
    QPushButton *settings;
    QStackedWidget *page_buttons;
    QWidget *main_2;
    QWidget *th1;
    QComboBox *comboBox;
    QWidget *th2;
    QComboBox *comboBox_2;
    QWidget *th3;
    QComboBox *comboBox_3;
    QWidget *th4;
    QComboBox *comboBox_4;
    QWidget *th5;
    QComboBox *comboBox_5;
    QWidget *th6;
    QComboBox *comboBox_6;
    QWidget *th7;
    QComboBox *comboBox_7;
    QWidget *th8;
    QComboBox *comboBox_8;
    QPushButton *right;
    QPushButton *left;
    QStackedWidget *buttons;
    QWidget *main;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *GoToPin;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QPushButton *butt1;
    QPushButton *butt2;
    QPushButton *butt3;
    QPushButton *butt4;
    QPushButton *butt5;
    QPushButton *butt6;
    QPushButton *butt7;
    QPushButton *butt8;
    QSpacerItem *horizontalSpacer_2;
    QWidget *page1;
    QStackedWidget *pages_1;
    QWidget *page_1_1;
    QScrollArea *page_1_1_scr;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *textBrowser;
    QWidget *page_2_1;
    QScrollArea *page_1_1_scr_2;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_6;
    QTextBrowser *textBrowser_3;
    QWidget *page_3_1;
    QScrollArea *page_1_1_scr_3;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser_2;
    QWidget *page8;
    QStackedWidget *pages_8;
    QWidget *page_1_8;
    QWidget *page_2_8;
    QWidget *page_3_8;
    QWidget *page2;
    QStackedWidget *pages_2;
    QWidget *page_1_2;
    QWidget *page_3_2;
    QWidget *page_2_2;
    QWidget *page4;
    QStackedWidget *pages_4;
    QWidget *page_1_4;
    QWidget *page_2_4;
    QWidget *page_3_4;
    QWidget *page5;
    QStackedWidget *pages_5;
    QWidget *page_1_5;
    QWidget *page_2_5;
    QWidget *page_3_5;
    QWidget *page6;
    QStackedWidget *pages_6;
    QWidget *page_1_6;
    QWidget *page_3_6;
    QWidget *page_2_6;
    QWidget *page7;
    QStackedWidget *pages_7;
    QWidget *page_1_7;
    QWidget *page_2_7;
    QWidget *page_3_7;
    QWidget *page3;
    QStackedWidget *pages_3;
    QWidget *page_1_3;
    QWidget *page_3_3;
    QWidget *page_2_3;

    void setupUi(QWidget *learn)
    {
        if (learn->objectName().isEmpty())
            learn->setObjectName("learn");
        learn->resize(833, 530);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/img/book.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        learn->setWindowIcon(icon);
        layoutWidget = new QWidget(learn);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 831, 583));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        menu = new QFrame(layoutWidget);
        menu->setObjectName("menu");
        menu->setMinimumSize(QSize(800, 35));
        menu->setMaximumSize(QSize(16777215, 40));
        menu->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45)"));
        windows = new QLabel(menu);
        windows->setObjectName("windows");
        windows->setGeometry(QRect(10, 0, 341, 41));
        layoutWidget1 = new QWidget(menu);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(710, 0, 112, 35));
        buttlayout = new QHBoxLayout(layoutWidget1);
        buttlayout->setObjectName("buttlayout");
        buttlayout->setContentsMargins(0, 0, 0, 0);
        back_to_main = new QPushButton(layoutWidget1);
        back_to_main->setObjectName("back_to_main");
        back_to_main->setMinimumSize(QSize(33, 33));
        back_to_main->setMaximumSize(QSize(32, 32));
        back_to_main->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/img/back.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        back_to_main->setIcon(icon1);
        back_to_main->setIconSize(QSize(30, 30));
        back_to_main->setFlat(true);

        buttlayout->addWidget(back_to_main);

        pins = new QPushButton(layoutWidget1);
        pins->setObjectName("pins");
        pins->setMinimumSize(QSize(32, 32));
        pins->setMaximumSize(QSize(32, 32));
        pins->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/img/pin1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pins->setIcon(icon2);
        pins->setIconSize(QSize(35, 35));
        pins->setCheckable(false);
        pins->setChecked(false);
        pins->setAutoDefault(false);
        pins->setFlat(true);

        buttlayout->addWidget(pins);

        settings = new QPushButton(layoutWidget1);
        settings->setObjectName("settings");
        settings->setMinimumSize(QSize(33, 33));
        settings->setMaximumSize(QSize(32, 32));
        settings->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icons/img/settings.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        settings->setIcon(icon3);
        settings->setIconSize(QSize(30, 30));
        settings->setFlat(true);

        buttlayout->addWidget(settings);

        page_buttons = new QStackedWidget(menu);
        page_buttons->setObjectName("page_buttons");
        page_buttons->setGeometry(QRect(550, 0, 101, 31));
        main_2 = new QWidget();
        main_2->setObjectName("main_2");
        page_buttons->addWidget(main_2);
        th1 = new QWidget();
        th1->setObjectName("th1");
        comboBox = new QComboBox(th1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(0, 0, 101, 28));
        comboBox->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        page_buttons->addWidget(th1);
        th2 = new QWidget();
        th2->setObjectName("th2");
        comboBox_2 = new QComboBox(th2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(0, 0, 101, 28));
        page_buttons->addWidget(th2);
        th3 = new QWidget();
        th3->setObjectName("th3");
        comboBox_3 = new QComboBox(th3);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(0, 0, 101, 28));
        page_buttons->addWidget(th3);
        th4 = new QWidget();
        th4->setObjectName("th4");
        comboBox_4 = new QComboBox(th4);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(0, 0, 101, 28));
        page_buttons->addWidget(th4);
        th5 = new QWidget();
        th5->setObjectName("th5");
        comboBox_5 = new QComboBox(th5);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName("comboBox_5");
        comboBox_5->setGeometry(QRect(0, 0, 101, 28));
        page_buttons->addWidget(th5);
        th6 = new QWidget();
        th6->setObjectName("th6");
        comboBox_6 = new QComboBox(th6);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName("comboBox_6");
        comboBox_6->setGeometry(QRect(0, 0, 101, 28));
        page_buttons->addWidget(th6);
        th7 = new QWidget();
        th7->setObjectName("th7");
        comboBox_7 = new QComboBox(th7);
        comboBox_7->addItem(QString());
        comboBox_7->addItem(QString());
        comboBox_7->addItem(QString());
        comboBox_7->setObjectName("comboBox_7");
        comboBox_7->setGeometry(QRect(0, 0, 101, 28));
        page_buttons->addWidget(th7);
        th8 = new QWidget();
        th8->setObjectName("th8");
        comboBox_8 = new QComboBox(th8);
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName("comboBox_8");
        comboBox_8->setGeometry(QRect(0, 0, 101, 28));
        page_buttons->addWidget(th8);
        right = new QPushButton(menu);
        right->setObjectName("right");
        right->setGeometry(QRect(660, 0, 31, 28));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/icons/img/right.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        right->setIcon(icon4);
        right->setIconSize(QSize(20, 20));
        left = new QPushButton(menu);
        left->setObjectName("left");
        left->setGeometry(QRect(510, 0, 31, 28));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/icons/img/left.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        left->setIcon(icon5);
        left->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(menu);

        buttons = new QStackedWidget(layoutWidget);
        buttons->setObjectName("buttons");
        buttons->setMinimumSize(QSize(814, 540));
        buttons->setMaximumSize(QSize(16777215, 10000000));
        main = new QWidget();
        main->setObjectName("main");
        layoutWidget2 = new QWidget(main);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(0, 3, 820, 482));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(layoutWidget2);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setMinimumSize(QSize(212, 450));
        scrollArea_2->setMaximumSize(QSize(16777215, 530));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 210, 478));
        layoutWidget3 = new QWidget(scrollAreaWidgetContents_3);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(0, 0, 211, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(layoutWidget3);
        label->setObjectName("label");
        label->setMaximumSize(QSize(65, 60));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        GoToPin = new QPushButton(layoutWidget3);
        GoToPin->setObjectName("GoToPin");

        verticalLayout_2->addWidget(GoToPin);

        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget3);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);

        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        horizontalLayout->addWidget(scrollArea_2);

        scrollArea = new QScrollArea(layoutWidget2);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setMinimumSize(QSize(600, 450));
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 584, 806));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        butt1 = new QPushButton(scrollAreaWidgetContents);
        butt1->setObjectName("butt1");
        butt1->setMinimumSize(QSize(0, 90));
        butt1->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout->addWidget(butt1);

        butt2 = new QPushButton(scrollAreaWidgetContents);
        butt2->setObjectName("butt2");
        butt2->setMinimumSize(QSize(0, 90));
        butt2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout->addWidget(butt2);

        butt3 = new QPushButton(scrollAreaWidgetContents);
        butt3->setObjectName("butt3");
        butt3->setMinimumSize(QSize(0, 90));
        butt3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout->addWidget(butt3);

        butt4 = new QPushButton(scrollAreaWidgetContents);
        butt4->setObjectName("butt4");
        butt4->setMinimumSize(QSize(0, 90));
        butt4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout->addWidget(butt4);

        butt5 = new QPushButton(scrollAreaWidgetContents);
        butt5->setObjectName("butt5");
        butt5->setMinimumSize(QSize(0, 90));
        butt5->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout->addWidget(butt5);

        butt6 = new QPushButton(scrollAreaWidgetContents);
        butt6->setObjectName("butt6");
        butt6->setMinimumSize(QSize(0, 90));
        butt6->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout->addWidget(butt6);

        butt7 = new QPushButton(scrollAreaWidgetContents);
        butt7->setObjectName("butt7");
        butt7->setMinimumSize(QSize(0, 90));
        butt7->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout->addWidget(butt7);

        butt8 = new QPushButton(scrollAreaWidgetContents);
        butt8->setObjectName("butt8");
        butt8->setMinimumSize(QSize(0, 90));
        butt8->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout->addWidget(butt8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        buttons->addWidget(main);
        page1 = new QWidget();
        page1->setObjectName("page1");
        pages_1 = new QStackedWidget(page1);
        pages_1->setObjectName("pages_1");
        pages_1->setGeometry(QRect(-1, -1, 831, 491));
        page_1_1 = new QWidget();
        page_1_1->setObjectName("page_1_1");
        page_1_1_scr = new QScrollArea(page_1_1);
        page_1_1_scr->setObjectName("page_1_1_scr");
        page_1_1_scr->setGeometry(QRect(-1, -1, 831, 491));
        page_1_1_scr->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 829, 489));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        textBrowser = new QTextBrowser(scrollAreaWidgetContents_2);
        textBrowser->setObjectName("textBrowser");

        verticalLayout_4->addWidget(textBrowser);

        page_1_1_scr->setWidget(scrollAreaWidgetContents_2);
        pages_1->addWidget(page_1_1);
        page_2_1 = new QWidget();
        page_2_1->setObjectName("page_2_1");
        page_1_1_scr_2 = new QScrollArea(page_2_1);
        page_1_1_scr_2->setObjectName("page_1_1_scr_2");
        page_1_1_scr_2->setGeometry(QRect(-1, -1, 831, 491));
        page_1_1_scr_2->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName("scrollAreaWidgetContents_5");
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 829, 489));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        textBrowser_3 = new QTextBrowser(scrollAreaWidgetContents_5);
        textBrowser_3->setObjectName("textBrowser_3");

        verticalLayout_6->addWidget(textBrowser_3);

        page_1_1_scr_2->setWidget(scrollAreaWidgetContents_5);
        pages_1->addWidget(page_2_1);
        page_3_1 = new QWidget();
        page_3_1->setObjectName("page_3_1");
        page_1_1_scr_3 = new QScrollArea(page_3_1);
        page_1_1_scr_3->setObjectName("page_1_1_scr_3");
        page_1_1_scr_3->setGeometry(QRect(-1, -1, 831, 491));
        page_1_1_scr_3->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 829, 489));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        textBrowser_2 = new QTextBrowser(scrollAreaWidgetContents_4);
        textBrowser_2->setObjectName("textBrowser_2");

        verticalLayout_5->addWidget(textBrowser_2);

        page_1_1_scr_3->setWidget(scrollAreaWidgetContents_4);
        pages_1->addWidget(page_3_1);
        buttons->addWidget(page1);
        page8 = new QWidget();
        page8->setObjectName("page8");
        pages_8 = new QStackedWidget(page8);
        pages_8->setObjectName("pages_8");
        pages_8->setGeometry(QRect(0, 0, 831, 501));
        page_1_8 = new QWidget();
        page_1_8->setObjectName("page_1_8");
        pages_8->addWidget(page_1_8);
        page_2_8 = new QWidget();
        page_2_8->setObjectName("page_2_8");
        pages_8->addWidget(page_2_8);
        page_3_8 = new QWidget();
        page_3_8->setObjectName("page_3_8");
        pages_8->addWidget(page_3_8);
        buttons->addWidget(page8);
        page2 = new QWidget();
        page2->setObjectName("page2");
        pages_2 = new QStackedWidget(page2);
        pages_2->setObjectName("pages_2");
        pages_2->setGeometry(QRect(0, 0, 831, 501));
        page_1_2 = new QWidget();
        page_1_2->setObjectName("page_1_2");
        pages_2->addWidget(page_1_2);
        page_3_2 = new QWidget();
        page_3_2->setObjectName("page_3_2");
        pages_2->addWidget(page_3_2);
        page_2_2 = new QWidget();
        page_2_2->setObjectName("page_2_2");
        pages_2->addWidget(page_2_2);
        buttons->addWidget(page2);
        page4 = new QWidget();
        page4->setObjectName("page4");
        pages_4 = new QStackedWidget(page4);
        pages_4->setObjectName("pages_4");
        pages_4->setGeometry(QRect(0, 0, 831, 501));
        page_1_4 = new QWidget();
        page_1_4->setObjectName("page_1_4");
        pages_4->addWidget(page_1_4);
        page_2_4 = new QWidget();
        page_2_4->setObjectName("page_2_4");
        pages_4->addWidget(page_2_4);
        page_3_4 = new QWidget();
        page_3_4->setObjectName("page_3_4");
        pages_4->addWidget(page_3_4);
        buttons->addWidget(page4);
        page5 = new QWidget();
        page5->setObjectName("page5");
        pages_5 = new QStackedWidget(page5);
        pages_5->setObjectName("pages_5");
        pages_5->setGeometry(QRect(0, 0, 831, 501));
        page_1_5 = new QWidget();
        page_1_5->setObjectName("page_1_5");
        pages_5->addWidget(page_1_5);
        page_2_5 = new QWidget();
        page_2_5->setObjectName("page_2_5");
        pages_5->addWidget(page_2_5);
        page_3_5 = new QWidget();
        page_3_5->setObjectName("page_3_5");
        pages_5->addWidget(page_3_5);
        buttons->addWidget(page5);
        page6 = new QWidget();
        page6->setObjectName("page6");
        pages_6 = new QStackedWidget(page6);
        pages_6->setObjectName("pages_6");
        pages_6->setGeometry(QRect(0, 0, 831, 501));
        page_1_6 = new QWidget();
        page_1_6->setObjectName("page_1_6");
        pages_6->addWidget(page_1_6);
        page_3_6 = new QWidget();
        page_3_6->setObjectName("page_3_6");
        pages_6->addWidget(page_3_6);
        page_2_6 = new QWidget();
        page_2_6->setObjectName("page_2_6");
        pages_6->addWidget(page_2_6);
        buttons->addWidget(page6);
        page7 = new QWidget();
        page7->setObjectName("page7");
        pages_7 = new QStackedWidget(page7);
        pages_7->setObjectName("pages_7");
        pages_7->setGeometry(QRect(0, 0, 831, 501));
        page_1_7 = new QWidget();
        page_1_7->setObjectName("page_1_7");
        pages_7->addWidget(page_1_7);
        page_2_7 = new QWidget();
        page_2_7->setObjectName("page_2_7");
        pages_7->addWidget(page_2_7);
        page_3_7 = new QWidget();
        page_3_7->setObjectName("page_3_7");
        pages_7->addWidget(page_3_7);
        buttons->addWidget(page7);
        page3 = new QWidget();
        page3->setObjectName("page3");
        pages_3 = new QStackedWidget(page3);
        pages_3->setObjectName("pages_3");
        pages_3->setGeometry(QRect(0, 0, 831, 501));
        page_1_3 = new QWidget();
        page_1_3->setObjectName("page_1_3");
        pages_3->addWidget(page_1_3);
        page_3_3 = new QWidget();
        page_3_3->setObjectName("page_3_3");
        pages_3->addWidget(page_3_3);
        page_2_3 = new QWidget();
        page_2_3->setObjectName("page_2_3");
        pages_3->addWidget(page_2_3);
        buttons->addWidget(page3);

        verticalLayout_3->addWidget(buttons);


        retranslateUi(learn);

        pins->setDefault(false);
        page_buttons->setCurrentIndex(1);
        buttons->setCurrentIndex(1);
        butt1->setDefault(false);
        butt2->setDefault(false);
        butt3->setDefault(false);


        QMetaObject::connectSlotsByName(learn);
    } // setupUi

    void retranslateUi(QWidget *learn)
    {
        learn->setWindowTitle(QCoreApplication::translate("learn", "\320\236\320\261\321\203\321\207\320\265\320\275\320\270\320\265", nullptr));
        windows->setText(QCoreApplication::translate("learn", "\320\222\321\213\320\261\320\276\321\200 \321\202\320\265\320\274\321\213", nullptr));
        back_to_main->setText(QString());
        pins->setText(QString());
        settings->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 3", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 1", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 2", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 3", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 1", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 2", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 3", nullptr));

        comboBox_4->setItemText(0, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 1", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 2", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 3", nullptr));

        comboBox_5->setItemText(0, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 1", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 2", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 3", nullptr));

        comboBox_6->setItemText(0, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 1", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 2", nullptr));
        comboBox_6->setItemText(2, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 3", nullptr));

        comboBox_7->setItemText(0, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 1", nullptr));
        comboBox_7->setItemText(1, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 2", nullptr));
        comboBox_7->setItemText(2, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 3", nullptr));

        comboBox_8->setItemText(0, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 1", nullptr));
        comboBox_8->setItemText(1, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 2", nullptr));
        comboBox_8->setItemText(2, QCoreApplication::translate("learn", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260 3", nullptr));

        right->setText(QString());
        left->setText(QString());
        label->setText(QCoreApplication::translate("learn", "\320\227\320\260\320\272\320\273\320\260\320\264\320\272\320\270:", nullptr));
        label_2->setText(QString());
        GoToPin->setText(QCoreApplication::translate("learn", "\320\237\320\265\321\200\320\265\320\271\321\202\320\270 \320\272 \320\267\320\260\320\272\320\273\320\260\320\264\320\272\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("learn", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \320\267\320\260\320\272\320\273\320\260\320\264\320\272\320\270", nullptr));
        butt1->setText(QCoreApplication::translate("learn", "\320\242\320\265\320\274\320\260 1. \320\236 \321\201\320\270\321\201\321\202\320\265\320\274\320\265", nullptr));
        butt2->setText(QCoreApplication::translate("learn", "\320\242\320\265\320\274\320\260 2. \320\227\320\260\320\277\321\203\321\201\320\272 \320\270 \320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\320\265 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        butt3->setText(QCoreApplication::translate("learn", "\320\242\320\265\320\274\320\260 3. \320\240\320\260\320\261\320\276\321\207\320\270\320\271 \321\201\321\202\320\276\320\273 Fly", nullptr));
        butt4->setText(QCoreApplication::translate("learn", "\320\242\320\265\320\274\320\260 4. \320\223\321\200\320\260\321\204\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213 \320\270 \321\203\321\202\320\270\320\273\320\270\321\202\321\213", nullptr));
        butt5->setText(QCoreApplication::translate("learn", "\320\242\320\265\320\274\320\260 5. \320\237\320\265\321\207\320\260\321\202\321\214 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\276\320\262", nullptr));
        butt6->setText(QCoreApplication::translate("learn", "\320\242\320\265\320\274\320\260 6. \320\241\321\200\320\265\320\264\321\201\321\202\320\262\320\260 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270 \321\200\320\260\320\261\320\276\321\202\321\213 \320\262 \321\201\320\265\321\202\320\270", nullptr));
        butt7->setText(QCoreApplication::translate("learn", "\320\242\320\265\320\274\320\260 7. \320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \320\241\320\227\320\230", nullptr));
        butt8->setText(QCoreApplication::translate("learn", "\320\242\320\265\320\274\320\260 8. \320\241\320\270\321\201\321\202\320\265\320\274\320\260 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\261\320\260\320\267\320\260\320\274\320\270 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("learn", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">\320\236\320\261\321\211\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:700;\"><br /></p>\n"
"<p style=\" margin-top"
                        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Astra Linux </span><span style=\" font-size:12pt;\">- \321\200\320\276\321\201\321\201\320\270\320\271\321\201\320\272\320\260\321\217 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\276\320\275\320\275\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260, \321\200\320\260\320\267\321\200\320\260\320\261\320\260\321\202\321\213\320\262\320\260\320\265\320\274\320\260\321\217 \320\275\320\260 \320\261\320\260\320\267\320\265 \321\217\320\264\321\200\320\260 Linux, \320\275\320\260 \320\264\320\260\320\275\320\275\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\260\320\272\321\202\320\270\320\262\320\275\320\276 \320\262\320\275\320\265\320\264\321\200\321\217\320\265\321\202\321\201\321\217 \320\262 \320\263\320\276\321\201\321\203\320\264\320\260\321\200\321\201\321\202\320\262\320\265\320\275\320\275\320\275\321"
                        "\213\320\265 \321\203\321\207\321\200\320\265\320\266\320\264\320\265\320\275\320\270\321\217. \320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\275\320\260\321\207\320\260\320\273\320\260 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\320\272\320\270 \320\261\320\265\321\200\320\265\321\202 \320\275\320\260\321\207\320\260\320\273\320\276 \321\201 2008 \320\263\320\276\320\264\320\276\320\262, \320\260 \320\277\320\265\321\200\320\262\320\260\321\217 \320\262\320\265\321\200\321\201\320\270\321\217 \320\261\321\213\320\273\320\260 \320\262\321\213\320\277\321\203\321\211\320\265\320\275\320\260 \320\272 \320\272\320\276\320\275\321\206\321\203 2010 \320\263\320\276\320\264\320\260. \320\222 \321\201\320\270\321\201\321\202\320\265\320\274\320\265 \320\277\321\200\320\270\321\201\321\203\321\202\321\201\321\202\320\262\321\203\321\216\321\202 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217 \321\202\320\270\320\277\320\260 .deb, \320\272\320\276\321"
                        "\202\320\276\321\200\321\213\320\265 \320\274\320\276\320\266\320\275\320\276 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \321\201 \320\277\320\276\320\274\320\276\321\211\321\214\321\216 \320\277\320\260\320\272\320\265\321\202\320\275\320\276\320\263\320\276 \320\274\320\265\320\275\320\265\320\264\320\266\320\265\321\200\320\260 apt. \320\222 \321\201\320\276\321\201\321\202\320\260\320\262 \321\201\320\270\321\201\321\202\320\265\320\274\321\213 \320\262\321\205\320\276\320\264\321\217\321\202,  \320\277\321\200\320\265\320\264\321\203\321\201\321\202\320\260\320\275\320\260\320\262\320\273\320\270\320\262\320\260\321\217\321\201\321\214: LibreOffice(\320\260\320\275\320\260\320\273\320\276\320\263 Microsoft Office), \320\261\321\200\320\260\321\203\320\267\320\265\321\200 Firefox, \320\277\320\276\321\207\321\202\320\276\320\262\321\213\320\271 \320\272\320\273\320\270\320\265\320\275\321\202 Thunderbird(\320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\276\320"
                        "\262\321\213\320\262\320\260\320\265\321\202 \321\215\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\321\213\320\271 \320\277\320\276\321\207\321\202\320\276\320\262\321\213\320\271 \321\217\321\211\320\270\320\272) \320\270 \320\264\321\200\321\203\320\263\320\270\320\265 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217 \320\270 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213. \320\236\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\321\217(\320\262 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\320\270 \320\276\321\202 \320\262\320\265\321\200\321\201\320\270\320\271) \320\277\321\200\320\276\320\270\321\201\321\205\320\276\320\264\321\217\321\202 \320\264\320\262\320\260 \321\200\320\260\320\267\320\260 \320\262 \320\263\320\276\320\264. \320\236\321\204\320\270\321\206\320\270\320\260\320\273\321\214\320\275\321\213\320\271 \321\201\320\260\320\271\321\202 \321\201\320\270\321\201\321"
                        "\202\320\265\320\274\321\213: </span><a href=\"https://astralinux.ru/\"><span style=\" text-decoration: underline; color:#007af4;\">astralinux.ru</span></a><span style=\" font-size:12pt;\"> . \320\224\320\270\321\201\321\202\321\200\320\270\320\261\321\203\321\202\320\270\320\262 \320\276\320\261\320\265\321\211\320\260\320\265\321\202 \320\261\320\265\320\267\320\276\320\277\320\260\321\201\320\275\320\276\321\201\321\202\321\214 \320\270 \320\275\320\260\320\264\320\265\320\266\320\275\320\276\321\201\321\202\321\214, \320\260 \321\202\320\260\320\272 \320\266\320\265 \321\201\320\276\320\262\320\274\320\265\321\201\321\202\320\270\320\274\320\276\321\201\321\202\321\214 \321\201 \320\277\320\276\320\274\320\276\321\211\321\214\321\216 Ready for Astra.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; text-decoration: underline; color:#007af4;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom"
                        ":0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/new/learn/img/logoNewAL.png\" /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#b7b7b7;\">\320\233\320\276\320\263\320\276\321\202\320\276\321\202\320\270\320\277 Astra Linux</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("learn", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">\320\223\321\200\320\260\321\204\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\320\271\321\201</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:700;"
                        "\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\320\222 \320\272\320\260\321\207\320\265\321\201\321\202\320\262\320\265 \320\263\321\200\320\260\321\204\320\270\321\207\320\265\321\201\320\276\320\272\320\276\320\263\320\276 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\320\271\321\201\320\260 \321\201\320\270\321\201\321\202\320\265\320\274\321\213 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\265\321\202\321\201\321\217 Fly, \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\260\321\217 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\320\272\320\260 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\270, \320\262\320\272\320\273\321\216\321\207\320\260\320\265\321\202 \320\262 \321\201\320\265\320\261\321\217 \321\200\320\260\320\261\320\276\321\207\320\270\320\271 \321\201\321\202\320\276\320\273, "
                        "\320\274\320\265\320\275\321\216 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\271 \320\270 \320\277\321\200\320\276\321\207\320\270\320\265 \320\274\320\265\321\205\320\260\320\275\320\270\320\267\320\274\321\213 \320\264\320\273\321\217 \320\263\321\200\320\260\321\204\320\270\321\207\320\265\321\201\320\272\320\276\320\271 \321\200\320\260\320\261\320\276\321\202\321\213 \321\201 \321\201\320\270\321\201\321\202\320\265\320\274\320\276\320\271.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/new/learn/img/Screenshot_20250522_091723 (2).png\" /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; text-decor"
                        "ation: underline; color:#007af4;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#b7b7b7;\">\320\240\320\260\320\261\320\276\321\207\320\270\320\271 \321\201\321\202\320\276\320\273 \321\201\320\270\321\201\321\202\320\265\320\274\321\213</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-style:italic; color:#b7b7b7;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/new/learn/img/Screenshot_20250522_091811.png\" /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-i"
                        "ndent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#b7b7b7;\">\320\234\320\265\320\275\321\216 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\271</span></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("learn", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">\320\237\321\200\320\270\320\274\320\265\320\275\320\265\320\275\320\270\320\265</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:700;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px;"
                        " margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\235\320\260 \320\264\320\260\320\275\320\275\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 Astra Linux \320\277\321\200\320\270\320\274\320\265\320\275\321\217\320\265\321\202\321\201\321\217 \320\262 \320\263\320\276\321\201\321\203\320\264\320\260\321\200\321\201\321\202\320\262\320\265\320\275\320\275\321\213\321\205 \321\203\321\207\321\200\320\265\320\266\320\264\320\265\320\275\320\270\320\271 \320\262 \321\200\320\260\320\267\320\273\320\270\321\207\320\275\321\213\321\205 \321\201\321\204\320\265\321\200\320\260\321\205, \320\275\320\260\320\277\321\200\320\270\320\274\320\265\321\200, \320\267\320\264\321\200\320\260\320\262\320\276\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\320\265, \320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265, \320\277\321\200\320\276\320\274\321\213\321\210\320\273\320\265\320\275\320\275\320\276\321\201\321\202\320\270 \320\270 \320\226"
                        "\320\232\320\245. \320\235\320\260\320\277\321\200\320\270\320\274\320\265\321\200, \320\275\320\260 \320\275\320\265\320\271 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\260 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\276\320\275\320\275\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260 \320\235\320\260\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\276 \321\206\320\265\320\275\321\202\321\200\320\260 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\276\320\261\320\276\321\200\320\276\320\275\320\276\320\271 \320\240\320\244. \320\234\320\276\320\266\320\265\321\202 \320\277\321\200\320\270\320\274\320\265\320\275\321\217\321\202\321\214\321\201\321\217 \321\202\320\260\320\272\320\266\320\265 \320\270 \320\264\320\273\321\217 \320\273\320\270\321\207\320\275\320\276\320\263\320\276 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320"
                        "\270\321\217 \320\270 \320\277\321\200\320\276\321\207\320\270\321\205 \320\275\321\203\320\266\320\264.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; text-decoration: underline; color:#007af4;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/new/learn/img/Emblem_of_Ministry_of_Health_of_.png\" /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#b7b7b7;\">\320\255\320\274\320\261\320\273\320\265\320\274\320\274\320\260 \320\267\320\264\321\200\320\260\320\262\320\276\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \320\240\320\244</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-ind"
                        "ent:0; text-indent:0px; font-style:italic; color:#b7b7b7;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class learn: public Ui_learn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARN_H
