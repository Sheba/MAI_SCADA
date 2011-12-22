#include <QtGui/QApplication>
#include "../include/mainwindow.h"
#include "../include/Line.h"

Line::Line(int nx1, int nx2, int ny1, int ny2, int ncolor)
{
    x1=nx1;
    x2=nx2;
    y1=ny1;
    y2=ny2;
    color=ncolor;
}

int Line::setx1(int nx1)
{
 x1=nx1;
 return 0;
}

int Line::getx1()
{
 return x1;
}

int Line::setx2(int nx2)
{
 x2=nx2;
 return 0;
}

int Line::getx2()
{
 return x2;
}

int Line::sety1(int ny1)
{
 y1=ny1;
 return 0;
}

int Line::gety1()
{
 return y1;
}

int Line::sety2(int ny2)
{
 y2=ny2;
 return 0;
}

int Line::gety2()
{
 return y2;
}

int Line::setcolor(int ncolor)
{
 color=ncolor;
 return 0;
}

int Line::getcolor()
{
 return color;
}

void Line::show(QPainter *painter)
{
 Shape::show();
 QPen pen(color);
 painter->setPen(pen);
 painter->drawLine(x1, y1, x2, y2);   
}

void Line::hide()
{
 Shape::hide();
} 
