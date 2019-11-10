#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digite_press()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digite_press()));

    connect(ui->pushButton_mark,SIGNAL(released()),this,SLOT(unary_opperation()));
    connect(ui->pushButton_prasantage,SIGNAL(released()),this,SLOT(unary_opperation()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator:: digite_press()
{
    QPushButton * button = (QPushButton*)sender();
    QString new_lable;
    double lable_number;

    lable_number =(ui->label->text() + button->text()).toDouble();
    new_lable = QString::number(lable_number,'g',15);

    ui->label->setText(new_lable);
}

void Calculator::on_pushButton_decimal_released()
{
    ui->label->setText(ui->label->text()+".");
}

void Calculator::unary_opperation()
{
    QPushButton * button = (QPushButton*) sender();
    double lable_number;
    QString new_lable;

    if(button->text() == "+/-")
    {
        lable_number = ui->label->text().toDouble();
        lable_number = lable_number * -1;
        new_lable =QString::number(lable_number,'g',15);
        ui->label->setText(new_lable);
    }
    if(button->text() == "%")
    {
        lable_number = ui->label->text().toDouble();
        lable_number = lable_number * .01;
        new_lable =QString::number(lable_number,'g',15);
        ui->label->setText(new_lable);
    }
}
