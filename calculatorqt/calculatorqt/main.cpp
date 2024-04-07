#include "calculatorqt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    calculatorqt w;
    w.show();
    return a.exec();
}
