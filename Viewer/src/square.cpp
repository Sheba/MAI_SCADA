#include "../include/square.h"
/*
Square::Square()
{
}

Square::Square(int initUID, int initX, int initY, int initA, QColor initColour):
        Shape(initUID, initX, initY, initColour), a(initA)
{

}
*/
Square::Square(string nx, int nxv,
               string ny, int nyv,
               string na, int nav,
                          QColor ncolv)
{
 x=getVarFromBase(nx, nxv);
 y=getVarFromBase(ny, nyv);
 a=getVarFromBase(na, nav);
color=ncolv;
}

int Square::getVarFromBase(string name, int newval)
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

void Square::setA(int newA)
{
    a = newA;
}

void Square::show(QPainter *painter)
{
    Shape::show();
    QPen pen(color);
    painter->setPen(pen);
    painter->drawRect(x, y, a, a);
    //QPainter painter(this);

}

void Square::hide()
{
    Shape::hide();

}
