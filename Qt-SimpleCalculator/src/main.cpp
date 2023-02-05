//
// Created by Kumo Pascaline on 20.01.2023.
//

#include "include\mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("logo.png"));

    MainWindow window;
    window.show();

    return a.exec();
}
