#include "learn.h"
#include "ui_learn.h"
#include <QMessageBox>



learn::learn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::learn)
{
    ui->setupUi(this);
    if (ui -> buttons -> currentIndex() == 0)
    {
        ui -> pins ->setEnabled(false);
        ui -> back_to_main -> setEnabled(false);
    }




}

learn::~learn()
{
    delete ui;

}

void learn::reset_pin()
{
    show_pins_id = QString::number(pin1);
    ui -> label_2 -> setText("Тема " + show_pins_id);
    if(pin1 ==0)
    {
        ui -> label_2 -> setText(" ");
    }
}


void learn::on_pins_clicked()
{
    if (pin1 != ui->buttons -> currentIndex())
    {
        pin1 = ui->buttons -> currentIndex();
        reset_pin();
        ui -> pins -> setIcon(QPixmap(":/new/icons/img/pin2.png"));

    }
    else if (pin1 == ui->buttons -> currentIndex())
    {
        pin1 =0;
        reset_pin();
         ui -> pins -> setIcon(QPixmap(":/new/icons/img/pin1.png"));
    }
}

void learn::txtts()
{
    ui -> pins ->setEnabled(true);
    ui -> back_to_main -> setEnabled(true);
    check_pin_num();

    if(ui -> buttons -> currentIndex()==1)
    {
        ui -> windows -> setText("О системе");
    }

    if(ui -> buttons -> currentIndex()==2)
    {
        ui -> windows -> setText("Запуск и завершение работы");
    }

    if(ui -> buttons -> currentIndex()==3)
    {
        ui -> windows -> setText("Рабочий стол Fly");
    }
    if(ui -> buttons -> currentIndex()==4)
    {
        ui -> windows -> setText("Графические программы и утилиты");
    }
    if(ui -> buttons -> currentIndex()==5)
    {
        ui -> windows -> setText("Печать документов");
    }
    if(ui -> buttons -> currentIndex()==6)
    {
        ui -> windows -> setText("Средства организации работы в сети");
    }
    if(ui -> buttons -> currentIndex()==7)
    {
        ui -> windows -> setText("Работа с СЗИ");
    }
    if(ui -> buttons -> currentIndex()==8)
    {
        ui -> windows -> setText("Система управления базами данных");
    }
}

void learn::check_pin_num()
{

    if (pin1 == ui -> buttons -> currentIndex())
    {
        ui -> pins -> setIcon(QPixmap(":/new/icons/img/pin2.png"));
    }
    if( pin1 != ui -> buttons -> currentIndex() | ui -> buttons -> currentIndex() == 0)
    {
        ui -> pins -> setIcon(QPixmap(":/new/icons/img/pin1.png"));
    }
}

////////////////////////////Buttons/////////////////////////////////

void learn::on_settings_clicked()
{
    sett.show();
}
void learn::on_butt1_clicked()
{
    ui -> buttons -> setCurrentIndex(1);
    txtts();
}
void learn::on_butt2_clicked()
{
    ui -> buttons -> setCurrentIndex(2);
    txtts();
}
void learn::on_butt3_clicked()
{
    ui -> buttons -> setCurrentIndex(3);
    txtts();
}
void learn::on_butt4_clicked()
{
    ui -> buttons -> setCurrentIndex(4);
        txtts();
}
void learn::on_butt5_clicked()
{
    ui -> buttons -> setCurrentIndex(5);
    txtts();
}
void learn::on_butt6_clicked()
{
    ui -> buttons -> setCurrentIndex(6);
    txtts();
}
void learn::on_butt7_clicked()
{
    ui -> buttons -> setCurrentIndex(7);
    txtts();
}
void learn::on_butt8_clicked()
{
    ui -> buttons -> setCurrentIndex(8);
    txtts();
}
void learn::on_GoToPin_clicked()
{
    ui -> buttons-> setCurrentIndex(pin1);
    txtts();
}

////////////////////////////////////////////////////////////////////////////

void learn::on_back_to_main_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Предупреждение", "Вы переходите в начальный экран окна обучения. Рекомендуем поставить закладку перед тем как переходить. Вы уверены?",
                                                              QMessageBox:: Yes | QMessageBox:: No);
    if(reply == QMessageBox::Yes)
    {

        ui -> buttons -> setCurrentIndex(0);
        check_pin_num();
        ui -> pins ->setEnabled(false);
        ui -> back_to_main -> setEnabled(false);
        ui -> windows -> setText("Выбор темы");
    }
}

void learn::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Предупреждение", "Прогресс будет удален, продолжить?",
                                                              QMessageBox:: Yes | QMessageBox:: No);
    if(reply == QMessageBox::Yes)
    {
        pin1 = 0;
        reset_pin();

    }

}




