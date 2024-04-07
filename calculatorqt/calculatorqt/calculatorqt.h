#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_calculatorqt.h"

class calculatorqt : public QMainWindow
{
    Q_OBJECT

public:
    calculatorqt(QWidget *parent = nullptr);
    ~calculatorqt();

   

private:
    Ui::calculatorqtClass ui;
private slots:
    
    void NumPressed();
    void mathbutton();
    void equalbutton();
    void changesign();
    void erase();

};
