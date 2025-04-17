/********************************************************************************
** Form generated from reading UI file 'tests.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTS_H
#define UI_TESTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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

class Ui_tests
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFrame *menu;
    QLabel *windows;
    QWidget *layoutWidget;
    QHBoxLayout *buttlayout;
    QPushButton *back_to_main;
    QPushButton *settings;
    QStackedWidget *main_all;
    QWidget *nothing;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QPushButton *butt1;
    QPushButton *butt2;
    QPushButton *butt3;
    QPushButton *butt4;
    QPushButton *butt5;
    QPushButton *butt6;
    QPushButton *butt7;
    QPushButton *butt8;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QStackedWidget *stackedWidget_2;
    QWidget *th1;
    QScrollArea *scrollArea1;
    QWidget *scrollAreaWidgetContents1;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *th2;
    QScrollArea *scrollArea2;
    QWidget *scrollAreaWidgetContents2;
    QWidget *th3;
    QScrollArea *scrollArea3;
    QWidget *scrollAreaWidgetContents3;
    QWidget *th4;
    QScrollArea *scrollArea4;
    QWidget *scrollAreaWidgetContents4;
    QWidget *th5;
    QScrollArea *scrollArea5;
    QWidget *scrollAreaWidgetContents5;
    QWidget *th6;
    QScrollArea *scrollArea6;
    QWidget *scrollAreaWidgetContents6;
    QWidget *th7;
    QScrollArea *scrollArea7;
    QWidget *scrollAreaWidgetContents7;
    QWidget *th8;
    QScrollArea *scrollArea8;
    QWidget *scrollAreaWidgetContents8;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QSpacerItem *verticalSpacer;
    QWidget *theme_1_test1;
    QWidget *theme_2_test1;
    QWidget *theme_3_test1;
    QWidget *theme_4;
    QWidget *theme_6;
    QWidget *theme_5;
    QWidget *theme_7;
    QWidget *theme_8;

    void setupUi(QWidget *tests)
    {
        if (tests->objectName().isEmpty())
            tests->setObjectName("tests");
        tests->resize(841, 525);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/img/applyed.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tests->setWindowIcon(icon);
        widget = new QWidget(tests);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 841, 521));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        menu = new QFrame(widget);
        menu->setObjectName("menu");
        menu->setMinimumSize(QSize(800, 35));
        menu->setMaximumSize(QSize(16777215, 40));
        menu->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45)"));
        windows = new QLabel(menu);
        windows->setObjectName("windows");
        windows->setGeometry(QRect(10, 0, 341, 41));
        layoutWidget = new QWidget(menu);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(760, 0, 81, 35));
        buttlayout = new QHBoxLayout(layoutWidget);
        buttlayout->setObjectName("buttlayout");
        buttlayout->setContentsMargins(0, 0, 0, 0);
        back_to_main = new QPushButton(layoutWidget);
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

        settings = new QPushButton(layoutWidget);
        settings->setObjectName("settings");
        settings->setMinimumSize(QSize(33, 33));
        settings->setMaximumSize(QSize(32, 32));
        settings->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/img/settings.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        settings->setIcon(icon2);
        settings->setIconSize(QSize(30, 30));
        settings->setFlat(true);

        buttlayout->addWidget(settings);


        verticalLayout->addWidget(menu);

        main_all = new QStackedWidget(widget);
        main_all->setObjectName("main_all");
        main_all->setMinimumSize(QSize(470, 0));
        nothing = new QWidget();
        nothing->setObjectName("nothing");
        widget1 = new QWidget(nothing);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 0, 850, 481));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(widget1);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setMinimumSize(QSize(355, 200));
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 339, 806));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        butt1 = new QPushButton(scrollAreaWidgetContents);
        butt1->setObjectName("butt1");
        butt1->setMinimumSize(QSize(0, 90));
        butt1->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_2->addWidget(butt1);

        butt2 = new QPushButton(scrollAreaWidgetContents);
        butt2->setObjectName("butt2");
        butt2->setMinimumSize(QSize(0, 90));
        butt2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_2->addWidget(butt2);

        butt3 = new QPushButton(scrollAreaWidgetContents);
        butt3->setObjectName("butt3");
        butt3->setMinimumSize(QSize(0, 90));
        butt3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_2->addWidget(butt3);

        butt4 = new QPushButton(scrollAreaWidgetContents);
        butt4->setObjectName("butt4");
        butt4->setMinimumSize(QSize(0, 90));
        butt4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_2->addWidget(butt4);

        butt5 = new QPushButton(scrollAreaWidgetContents);
        butt5->setObjectName("butt5");
        butt5->setMinimumSize(QSize(0, 90));
        butt5->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_2->addWidget(butt5);

        butt6 = new QPushButton(scrollAreaWidgetContents);
        butt6->setObjectName("butt6");
        butt6->setMinimumSize(QSize(0, 90));
        butt6->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_2->addWidget(butt6);

        butt7 = new QPushButton(scrollAreaWidgetContents);
        butt7->setObjectName("butt7");
        butt7->setMinimumSize(QSize(0, 90));
        butt7->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_2->addWidget(butt7);

        butt8 = new QPushButton(scrollAreaWidgetContents);
        butt8->setObjectName("butt8");
        butt8->setMinimumSize(QSize(0, 90));
        butt8->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout_2->addWidget(butt8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        stackedWidget_2 = new QStackedWidget(widget1);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setMinimumSize(QSize(465, 266));
        th1 = new QWidget();
        th1->setObjectName("th1");
        scrollArea1 = new QScrollArea(th1);
        scrollArea1->setObjectName("scrollArea1");
        scrollArea1->setGeometry(QRect(0, 0, 461, 271));
        scrollArea1->setWidgetResizable(true);
        scrollAreaWidgetContents1 = new QWidget();
        scrollAreaWidgetContents1->setObjectName("scrollAreaWidgetContents1");
        scrollAreaWidgetContents1->setGeometry(QRect(0, 0, 445, 300));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        pushButton = new QPushButton(scrollAreaWidgetContents1);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 90));

        verticalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 90));

        verticalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(0, 90));

        verticalLayout_4->addWidget(pushButton_3);

        scrollArea1->setWidget(scrollAreaWidgetContents1);
        stackedWidget_2->addWidget(th1);
        th2 = new QWidget();
        th2->setObjectName("th2");
        scrollArea2 = new QScrollArea(th2);
        scrollArea2->setObjectName("scrollArea2");
        scrollArea2->setGeometry(QRect(0, 0, 471, 271));
        scrollArea2->setWidgetResizable(true);
        scrollAreaWidgetContents2 = new QWidget();
        scrollAreaWidgetContents2->setObjectName("scrollAreaWidgetContents2");
        scrollAreaWidgetContents2->setGeometry(QRect(0, 0, 469, 269));
        scrollArea2->setWidget(scrollAreaWidgetContents2);
        stackedWidget_2->addWidget(th2);
        th3 = new QWidget();
        th3->setObjectName("th3");
        scrollArea3 = new QScrollArea(th3);
        scrollArea3->setObjectName("scrollArea3");
        scrollArea3->setGeometry(QRect(0, 0, 471, 271));
        scrollArea3->setWidgetResizable(true);
        scrollAreaWidgetContents3 = new QWidget();
        scrollAreaWidgetContents3->setObjectName("scrollAreaWidgetContents3");
        scrollAreaWidgetContents3->setGeometry(QRect(0, 0, 469, 269));
        scrollArea3->setWidget(scrollAreaWidgetContents3);
        stackedWidget_2->addWidget(th3);
        th4 = new QWidget();
        th4->setObjectName("th4");
        scrollArea4 = new QScrollArea(th4);
        scrollArea4->setObjectName("scrollArea4");
        scrollArea4->setGeometry(QRect(0, 0, 471, 271));
        scrollArea4->setWidgetResizable(true);
        scrollAreaWidgetContents4 = new QWidget();
        scrollAreaWidgetContents4->setObjectName("scrollAreaWidgetContents4");
        scrollAreaWidgetContents4->setGeometry(QRect(0, 0, 469, 269));
        scrollArea4->setWidget(scrollAreaWidgetContents4);
        stackedWidget_2->addWidget(th4);
        th5 = new QWidget();
        th5->setObjectName("th5");
        scrollArea5 = new QScrollArea(th5);
        scrollArea5->setObjectName("scrollArea5");
        scrollArea5->setGeometry(QRect(0, 0, 471, 271));
        scrollArea5->setWidgetResizable(true);
        scrollAreaWidgetContents5 = new QWidget();
        scrollAreaWidgetContents5->setObjectName("scrollAreaWidgetContents5");
        scrollAreaWidgetContents5->setGeometry(QRect(0, 0, 469, 269));
        scrollArea5->setWidget(scrollAreaWidgetContents5);
        stackedWidget_2->addWidget(th5);
        th6 = new QWidget();
        th6->setObjectName("th6");
        scrollArea6 = new QScrollArea(th6);
        scrollArea6->setObjectName("scrollArea6");
        scrollArea6->setGeometry(QRect(0, 0, 471, 271));
        scrollArea6->setWidgetResizable(true);
        scrollAreaWidgetContents6 = new QWidget();
        scrollAreaWidgetContents6->setObjectName("scrollAreaWidgetContents6");
        scrollAreaWidgetContents6->setGeometry(QRect(0, 0, 469, 269));
        scrollArea6->setWidget(scrollAreaWidgetContents6);
        stackedWidget_2->addWidget(th6);
        th7 = new QWidget();
        th7->setObjectName("th7");
        scrollArea7 = new QScrollArea(th7);
        scrollArea7->setObjectName("scrollArea7");
        scrollArea7->setGeometry(QRect(0, 0, 471, 271));
        scrollArea7->setWidgetResizable(true);
        scrollAreaWidgetContents7 = new QWidget();
        scrollAreaWidgetContents7->setObjectName("scrollAreaWidgetContents7");
        scrollAreaWidgetContents7->setGeometry(QRect(0, 0, 469, 269));
        scrollArea7->setWidget(scrollAreaWidgetContents7);
        stackedWidget_2->addWidget(th7);
        th8 = new QWidget();
        th8->setObjectName("th8");
        scrollArea8 = new QScrollArea(th8);
        scrollArea8->setObjectName("scrollArea8");
        scrollArea8->setGeometry(QRect(0, 0, 471, 271));
        scrollArea8->setWidgetResizable(true);
        scrollAreaWidgetContents8 = new QWidget();
        scrollAreaWidgetContents8->setObjectName("scrollAreaWidgetContents8");
        scrollAreaWidgetContents8->setGeometry(QRect(0, 0, 469, 269));
        scrollArea8->setWidget(scrollAreaWidgetContents8);
        stackedWidget_2->addWidget(th8);

        horizontalLayout_4->addWidget(stackedWidget_2);

        verticalSpacer_2 = new QSpacerItem(12, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame = new QFrame(widget1);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(460, 160));
        frame->setMaximumSize(QSize(16777215, 16777215));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45)"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);

        horizontalLayout_2->addWidget(frame);

        verticalSpacer = new QSpacerItem(10, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_5);

        main_all->addWidget(nothing);
        theme_1_test1 = new QWidget();
        theme_1_test1->setObjectName("theme_1_test1");
        main_all->addWidget(theme_1_test1);
        theme_2_test1 = new QWidget();
        theme_2_test1->setObjectName("theme_2_test1");
        main_all->addWidget(theme_2_test1);
        theme_3_test1 = new QWidget();
        theme_3_test1->setObjectName("theme_3_test1");
        main_all->addWidget(theme_3_test1);
        theme_4 = new QWidget();
        theme_4->setObjectName("theme_4");
        main_all->addWidget(theme_4);
        theme_6 = new QWidget();
        theme_6->setObjectName("theme_6");
        main_all->addWidget(theme_6);
        theme_5 = new QWidget();
        theme_5->setObjectName("theme_5");
        main_all->addWidget(theme_5);
        theme_7 = new QWidget();
        theme_7->setObjectName("theme_7");
        main_all->addWidget(theme_7);
        theme_8 = new QWidget();
        theme_8->setObjectName("theme_8");
        main_all->addWidget(theme_8);

        verticalLayout->addWidget(main_all);


        retranslateUi(tests);

        main_all->setCurrentIndex(0);
        butt1->setDefault(false);
        butt2->setDefault(false);
        butt3->setDefault(false);
        stackedWidget_2->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(tests);
    } // setupUi

    void retranslateUi(QWidget *tests)
    {
        tests->setWindowTitle(QCoreApplication::translate("tests", "\320\242\320\265\321\201\321\202\321\213", nullptr));
        windows->setText(QCoreApplication::translate("tests", "\320\222\321\213\320\261\320\276\321\200 \321\202\320\265\320\274\321\213", nullptr));
        back_to_main->setText(QString());
        settings->setText(QString());
        butt1->setText(QCoreApplication::translate("tests", "\320\242\320\265\320\274\320\260 1. \320\236 \321\201\320\270\321\201\321\202\320\265\320\274\320\265", nullptr));
        butt2->setText(QCoreApplication::translate("tests", "\320\242\320\265\320\274\320\260 2. \320\227\320\260\320\277\321\203\321\201\320\272 \320\270 \320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\320\265 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        butt3->setText(QCoreApplication::translate("tests", "\320\242\320\265\320\274\320\260 3. \320\240\320\260\320\261\320\276\321\207\320\270\320\271 \321\201\321\202\320\276\320\273 Fly", nullptr));
        butt4->setText(QCoreApplication::translate("tests", "\320\242\320\265\320\274\320\260 4. \320\223\321\200\320\260\321\204\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213 \320\270 \321\203\321\202\320\270\320\273\320\270\321\202\321\213", nullptr));
        butt5->setText(QCoreApplication::translate("tests", "\320\242\320\265\320\274\320\260 5. \320\237\320\265\321\207\320\260\321\202\321\214 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\276\320\262", nullptr));
        butt6->setText(QCoreApplication::translate("tests", "\320\242\320\265\320\274\320\260 6. \320\241\321\200\320\265\320\264\321\201\321\202\320\262\320\260 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270 \321\200\320\260\320\261\320\276\321\202\321\213 \320\262 \321\201\320\265\321\202\320\270", nullptr));
        butt7->setText(QCoreApplication::translate("tests", "\320\242\320\265\320\274\320\260 7. \320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \320\241\320\227\320\230", nullptr));
        butt8->setText(QCoreApplication::translate("tests", "\320\242\320\265\320\274\320\260 8. \320\241\320\270\321\201\321\202\320\265\320\274\320\260 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\261\320\260\320\267\320\260\320\274\320\270 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        pushButton->setText(QCoreApplication::translate("tests", "\320\242\320\265\321\201\321\202 1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("tests", "\320\242\320\265\321\201\321\202 2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("tests", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tests: public Ui_tests {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTS_H
