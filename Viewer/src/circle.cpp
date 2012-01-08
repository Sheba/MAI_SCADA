#include "../include/circle.h"
#include <QtGui/QApplication>
#include "../include/mainwindow.h"

Circle::Circle(){};

void Circle::show(QPainter *painter) // TODO: a parameter indicating where to draw should be passed here
{
 QPen pen(color);
 painter->setPen(pen);
 painter->drawEllipse(x, y, r*2, r*2);
}

int Circle::gfb(string name)
{
 IntVar *v;
 lib=ConnectToSharedMemory();
 //lib->Load();
 v=(IntVar*)lib->Find(name);
 return v->getValue();
}

void Circle::setcolor(QColor ncolor)
{
    color=ncolor;
}

