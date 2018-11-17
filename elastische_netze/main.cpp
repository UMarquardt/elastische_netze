#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{


    cout << "Hello" << endl;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
