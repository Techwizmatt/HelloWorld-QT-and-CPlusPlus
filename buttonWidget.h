//
// Created by Matthew Maggio on 12/4/19.
//

#ifndef HELLOWORLD_BUTTONWIDGET_H
#define HELLOWORLD_BUTTONWIDGET_H

#include <QWidget>
#include <QPushButton>

class buttonWidget : public QWidget {

Q_OBJECT

public:
    buttonWidget() {
        QPushButton *button;

    }

signals:

    void buttonClicked();

};

#endif //HELLOWORLD_BUTTONWIDGET_H


//I do not know what is going on here, I need to spend more time doing research on how all this connects. Header file are a new concept for me.

//I am trying to create a QPushButton but being able to run a function on a click.
