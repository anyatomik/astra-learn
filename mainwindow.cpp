#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "learn.h"
#include <QSettings>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    icon();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_learn_clicked()
{
    lrn.show();
}


void MainWindow::on_tests_clicked()
{
    tsts.show();
}


void MainWindow::on_settings_clicked()
{
    sett.show();
}


void MainWindow::on_information_clicked()
{
    inf.show();
}

void MainWindow::icon()
{
     QMainWindow::setWindowIcon(QIcon("qrc:/new/icons/img/information.png"));
}



void MainWindow::slot1()
{

}



