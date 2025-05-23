#include "learn.h"
#include "ui_learn.h"
#include <QMessageBox>
#include <QSettings>
#include <QDebug>



learn::learn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::learn)
{
    ui->setupUi(this);
    app_sett = new QSettings(this);
    loadSettings();
    txtts();
    reset_pin();
    if (ui -> buttons -> currentIndex() == 0)
    {
        ui -> pins ->setEnabled(false);
        ui -> back_to_main -> setEnabled(false);
    }

}

learn::~learn()
{
    saveSettings();
    delete ui;

}

void learn::saveSettings()
{
    app_sett->setValue("pins", pin1);
}

void learn::loadSettings()
{
    pin1 = app_sett -> value("pins", 0).toInt();
    reset_pin();

}


void learn::leftRightShow()
{
    ui -> left -> show();
    ui -> right -> show();
}
void learn::reset_pin()
{
    ui -> label_2 -> setText("Тема " + (QString::number(pin1)));
    if (pin1 ==0)
    ui -> label_2 -> setText(" ");

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
    ui -> page_buttons -> setCurrentIndex(ui -> buttons -> currentIndex());

    if (ui -> buttons -> currentIndex() ==0)
    {
        ui -> pins ->setEnabled(false);
        ui -> back_to_main -> setEnabled(false);
        ui -> windows -> setText("Выбор темы");
        ui -> page_buttons -> setCurrentIndex(0);
        ui -> left -> hide();
        ui -> right -> hide();
    }

    if(ui -> buttons -> currentIndex()==1)
    {
        ui -> windows -> setText("О системе");
        ui -> page_buttons -> setCurrentIndex(1);
        leftRightShow();

    }

    if(ui -> buttons -> currentIndex()==2)
    {
        ui -> windows -> setText("Запуск и завершение работы");
        ui -> page_buttons -> setCurrentIndex(2);
        leftRightShow();
    }

    if(ui -> buttons -> currentIndex()==3)
    {
        ui -> windows -> setText("Рабочий стол Fly");
        ui -> page_buttons -> setCurrentIndex(3);
        leftRightShow();
    }
    if(ui -> buttons -> currentIndex()==4)
    {
        ui -> windows -> setText("Графические программы и утилиты");
        ui -> page_buttons -> setCurrentIndex(4);
        leftRightShow();
    }
    if(ui -> buttons -> currentIndex()==5)
    {
        ui -> windows -> setText("Печать документов");
        ui -> page_buttons -> setCurrentIndex(5);
        leftRightShow();
    }
    if(ui -> buttons -> currentIndex()==6)
    {
        ui -> windows -> setText("Средства организации работы в сети");
        ui -> page_buttons -> setCurrentIndex(6);
        leftRightShow();
    }
    if(ui -> buttons -> currentIndex()==7)
    {
        ui -> windows -> setText("Работа с СЗИ");
        ui -> page_buttons -> setCurrentIndex(7);
        leftRightShow();
    }
    if(ui -> buttons -> currentIndex()==8)
    {
        ui -> windows -> setText("Система управления базами данных");
        ui -> page_buttons -> setCurrentIndex(8);
        leftRightShow();
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
        ui -> page_buttons -> setCurrentIndex(0);
        check_pin_num();
        txtts();

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






void learn::on_right_clicked()
{
    if (ui -> page_buttons -> currentIndex() ==1)
    {
        if (ui -> pages_1 -> currentIndex() ==2 && ui -> comboBox -> currentIndex() ==2)
        {

        }
        else
        {
            ui -> pages_1 -> setCurrentIndex(ui -> pages_1 -> currentIndex()+1);
            ui -> comboBox -> setCurrentIndex(ui -> comboBox -> currentIndex()+1);
        }

    }
    //////////////
    if (ui -> page_buttons -> currentIndex() ==2)
    {
        if (ui -> pages_2 -> currentIndex() ==2 && ui -> comboBox_2 -> currentIndex() ==2)
        {

        }
        else
        {
            ui -> pages_2 -> setCurrentIndex(ui -> pages_2 -> currentIndex()+1);
            ui -> comboBox_2 -> setCurrentIndex(ui -> comboBox_2 -> currentIndex()+1);
        }

    }
    //////////////
    if (ui -> page_buttons -> currentIndex() ==3)
    {
        if (ui -> pages_3 -> currentIndex() ==2 && ui -> comboBox_3 -> currentIndex() ==2)
        {

        }
        else
        {
            ui -> pages_3 -> setCurrentIndex(ui -> pages_3 -> currentIndex()+1);
            ui -> comboBox_3 -> setCurrentIndex(ui -> comboBox_3 -> currentIndex()+1);
        }

    }
    //////////////
    if (ui -> page_buttons -> currentIndex() ==4)
    {
        if (ui -> pages_4 -> currentIndex() ==2 && ui -> comboBox_4 -> currentIndex() ==2)
        {

        }
        else
        {
            ui -> pages_4 -> setCurrentIndex(ui -> pages_4 -> currentIndex()+1);
            ui -> comboBox_4 -> setCurrentIndex(ui -> comboBox_4 -> currentIndex()+1);
        }

    }
    ////////////
      if (ui -> page_buttons -> currentIndex() ==5)
    {
        if (ui -> pages_5 -> currentIndex() ==2 && ui -> comboBox_5 -> currentIndex() ==2)
        {

        }
        else
        {
            ui -> pages_5 -> setCurrentIndex(ui -> pages_5 -> currentIndex()+1);
            ui -> comboBox_5 -> setCurrentIndex(ui -> comboBox -> currentIndex()+1);
        }

    }
    //////////////
    if (ui -> page_buttons -> currentIndex() ==6)
    {
        if (ui -> pages_6 -> currentIndex() ==2 && ui -> comboBox_6 -> currentIndex() ==2)
        {

        }
        else
        {
            ui -> pages_6 -> setCurrentIndex(ui -> pages_6 -> currentIndex()+1);
            ui -> comboBox_6 -> setCurrentIndex(ui -> comboBox_6 -> currentIndex()+1);
        }

    }
    //////////////
    if (ui -> page_buttons -> currentIndex() ==7)
    {
        if (ui -> pages_7 -> currentIndex() ==2 && ui -> comboBox_7 -> currentIndex() ==2)
        {

        }
        else
        {
            ui -> pages_7 -> setCurrentIndex(ui -> pages_7 -> currentIndex()+1);
            ui -> comboBox_7 -> setCurrentIndex(ui -> comboBox_7 -> currentIndex()+1);
        }

    }
    //////////////
    if (ui -> page_buttons -> currentIndex() ==8)
    {
        if (ui -> pages_8 -> currentIndex() ==2 && ui -> comboBox_8 -> currentIndex() ==2)
        {

        }
        else
        {
            ui -> pages_8 -> setCurrentIndex(ui -> pages_8 -> currentIndex()+1);
            ui -> comboBox_8 -> setCurrentIndex(ui -> comboBox_8 -> currentIndex()+1);
        }

    }
    ////////////
}

 ///////////////////////////////////////////////////////
void learn::on_left_clicked()
{
    if (ui -> page_buttons -> currentIndex() ==1)
    {
        if (ui -> pages_1 -> currentIndex() ==0 && ui -> comboBox -> currentIndex() ==0)
        {

        }
        else
        {
            ui -> pages_1 -> setCurrentIndex(ui -> pages_1 -> currentIndex()-1);
            ui -> comboBox -> setCurrentIndex(ui -> comboBox -> currentIndex()-1);
        }

    }
    /////////////////////////////

    if (ui -> page_buttons -> currentIndex() ==2)
    {
        if (ui -> pages_2 -> currentIndex() ==0 && ui -> comboBox_2 -> currentIndex() ==0)
        {

        }
        else
        {
            ui -> pages_2 -> setCurrentIndex(ui -> pages_2 -> currentIndex()-1);
            ui -> comboBox_2 -> setCurrentIndex(ui -> comboBox_2 -> currentIndex()-1);
        }

    }
    //////////////////////////
    if (ui -> page_buttons -> currentIndex() ==3)
    {
        if (ui -> pages_3 -> currentIndex() ==0 && ui -> comboBox_3 -> currentIndex() ==0)
        {

        }
        else
        {
            ui -> pages_3 -> setCurrentIndex(ui -> pages_3 -> currentIndex()-1);
            ui -> comboBox_3 -> setCurrentIndex(ui -> comboBox_3 -> currentIndex()-1);
        }

    }
    ///////////////////////////
    if (ui -> page_buttons -> currentIndex() ==4)
    {
        if (ui -> pages_4 -> currentIndex() ==0 && ui -> comboBox_4 -> currentIndex() ==0)
        {

        }
        else
        {
            ui -> pages_4 -> setCurrentIndex(ui -> pages_4 -> currentIndex()-1);
            ui -> comboBox_4 -> setCurrentIndex(ui -> comboBox_4 -> currentIndex()-1);
        }

    }
    /////////////////////////
        if (ui -> page_buttons -> currentIndex() ==5)
    {
        if (ui -> pages_5 -> currentIndex() ==0 && ui -> comboBox_5 -> currentIndex() ==0)
        {

        }
        else
        {
            ui -> pages_5 -> setCurrentIndex(ui -> pages_5 -> currentIndex()-1);
            ui -> comboBox_5 -> setCurrentIndex(ui -> comboBox_5 -> currentIndex()-1);
        }

    }
    /////////////////////////////

    if (ui -> page_buttons -> currentIndex() ==6)
    {
        if (ui -> pages_6 -> currentIndex() ==0 && ui -> comboBox_6 -> currentIndex() ==0)
        {

        }
        else
        {
            ui -> pages_6 -> setCurrentIndex(ui -> pages_6 -> currentIndex()-1);
            ui -> comboBox_6 -> setCurrentIndex(ui -> comboBox_6 -> currentIndex()-1);
        }

    }
    //////////////////////////
    if (ui -> page_buttons -> currentIndex() ==7)
    {
        if (ui -> pages_7 -> currentIndex() ==0 && ui -> comboBox_7 -> currentIndex() ==0)
        {

        }
        else
        {
            ui -> pages_7 -> setCurrentIndex(ui -> pages_7 -> currentIndex()-1);
            ui -> comboBox_7 -> setCurrentIndex(ui -> comboBox_7 -> currentIndex()-1);
        }

    }
    ///////////////////////////
    if (ui -> page_buttons -> currentIndex() ==8)
    {
        if (ui -> pages_8 -> currentIndex() ==0 && ui -> comboBox_8 -> currentIndex() ==0)
        {

        }
        else
        {
            ui -> pages_8 -> setCurrentIndex(ui -> pages_8 -> currentIndex()-1);
            ui -> comboBox_8 -> setCurrentIndex(ui -> comboBox_8 -> currentIndex()-1);
        }

    }
    /////////////////////////
}

