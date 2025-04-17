/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_information
{
public:

    void setupUi(QWidget *information)
    {
        if (information->objectName().isEmpty())
            information->setObjectName("information");
        information->resize(1024, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/img/information.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        information->setWindowIcon(icon);

        retranslateUi(information);

        QMetaObject::connectSlotsByName(information);
    } // setupUi

    void retranslateUi(QWidget *information)
    {
        information->setWindowTitle(QCoreApplication::translate("information", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class information: public Ui_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
