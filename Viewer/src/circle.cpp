#include "../include/circle.h"
#include <QtGui/QApplication>
#include "../include/mainwindow.h"
/*
Circle::Circle()
{
}

Circle::Circle(int initUID, int initX, int initY, int initR, QColor initColour):
        Shape(initUID, initX, initY, initColour), r(initR)
{
    //r = initR;
}
*/

Circle::Circle(string nx, int nxv,
               string ny, int nyv,
               string nr, int nrv,
                          QColor ncolv)
{
 x=getVarFromBase(nx, nxv);
 y=getVarFromBase(ny, nyv);
 r=getVarFromBase(nr, nrv);
 color=ncolv;
}

int Circle::getVarFromBase(string name, int newval)
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

void Circle::setx(string name, int newx)
{
 lib->Delete(name);
 x=newx;
 lib->Create(name, x);
 lib->Save();
}

void Circle::sety(string name, int newy)
{
 lib->Delete(name);
 y=newy;
 lib->Create(name, y);
 lib->Save();
}

void Circle::setr(string name, int newr)
{
 lib->Delete(name);
 r=newr;
 lib->Create(name, r);
 lib->Save();
}

void Circle::show(QPainter *painter) // TODO: a parameter indicating where to draw should be passed here
{
    Shape::show();
    QPen pen(color);
    painter->setPen(pen);
    painter->drawEllipse(x, y, r*2, r*2);
    //QPainter painter(window)
    //window->

}

void Circle::hide()
{
    Shape::hide();

}
