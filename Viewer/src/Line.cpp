#include <QtGui/QApplication>
#include "../include/mainwindow.h"
#include "../include/Line.h"

Line::Line(string nx1,  int nx1v,
           string ny1,  int ny1v,
           string nx2,  int nx2v,
           string ny2,  int ny2v,
                        QColor ncolv)
{
 x1=getVarFromBase(nx1, nx1v);
 y1=getVarFromBase(ny1, ny1v);
 x2=getVarFromBase(nx2, nx2v);
 y2=getVarFromBase(ny2, ny2v);
 color=ncolv;
}

int Line::getVarFromBase(string name, int newval)
{
 IntVar *v;
 lib=MkSM();
 lib->Load();
 if((v=(IntVar*)lib->Find(name))==0)
 {
  lib->Create(name, newval);
  lib->Save();
  v=(IntVar*)lib->Find(name);
 }
 return (v->getValue());
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

QColor Line::getcolor()
{
 return color;
}

void Line::show(QPainter *p)
{
 //Shape::show();
 QPen pen(color);
 p->setPen(pen);
 p->drawLine(x1, y1, x2, y2);
}
