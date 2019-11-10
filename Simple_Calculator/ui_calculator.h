/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_prasantage;
    QPushButton *pushButton_mark;
    QPushButton *pushButton_add;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_8;
    QPushButton *pushButton_substraction;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_multiple;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_devide;
    QPushButton *pushButton_0;
    QPushButton *pushButton_decimal;
    QPushButton *pushButton_equal;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(361, 351);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 361, 101));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setMargin(20);
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(0, 100, 91, 51));
        pushButton_prasantage = new QPushButton(centralWidget);
        pushButton_prasantage->setObjectName(QStringLiteral("pushButton_prasantage"));
        pushButton_prasantage->setGeometry(QRect(180, 100, 91, 51));
        pushButton_mark = new QPushButton(centralWidget);
        pushButton_mark->setObjectName(QStringLiteral("pushButton_mark"));
        pushButton_mark->setGeometry(QRect(90, 100, 91, 51));
        pushButton_add = new QPushButton(centralWidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(270, 100, 91, 51));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(0, 150, 91, 51));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(180, 150, 91, 51));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(90, 150, 91, 51));
        pushButton_substraction = new QPushButton(centralWidget);
        pushButton_substraction->setObjectName(QStringLiteral("pushButton_substraction"));
        pushButton_substraction->setGeometry(QRect(270, 150, 91, 51));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 200, 91, 51));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 200, 91, 51));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(90, 200, 91, 51));
        pushButton_multiple = new QPushButton(centralWidget);
        pushButton_multiple->setObjectName(QStringLiteral("pushButton_multiple"));
        pushButton_multiple->setGeometry(QRect(270, 200, 91, 51));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 250, 91, 51));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 250, 91, 51));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 250, 91, 51));
        pushButton_devide = new QPushButton(centralWidget);
        pushButton_devide->setObjectName(QStringLiteral("pushButton_devide"));
        pushButton_devide->setGeometry(QRect(270, 250, 91, 51));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 300, 181, 51));
        pushButton_decimal = new QPushButton(centralWidget);
        pushButton_decimal->setObjectName(QStringLiteral("pushButton_decimal"));
        pushButton_decimal->setGeometry(QRect(180, 300, 91, 51));
        pushButton_equal = new QPushButton(centralWidget);
        pushButton_equal->setObjectName(QStringLiteral("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(270, 300, 91, 51));
        Calculator->setCentralWidget(centralWidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", Q_NULLPTR));
        label->setText(QApplication::translate("Calculator", "0", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("Calculator", "C", Q_NULLPTR));
        pushButton_prasantage->setText(QApplication::translate("Calculator", "%", Q_NULLPTR));
        pushButton_mark->setText(QApplication::translate("Calculator", "+/-", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("Calculator", "+", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("Calculator", "7", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("Calculator", "9", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Calculator", "8", Q_NULLPTR));
        pushButton_substraction->setText(QApplication::translate("Calculator", "-", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Calculator", "4", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Calculator", "6", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Calculator", "5", Q_NULLPTR));
        pushButton_multiple->setText(QApplication::translate("Calculator", "*", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("Calculator", "1", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Calculator", "3", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Calculator", "2", Q_NULLPTR));
        pushButton_devide->setText(QApplication::translate("Calculator", "/", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("Calculator", "0", Q_NULLPTR));
        pushButton_decimal->setText(QApplication::translate("Calculator", ".", Q_NULLPTR));
        pushButton_equal->setText(QApplication::translate("Calculator", "=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
