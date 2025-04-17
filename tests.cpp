#include "tests.h"
#include "ui_tests.h"
#include <QMessageBox>

tests::tests(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::tests)
{
    ui->setupUi(this);
    ui -> back_to_main -> setEnabled(false);
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
    if (ui -> main_all -> currentIndex() == 0)
    {
        ui -> back_to_main -> setEnabled(false);
    }
    else
    {
     ui -> back_to_main -> setEnabled(true);
    }


}




void tests::on_back_to_main_clicked()
{
    check();
        QMessageBox::StandardButton reply = QMessageBox::question(this, "Предупреждение", "Вы переходите в начальный экран. Рекомендуем сначала завершить прохождение теста. Вы уверены?",
                                                                  QMessageBox:: Yes | QMessageBox:: No);
        if(reply == QMessageBox::Yes)
        {

            ui -> main_all -> setCurrentIndex(0);
            ui -> back_to_main -> setEnabled(false);
            ui -> windows -> setText("Выбор темы");
        }
}




