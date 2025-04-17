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
    QWidget *page8;
    QWidget *page2;
    QWidget *page4;
    QWidget *page5;
    QWidget *page6;
    QWidget *page7;
    QWidget *page3;

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
        layoutWidget->setGeometry(QRect(0, 0, 831, 588));
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
        page_buttons->setGeometry(QRect(590, 0, 111, 31));
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
        comboBox->setGeometry(QRect(10, 0, 101, 28));
        page_buttons->addWidget(th1);
        th2 = new QWidget();
        th2->setObjectName("th2");
        comboBox_2 = new QComboBox(th2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(10, 0, 101, 28));
        page_buttons->addWidget(th2);
        th3 = new QWidget();
        th3->setObjectName("th3");
        comboBox_3 = new QComboBox(th3);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(10, 0, 101, 28));
        page_buttons->addWidget(th3);
        th4 = new QWidget();
        th4->setObjectName("th4");
        comboBox_4 = new QComboBox(th4);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(10, 0, 101, 28));
        page_buttons->addWidget(th4);
        th5 = new QWidget();
        th5->setObjectName("th5");
        comboBox_5 = new QComboBox(th5);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName("comboBox_5");
        comboBox_5->setGeometry(QRect(10, 0, 101, 28));
        page_buttons->addWidget(th5);
        th6 = new QWidget();
        th6->setObjectName("th6");
        comboBox_6 = new QComboBox(th6);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName("comboBox_6");
        comboBox_6->setGeometry(QRect(10, 0, 101, 28));
        page_buttons->addWidget(th6);
        th7 = new QWidget();
        th7->setObjectName("th7");
        comboBox_7 = new QComboBox(th7);
        comboBox_7->addItem(QString());
        comboBox_7->addItem(QString());
        comboBox_7->addItem(QString());
        comboBox_7->setObjectName("comboBox_7");
        comboBox_7->setGeometry(QRect(10, 0, 101, 28));
        page_buttons->addWidget(th7);
        th8 = new QWidget();
        th8->setObjectName("th8");
        comboBox_8 = new QComboBox(th8);
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName("comboBox_8");
        comboBox_8->setGeometry(QRect(10, 0, 101, 28));
        page_buttons->addWidget(th8);

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
        buttons->addWidget(page1);
        page8 = new QWidget();
        page8->setObjectName("page8");
        buttons->addWidget(page8);
        page2 = new QWidget();
        page2->setObjectName("page2");
        buttons->addWidget(page2);
        page4 = new QWidget();
        page4->setObjectName("page4");
        buttons->addWidget(page4);
        page5 = new QWidget();
        page5->setObjectName("page5");
        buttons->addWidget(page5);
        page6 = new QWidget();
        page6->setObjectName("page6");
        buttons->addWidget(page6);
        page7 = new QWidget();
        page7->setObjectName("page7");
        buttons->addWidget(page7);
        page3 = new QWidget();
        page3->setObjectName("page3");
        buttons->addWidget(page3);

        verticalLayout_3->addWidget(buttons);


        retranslateUi(learn);

        pins->setDefault(false);
        page_buttons->setCurrentIndex(0);
        buttons->setCurrentIndex(0);
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
    } // retranslateUi

};

namespace Ui {
    class learn: public Ui_learn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARN_H
