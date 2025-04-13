#ifndef LEARN_H
#define LEARN_H

#include <QWidget>
#include "settings.h"
#include <QSettings>




namespace Ui {
class learn;
}

class learn : public QWidget
{
    Q_OBJECT

public:
    explicit learn(QWidget *parent = nullptr);
    ~learn();
    int pin1;
   // QString show_pins_id;

private slots:
   // void on_pins_clicked(bool checked);

    void on_settings_clicked();
    void on_butt1_clicked();
    void on_butt2_clicked();
    void on_butt3_clicked();
    void on_butt4_clicked();
    void on_butt5_clicked();
    void on_butt6_clicked();
    void on_butt7_clicked();
    void on_butt8_clicked();
    void on_back_to_main_clicked();
    void on_pushButton_clicked();
    void on_GoToPin_clicked();
    void reset_pin();
    void check_pin_num();
    void on_pins_clicked();
    void txtts();
    void saveSettings();
    void loadSettings();

private:
    Ui::learn *ui;
    settings sett;
    QSettings* app_sett;

signals:
    void signal1();


};

#endif // LEARN_H
