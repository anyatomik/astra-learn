#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication:: setOrganizationName("AnyaTomik");
    QApplication:: setApplicationName("AstraLearn");

    MainWindow w;
    w.show();
    return a.exec();
}
