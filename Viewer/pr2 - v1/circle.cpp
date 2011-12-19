#include "circle.h"
#include <QtGui/QApplication>
#include "mainwindow.h"

Circle::Circle()
{
}

Circle::Circle(int initUID, int initX, int initY, int initR, QColor initColour):
        Shape(initUID, initX, initY, initColour), r(initR)
{
    //r = initR;
}

void Circle::setR(int newR)
{
    r = newR;
}

void Circle::show(QPainter *painter) // TODO: a parameter indicating where to draw should be passed here
{
    Shape::show();
    QPen pen(colour);
    painter->setPen(pen);
    painter->drawEllipse(x, y, r*2, r*2);
    //QPainter painter(window)
    //window->

}

void Circle::hide()
{
    Shape::hide();

}
