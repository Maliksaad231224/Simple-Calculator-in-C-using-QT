/********************************************************************************
** Form generated from reading UI file 'calculatorqt.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORQT_H
#define UI_CALCULATORQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculatorqtClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *divide;
    QPushButton *button9;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *button6;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button3;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *dot;
    QPushButton *button0;
    QPushButton *multiply;
    QPushButton *minus;
    QPushButton *plus;
    QPushButton *equal;
    QPushButton *percent;
    QPushButton *op;
    QLabel *text;

    void setupUi(QMainWindow *calculatorqtClass)
    {
        if (calculatorqtClass->objectName().isEmpty())
            calculatorqtClass->setObjectName("calculatorqtClass");
        calculatorqtClass->resize(279, 350);
        calculatorqtClass->setStyleSheet(QString::fromUtf8("background-color: rgb(12, 0, 19);\n"
""));
        calculatorqtClass->setTabShape(QTabWidget::TabShape::Triangular);
        centralWidget = new QWidget(calculatorqtClass);
        centralWidget->setObjectName("centralWidget");
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 50, 71, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe MDL2 Assets")});
        font.setPointSize(14);
        font.setBold(false);
        pushButton->setFont(font);
        pushButton->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: white;"));
        pushButton->setCheckable(true);
        divide = new QPushButton(centralWidget);
        divide->setObjectName("divide");
        divide->setGeometry(QRect(210, 50, 71, 61));
        divide->setFont(font);
        divide->setStyleSheet(QString::fromUtf8("\n"
"background-color: grey;"));
        divide->setCheckable(true);
        button9 = new QPushButton(centralWidget);
        button9->setObjectName("button9");
        button9->setGeometry(QRect(140, 110, 71, 61));
        button9->setFont(font);
        button9->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        button9->setCheckable(false);
        button7 = new QPushButton(centralWidget);
        button7->setObjectName("button7");
        button7->setGeometry(QRect(0, 110, 71, 61));
        button7->setFont(font);
        button7->setStyleSheet(QString::fromUtf8("\n"
"background-color:white;"));
        button7->setCheckable(true);
        button8 = new QPushButton(centralWidget);
        button8->setObjectName("button8");
        button8->setGeometry(QRect(70, 110, 71, 61));
        button8->setFont(font);
        button8->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        button8->setCheckable(true);
        button6 = new QPushButton(centralWidget);
        button6->setObjectName("button6");
        button6->setGeometry(QRect(140, 170, 71, 61));
        button6->setFont(font);
        button6->setStyleSheet(QString::fromUtf8("text-color:white;\n"
"background-color: rgb(255, 255, 255);"));
        button6->setCheckable(true);
        button4 = new QPushButton(centralWidget);
        button4->setObjectName("button4");
        button4->setGeometry(QRect(0, 170, 71, 61));
        button4->setFont(font);
        button4->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        button4->setCheckable(true);
        button5 = new QPushButton(centralWidget);
        button5->setObjectName("button5");
        button5->setGeometry(QRect(70, 170, 71, 61));
        button5->setFont(font);
        button5->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        button5->setCheckable(true);
        button3 = new QPushButton(centralWidget);
        button3->setObjectName("button3");
        button3->setGeometry(QRect(140, 230, 71, 61));
        button3->setFont(font);
        button3->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        button3->setCheckable(true);
        button1 = new QPushButton(centralWidget);
        button1->setObjectName("button1");
        button1->setGeometry(QRect(0, 230, 71, 61));
        button1->setFont(font);
        button1->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        button1->setCheckable(true);
        button2 = new QPushButton(centralWidget);
        button2->setObjectName("button2");
        button2->setGeometry(QRect(70, 230, 71, 61));
        button2->setFont(font);
        button2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        button2->setCheckable(true);
        dot = new QPushButton(centralWidget);
        dot->setObjectName("dot");
        dot->setGeometry(QRect(140, 290, 71, 61));
        dot->setFont(font);
        dot->setStyleSheet(QString::fromUtf8("background-color:white;"));
        dot->setCheckable(true);
        button0 = new QPushButton(centralWidget);
        button0->setObjectName("button0");
        button0->setGeometry(QRect(0, 290, 141, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        button0->setFont(font1);
        button0->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";"));
        button0->setCheckable(true);
        multiply = new QPushButton(centralWidget);
        multiply->setObjectName("multiply");
        multiply->setGeometry(QRect(210, 110, 71, 61));
        multiply->setFont(font);
        multiply->setStyleSheet(QString::fromUtf8("\n"
"background-color:  grey;"));
        multiply->setCheckable(true);
        minus = new QPushButton(centralWidget);
        minus->setObjectName("minus");
        minus->setGeometry(QRect(210, 170, 71, 61));
        minus->setFont(font);
        minus->setStyleSheet(QString::fromUtf8("\n"
"background-color: grey;"));
        minus->setCheckable(true);
        plus = new QPushButton(centralWidget);
        plus->setObjectName("plus");
        plus->setGeometry(QRect(210, 230, 71, 61));
        plus->setFont(font);
        plus->setStyleSheet(QString::fromUtf8("\n"
"background-color: grey;"));
        plus->setCheckable(true);
        equal = new QPushButton(centralWidget);
        equal->setObjectName("equal");
        equal->setGeometry(QRect(210, 290, 71, 61));
        equal->setFont(font);
        equal->setStyleSheet(QString::fromUtf8("\n"
"background-color: orange;"));
        equal->setCheckable(true);
        percent = new QPushButton(centralWidget);
        percent->setObjectName("percent");
        percent->setGeometry(QRect(140, 50, 71, 61));
        percent->setFont(font);
        percent->setStyleSheet(QString::fromUtf8("\n"
"background-color: white;"));
        percent->setCheckable(true);
        op = new QPushButton(centralWidget);
        op->setObjectName("op");
        op->setGeometry(QRect(70, 50, 71, 61));
        op->setFont(font);
        op->setStyleSheet(QString::fromUtf8("\n"
"background-color: white;"));
        op->setCheckable(true);
        text = new QLabel(centralWidget);
        text->setObjectName("text");
        text->setGeometry(QRect(0, -10, 281, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setBold(true);
        text->setFont(font2);
        text->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        text->setStyleSheet(QString::fromUtf8("font-size: 19px; \n"
"font-weight: bold; \n"
"background-color: #f0f0f0; \n"
"padding: 9px; "));
        text->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        calculatorqtClass->setCentralWidget(centralWidget);

        retranslateUi(calculatorqtClass);

        QMetaObject::connectSlotsByName(calculatorqtClass);
    } // setupUi

    void retranslateUi(QMainWindow *calculatorqtClass)
    {
        calculatorqtClass->setWindowTitle(QCoreApplication::translate("calculatorqtClass", "calculatorqt", nullptr));
        pushButton->setText(QCoreApplication::translate("calculatorqtClass", "AC", nullptr));
        divide->setText(QCoreApplication::translate("calculatorqtClass", "/", nullptr));
        button9->setText(QCoreApplication::translate("calculatorqtClass", "9", nullptr));
        button7->setText(QCoreApplication::translate("calculatorqtClass", "7", nullptr));
        button8->setText(QCoreApplication::translate("calculatorqtClass", "8", nullptr));
        button6->setText(QCoreApplication::translate("calculatorqtClass", "6", nullptr));
        button4->setText(QCoreApplication::translate("calculatorqtClass", "4", nullptr));
        button5->setText(QCoreApplication::translate("calculatorqtClass", "5", nullptr));
        button3->setText(QCoreApplication::translate("calculatorqtClass", "3", nullptr));
        button1->setText(QCoreApplication::translate("calculatorqtClass", "1", nullptr));
        button2->setText(QCoreApplication::translate("calculatorqtClass", "2", nullptr));
        dot->setText(QCoreApplication::translate("calculatorqtClass", ".", nullptr));
        button0->setText(QCoreApplication::translate("calculatorqtClass", "0", nullptr));
        multiply->setText(QCoreApplication::translate("calculatorqtClass", "X", nullptr));
        minus->setText(QCoreApplication::translate("calculatorqtClass", "-", nullptr));
        plus->setText(QCoreApplication::translate("calculatorqtClass", "+", nullptr));
        equal->setText(QCoreApplication::translate("calculatorqtClass", "=", nullptr));
        percent->setText(QCoreApplication::translate("calculatorqtClass", "%", nullptr));
        op->setText(QCoreApplication::translate("calculatorqtClass", "+/-", nullptr));
        text->setText(QCoreApplication::translate("calculatorqtClass", "87", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculatorqtClass: public Ui_calculatorqtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORQT_H
