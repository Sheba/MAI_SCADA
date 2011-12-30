#include "../include/Ellipse.h"
#include <QtGui/QApplication>
#include "../include/mainwindow.h"

Ellipse::Ellipse(string nx, int nxv,
               string ny, int nyv,
               string nr1, int nr1v,
               string nr2, int nr2v,
                          QColor ncolv)
{
 x=getVarFromBase(nx, nxv);
 y=getVarFromBase(ny, nyv);
 r1=getVarFromBase(nr1, nr1v);
 r2=getVarFromBase(nr2, nr2v);
 color=ncolv;
}

int Ellipse::getVarFromBase(string name, int newval)
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

void Ellipse::setx(string name, int newx)
{
 if(lib->Find(name)==0) return;
 lib->Delete(name);
 x=newx;
 lib->Create(name, x);
 lib->Save();
}

void Ellipse::sety(string name, int newy)
{
 if(lib->Find(name)==0) return;
 lib->Delete(name);
 y=newy;
 lib->Create(name, y);
 lib->Save();
}

void Ellipse::setr1(string name, int newr1)
{
 if(lib->Find(name)==0) return;
 lib->Delete(name);
 r1=newr1;
 lib->Create(name, r1);
 lib->Save();
}

void Ellipse::setr2(string name, int newr2)
{
 if(lib->Find(name)==0) return;
 lib->Delete(name);
 r2=newr2;
 lib->Create(name, r2);
 lib->Save();
}

void Ellipse::show(QPainter *p)
{
 QPen pen(color);
 p->setPen(pen);
 p->drawEllipse(x, y, r1, r2);
}
