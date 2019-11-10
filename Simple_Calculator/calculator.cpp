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
    new_lable = QString::number(lable_number);

    ui->label->setText(new_lable);
}
