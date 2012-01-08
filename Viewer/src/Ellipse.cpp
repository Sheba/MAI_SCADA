#include "../include/Ellipse.h"
#include <QtGui/QApplication>
#include "../include/mainwindow.h"

Ellipse::Ellipse(){};

void Ellipse::show(QPainter *p)
{
 QPen pen(color);
 p->setPen(pen);
 p->drawEllipse(x, y, r1, r2);
}

int Ellipse::gfb(string name)
{
 IntVar *v;
 lib=ConnectToSharedMemory();
 //lib->Load();
 v=(IntVar*)lib->Find(name);
 return v->getValue();
}

void Ellipse::setcolor(QColor ncolor)
{
 color=ncolor;
}
