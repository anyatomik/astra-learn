/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *buttons_layout;
    QVBoxLayout *learn_layout;
    QPushButton *learn;
    QLabel *label_2;
    QVBoxLayout *test_layout;
    QPushButton *tests;
    QLabel *label_3;
    QVBoxLayout *settings_layout;
    QPushButton *settings;
    QLabel *label_4;
    QVBoxLayout *information_layout;
    QPushButton *information;
    QLabel *label_5;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(602, 430);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(602, 430));
        MainWindow->setMaximumSize(QSize(602, 430));
        MainWindow->setBaseSize(QSize(602, 430));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 40, 581, 171));
        buttons_layout = new QHBoxLayout(layoutWidget);
        buttons_layout->setObjectName("buttons_layout");
        buttons_layout->setContentsMargins(0, 0, 0, 0);
        learn_layout = new QVBoxLayout();
        learn_layout->setObjectName("learn_layout");
        learn = new QPushButton(layoutWidget);
        learn->setObjectName("learn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(100);
        sizePolicy1.setHeightForWidth(learn->sizePolicy().hasHeightForWidth());
        learn->setSizePolicy(sizePolicy1);
        learn->setMinimumSize(QSize(130, 130));
        learn->setMaximumSize(QSize(200, 130));
        learn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/img/book.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        learn->setIcon(icon);
        learn->setIconSize(QSize(60, 60));
        learn->setCheckable(false);

        learn_layout->addWidget(learn);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        learn_layout->addWidget(label_2);


        buttons_layout->addLayout(learn_layout);

        test_layout = new QVBoxLayout();
        test_layout->setObjectName("test_layout");
        tests = new QPushButton(layoutWidget);
        tests->setObjectName("tests");
        tests->setMinimumSize(QSize(130, 130));
        tests->setMaximumSize(QSize(16777215, 200));
        tests->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/img/applyed.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tests->setIcon(icon1);
        tests->setIconSize(QSize(60, 60));
        tests->setCheckable(false);

        test_layout->addWidget(tests);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        test_layout->addWidget(label_3);


        buttons_layout->addLayout(test_layout);

        settings_layout = new QVBoxLayout();
        settings_layout->setObjectName("settings_layout");
        settings = new QPushButton(layoutWidget);
        settings->setObjectName("settings");
        settings->setMinimumSize(QSize(130, 130));
        settings->setMaximumSize(QSize(16777215, 200));
        settings->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/img/settings.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        settings->setIcon(icon2);
        settings->setIconSize(QSize(70, 70));
        settings->setCheckable(false);

        settings_layout->addWidget(settings);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        settings_layout->addWidget(label_4);


        buttons_layout->addLayout(settings_layout);

        information_layout = new QVBoxLayout();
        information_layout->setObjectName("information_layout");
        information = new QPushButton(layoutWidget);
        information->setObjectName("information");
        information->setMinimumSize(QSize(130, 130));
        information->setMaximumSize(QSize(16777215, 200));
        information->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icons/img/information.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        information->setIcon(icon3);
        information->setIconSize(QSize(60, 60));
        information->setCheckable(false);

        information_layout->addWidget(information);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        information_layout->addWidget(label_5);


        buttons_layout->addLayout(information_layout);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 531, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 602, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Astra-learn", nullptr));
        learn->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\203\321\207\320\265\320\275\320\270\320\265", nullptr));
        tests->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202\321\213", nullptr));
        settings->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        information->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\227\320\264\321\200\320\260\320\262\321\201\321\202\320\262\321\203\320\271\321\202\320\265! \320\237\321\200\320\270\320\262\320\265\321\202\321\201\321\202\320\262\321\203\320\265\320\274 \320\262\320\260\321\201 \320\262 \320\276\320\261\321\203\321\207\320\260\321\216\321\211\320\265\320\274 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\270 \320\277\320\276 Astra Linux!", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\223\320\273\320\260\320\262\320\275\320\260\321\217 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
