#include "../include/shape.h"

Shape::Shape()
{
}

Shape::Shape(int initUID, int initX, int initY, QColor initColor)
{
    uid = initUID;
    x = initX;
    y = initY;
    color = initColor;
}

void Shape::move(int newX, int newY)
{
    x = newX;
    y = newY;
}

void Shape::hide()
{
    isVisible = false;
}

void Shape::show()
{

    isVisible = true;
}

void Shape::setColor(QColor newColor)
{
    color = newColor;
}

void Shape::setUID(int newUID)
{
    uid = newUID;
}

int Shape::getX()
{
    return x;
}

int Shape::getY()
{
    return y;
}

bool Shape::checkIsVisible()
{
    return isVisible;
}
