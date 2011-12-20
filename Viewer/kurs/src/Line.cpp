#include <QtGui/QApplication>
#include "../include/mainwindow.h"
#include "../include/Line.h"

int myLine::setx1(int nx1)
{
 x1=nx1;
 return 0;
}

int myLine::getx1()
{
 return x1;
}

int myLine::setx2(int nx2)
{
 x2=nx2;
 return 0;
}

int myLine::getx2()
{
 return x2;
}

int myLine::sety1(int ny1)
{
 y1=ny1;
 return 0;
}

int myLine::gety1()
{
 return y1;
}

int myLine::sety2(int ny2)
{
 y2=ny2;
 return 0;
}

int myLine::gety2()
{
 return y2;
}

int myLine::setcolor(int ncolor)
{
 color=ncolor;
 return 0;
}

int myLine::getcolor()
{
 return color;
}

void myLine::show(QPainter *painter)
{
 Shape::show();
 QPen pen(color);
 painter->setPen(pen);
 painter->drawLine(x1, y1, x2, y2);   
}

void myLine::hide()
{
 Shape::hide();
} 

