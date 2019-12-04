#include <iostream>
#include <QtCore>
#include <QApplication>
#include <QPushButton>
#include <QMainWindow>
#include "buttonWidget.h"
#include <QDebug>
#include <QFont>

using namespace std;

int main(int argc, char **argv) {
    std::cout << "QT Version " << QT_VERSION_STR << std::endl;

    QApplication window(argc, argv);

    QPushButton helloButton("Quit application.", 0);
    helloButton.resize(200, 50);
    helloButton.setFont(QFont("Helvetica", 15, QFont::Bold));

    helloButton.show();

    return window.exec();
}

void quitApp() {

}
