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


void Line::setx1(string name, int nx1)
{
 if(lib->Find(name)==0) return;
 lib->Delete(name);
 x1=nx1;
 lib->Create(name, x1);
 lib->Save();
}

void Line::setx2(string name, int nx2)
{
 if(lib->Find(name)==0) return;
 lib->Delete(name);
 x2=nx2;
 lib->Create(name, x2);
 lib->Save();
}

void Line::sety1(string name, int ny1)
{
 if(lib->Find(name)==0) return;
 lib->Delete(name);
 y1=ny1;
 lib->Create(name, y1);
 lib->Save();
}

void Line::sety2(string name, int ny2)
{
 if(lib->Find(name)==0) return;
 lib->Delete(name);
 y2=ny2;
 lib->Create(name, y2);
 lib->Save();
}

int Line::getx1()
{
 return x1;
}

int Line::getx2()
{
 return x2;
}

int Line::gety1()
{
 return y1;
}

int Line::gety2()
{
 return y2;
}

void Line::setcolor(int ncolor)
{
 color=ncolor;
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
