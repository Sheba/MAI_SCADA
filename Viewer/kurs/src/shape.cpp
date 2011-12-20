#include "../include/shape.h"

Shape::Shape()
{
}

Shape::Shape(int initUID, int initX, int initY, QColor initColour)
{
    uid = initUID;
    x = initX;
    y = initY;
    colour = initColour;
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

void Shape::setColour(QColor newColour)
{
    colour = newColour;
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
