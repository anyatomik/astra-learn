#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "learn.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

void MainWindow::slot1()
{

}



