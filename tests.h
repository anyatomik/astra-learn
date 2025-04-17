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

    void check();


    void on_back_to_main_clicked();

private:
    Ui::tests *ui;
    settings sett;
};

#endif // TESTS_H
