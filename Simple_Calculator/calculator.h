#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private:
    Ui::Calculator *ui;

private slots:
    void digite_press();
    void on_pushButton_decimal_released();
    void unary_opperation();
    void binary_opperation();
    void on_pushButton_equal_released();
    void on_pushButton_clear_released();
};

#endif // CALCULATOR_H
