#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "information.h"
#include "learn.h"
#include "settings.h"
#include "tests.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_learn_clicked();

    void on_tests_clicked();

    void on_settings_clicked();

    void on_information_clicked();


private:
    Ui::MainWindow *ui;
    //названия окон для кнопок
    // information *inf;
    // learn *lrn;
    // settings *sett;
    // tests *tsts;
    information inf;
    learn lrn;
    settings sett;
    tests tsts;


public slots:

    void slot1();



};
#endif // MAINWINDOW_H
