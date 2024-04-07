#include "calculatorqt.h"
#include <QRegularExpression>
#include<iostream>
using namespace std;


QString value = "", total = "";
 long   float calcVal = 0.0;
int fnum, lnum;
bool addbool = false, subbool = false, mulbool = false, divbool = false;

calculatorqt::calculatorqt(QWidget* parent) : QMainWindow(parent)
{
    
   
    ui.setupUi(this);
    ui.text->setText(QString::number(calcVal));
    QPushButton* numButtons[11];
    for (int i = 0; i < 11; i++) {
        QString butname = "button" + QString::number(i);
        numButtons[i] = calculatorqt::findChild<QPushButton*>(butname);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }
    connect(ui.plus, SIGNAL(released()), this, SLOT(mathbutton()));
    connect(ui.minus ,SIGNAL(released()), this, SLOT(mathbutton()));
    connect(ui.divide, SIGNAL(released()), this, SLOT(mathbutton()));
    connect(ui.multiply, SIGNAL(released()), this, SLOT(mathbutton()));
    connect(ui.equal, SIGNAL(released()), this, SLOT(equalbutton()));

    connect(ui.pushButton, SIGNAL(released()), this, SLOT(erase()));

}

void calculatorqt::mathbutton() {
 
   
    addbool = false, subbool = false, mulbool = false, divbool = false;
    QString displayVal = ui.text->text();
    calcVal = displayVal.toDouble();
    QPushButton* button = (QPushButton*)sender();
    QString butVal = button->text();
    if (QString::compare(butVal, "/", Qt::CaseInsensitive) == 0) {

        divbool = true;

    }
    else if (QString::compare(butVal, "X", Qt::CaseInsensitive) == 0) {
        mulbool = true;
      
    }
    else if (QString::compare(butVal, "+", Qt::CaseInsensitive) == 0) {
        addbool = true;
     
    }
    else {
        subbool = true;
      
    }
  
    ui.text->setText("");


}
void calculatorqt::erase() {
    QString displayVal = "";
    ui.text->setText("");
}
void calculatorqt::equalbutton() {
    double solution = 0.0;
    QString displayval = ui.text->text();
    double dbldisplay = displayval.toDouble();
    if (addbool || subbool || mulbool || divbool) {
        if (addbool) {

            solution = calcVal + dbldisplay;
        }
        else if (subbool) {
            solution = calcVal - dbldisplay;
        }
        else if (mulbool) {
            solution = calcVal * dbldisplay;
        }
        else {
            solution = calcVal / dbldisplay;
    
        }
    }
    ui.text->setText(QString::number(solution));
}
void calculatorqt::NumPressed() {
    QPushButton* button = (QPushButton*)sender();
    QString butval = button->text();
    QString displayVal = ui.text->text();
    if (displayVal.toDouble() == 0.0) {
        ui.text->setText(butval);
     }
    else {
        QString newVal = displayVal + butval;
        double dblnewval = newVal.toDouble();
        ui.text->setText(QString::number(dblnewval, 'g', 16));
    }


}

void calculatorqt::changesign() {

}
calculatorqt::~calculatorqt()
{

}
