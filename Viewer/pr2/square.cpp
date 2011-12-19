#include "square.h"

Square::Square()
{
}

Square::Square(int initUID, int initX, int initY, int initA, QColor initColour):
        Shape(initUID, initX, initY, initColour), a(initA)
{

}

void Square::setA(int newA)
{
    a = newA;
}

void Square::show(QPainter *painter)
{
    Shape::show();
    QPen pen(colour);
    painter->setPen(pen);
    painter->drawRect(x, y, a, a);
    //QPainter painter(this);

}

void Square::hide()
{
    Shape::hide();

}
