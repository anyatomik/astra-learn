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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFrame *menu;
    QLabel *windows;
    QWidget *layoutWidget1;
    QHBoxLayout *buttlayout;
    QPushButton *back_to_main;
    QPushButton *settings;
    QStackedWidget *stackedWidget;
    QWidget *selection;
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
    QWidget *theme_1;
    QWidget *theme_;
    QWidget *theme_3;
    QWidget *theme_4;
    QWidget *theme_6;
    QWidget *thme_5;
    QWidget *theme_7;
    QWidget *theme_8;

    void setupUi(QWidget *tests)
    {
        if (tests->objectName().isEmpty())
            tests->setObjectName("tests");
        tests->resize(832, 543);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/img/applyed.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tests->setWindowIcon(icon);
        layoutWidget = new QWidget(tests);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 831, 541));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        menu = new QFrame(layoutWidget);
        menu->setObjectName("menu");
        menu->setMinimumSize(QSize(800, 35));
        menu->setMaximumSize(QSize(16777215, 40));
        menu->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45)"));
        windows = new QLabel(menu);
        windows->setObjectName("windows");
        windows->setGeometry(QRect(1, -1, 341, 41));
        layoutWidget1 = new QWidget(menu);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(741, 0, 81, 35));
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

        settings = new QPushButton(layoutWidget1);
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

        stackedWidget = new QStackedWidget(layoutWidget);
        stackedWidget->setObjectName("stackedWidget");
        selection = new QWidget();
        selection->setObjectName("selection");
        scrollArea = new QScrollArea(selection);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 0, 829, 491));
        scrollArea->setMinimumSize(QSize(600, 450));
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 813, 806));
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
        stackedWidget->addWidget(selection);
        theme_1 = new QWidget();
        theme_1->setObjectName("theme_1");
        stackedWidget->addWidget(theme_1);
        theme_ = new QWidget();
        theme_->setObjectName("theme_");
        stackedWidget->addWidget(theme_);
        theme_3 = new QWidget();
        theme_3->setObjectName("theme_3");
        stackedWidget->addWidget(theme_3);
        theme_4 = new QWidget();
        theme_4->setObjectName("theme_4");
        stackedWidget->addWidget(theme_4);
        theme_6 = new QWidget();
        theme_6->setObjectName("theme_6");
        stackedWidget->addWidget(theme_6);
        thme_5 = new QWidget();
        thme_5->setObjectName("thme_5");
        stackedWidget->addWidget(thme_5);
        theme_7 = new QWidget();
        theme_7->setObjectName("theme_7");
        stackedWidget->addWidget(theme_7);
        theme_8 = new QWidget();
        theme_8->setObjectName("theme_8");
        stackedWidget->addWidget(theme_8);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(tests);

        stackedWidget->setCurrentIndex(0);
        butt1->setDefault(false);
        butt2->setDefault(false);
        butt3->setDefault(false);


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
    } // retranslateUi

};

namespace Ui {
    class tests: public Ui_tests {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTS_H
