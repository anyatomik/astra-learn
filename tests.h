#ifndef TESTS_H
#define TESTS_H

#include <QWidget>
#include "settings.h"

namespace Ui {
class tests;
}

class tests : public QWidget
{
    Q_OBJECT

public:
    explicit tests(QWidget *parent = nullptr);
    ~tests();

private slots:
    void on_settings_clicked();

    void on_butt1_clicked();
    void on_butt2_clicked();
    void on_butt3_clicked();
    void on_butt4_clicked();
    void on_butt5_clicked();
    void on_butt6_clicked();
    void on_butt7_clicked();
    void on_butt8_clicked();
    void check();


    void on_back_to_main_clicked();

private:
    Ui::tests *ui;
    settings sett;
};

#endif // TESTS_H
