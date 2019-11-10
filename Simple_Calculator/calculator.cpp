#include "calculator.h"
#include "ui_calculator.h"

double first_number;
bool user_typing_second_number = false;
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

    connect(ui->pushButton_add,SIGNAL(released()),this,SLOT(binary_opperation()));
    connect(ui->pushButton_substraction,SIGNAL(released()),this,SLOT(binary_opperation()));
    connect(ui->pushButton_multiple,SIGNAL(released()),this,SLOT(binary_opperation()));
    connect(ui->pushButton_devide,SIGNAL(released()),this,SLOT(binary_opperation()));

    ui->pushButton_add->setCheckable(true);
    ui->pushButton_substraction->setCheckable(true);
    ui->pushButton_multiple->setCheckable(true);
    ui->pushButton_devide->setCheckable(true);
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

    if((ui->pushButton_add->isChecked() || ui->pushButton_substraction->isChecked() || ui->pushButton_multiple->isChecked() || ui->pushButton_devide->isChecked()) && (!user_typing_second_number))
    {
        lable_number =(button->text()).toDouble();
        user_typing_second_number = true;
        new_lable = QString::number(lable_number,'g',15);
    }else
    {
        if(ui->label->text().contains('.') && button->text() =="0")
        {
            new_lable =ui->label->text() + button->text();
        }
        else
        {
            lable_number =(ui->label->text() + button->text()).toDouble();
            new_lable = QString::number(lable_number,'g',15);
        }

    }
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

void Calculator::on_pushButton_equal_released()
{
    double lable_number,second_number;
    QString new_lable;
    second_number = ui->label->text().toDouble();

    if(ui->pushButton_add->isChecked())
    {
        lable_number =first_number + second_number;
        new_lable = QString::number(lable_number,'g',15);
        ui->label->setText(new_lable);
        ui->pushButton_add->setChecked(false);
    }
    else if (ui->pushButton_substraction->isChecked())
    {
        lable_number =first_number + second_number;
        new_lable = QString::number(lable_number,'g',15);
        ui->label->setText(new_lable);
        ui->pushButton_substraction->setChecked(false);
    }
    else if (ui->pushButton_multiple->isChecked())
    {
        lable_number =first_number + second_number;
        new_lable = QString::number(lable_number,'g',15);
        ui->label->setText(new_lable);
        ui->pushButton_multiple->setChecked(false);
    }
    else if (ui->pushButton_devide->isChecked())
    {
        lable_number =first_number + second_number;
        new_lable = QString::number(lable_number,'g',15);
        ui->label->setText(new_lable);
        ui->pushButton_devide->setChecked(false);
    }

    user_typing_second_number = false;
}

void Calculator::on_pushButton_clear_released()
{
    ui->pushButton_add->setChecked(false);
    ui->pushButton_multiple->setChecked(false);
    ui->pushButton_substraction->setChecked(false);
    ui->pushButton_devide->setChecked(false);

    user_typing_second_number = false;

    ui->label->setText("0");
}

void Calculator::binary_opperation()
{
    QPushButton * button = (QPushButton*) sender();

    first_number = ui->label->text().toDouble();

    button->setChecked(true);

}
