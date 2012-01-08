#include <QtGui/QApplication>
#include "../include/mainwindow.h"
#include "../include/Line.h"

Line::Line()
{
}

int Line::gfb(string name)
{
 IntVar *v;
 lib=ConnectToSharedMemory();
 //lib->Load();
 v=(IntVar*)lib->Find(name);
 return v->getValue();
}

void Line::setcolor(QColor ncolor)
{
 color=ncolor;
}

void Line::show(QPainter *p)
{
 QPen pen(color);
 p->setPen(pen);
 p->drawLine(x1, y1, x2, y2);
}
