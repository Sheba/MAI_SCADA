#include "../include/shape.h"

Shape::Shape()
{
}

/*Shape::Shape(int initUID, int initX, int initY, QColor initColor)
{
    uid = initUID;
    x = initX;
    y = initY;
    color = initColor;
}*/

void Shape::show(QPainter *p){};


void Shape::setTypeID(int newID)
{
 type_id = newID;
}

void Shape::setX(int newX)
{
 x=newX;
}

void Shape::setX1(int newX1)
{
 x1=newX1;
}

void Shape::setX2(int newX2)
{
 x2=newX2;
}

void Shape::setY(int newY)
{
 y=newY;
}

void Shape::setY1(int newY1)
{
 y1=newY1;
}

void Shape::setY2(int newY2)
{
 y2=newY2;
}

void Shape::setR(int newR)
{
 r=newR;
}

void Shape::setA(int newA)
{
 a=newA;
}

void Shape::setR1(int newR1)
{
 r1=newR1;
}

void Shape::setR2(int newR2)
{
 r2=newR2;
}

void Shape::setIval(int newIval)
{
 ival=newIval;
}

void Shape::setDval(double newDval)
{
 dval=newDval;
}

void Shape::setSval(const char* newSval)
{
 sval=newSval;
}

