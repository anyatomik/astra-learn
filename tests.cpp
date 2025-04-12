#include "tests.h"
#include "ui_tests.h"
#include <QMessageBox>

tests::tests(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::tests)
{
    ui->setupUi(this);
}

tests::~tests()
{
    delete ui;
}


void tests::on_settings_clicked()
{
    sett.show();
}

void  tests::check()
{
    ui -> back_to_main -> setEnabled(true);
}

///////////////////////////////////////////////

void tests::on_butt1_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(1);
    check();
}

void tests::on_butt2_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(2);
    check();
}

void tests::on_butt3_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(3);
    check();
}

void tests::on_butt4_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(4);
    check();
}

void tests::on_butt5_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(5);
    check();
}

void tests::on_butt6_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(6);
    check();
}

void tests::on_butt7_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(7);
    check();
}

void tests::on_butt8_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(8);
    check();
}

///////////////////////////////////////////////


void tests::on_back_to_main_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Предупреждение", "Вы переходите в начальный экран. Рекомендуем сначала завершить прохождение теста. Вы уверены?",
                                                              QMessageBox:: Yes | QMessageBox:: No);
    if(reply == QMessageBox::Yes)
    {

        ui -> stackedWidget -> setCurrentIndex(0);
        ui -> back_to_main -> setEnabled(false);
        ui -> windows -> setText("Выбор темы");
    }
}

