#ifndef CIRCLE_H
#define CIRCLE_H
#include <qpainter.h>
#include <QtGui/QApplication>
//#include "mainwindow.h"
#include "shape.h"

class Circle : public Shape
{
    int r;
public:
    //Circle();
    //Circle(int initUID, int initX, int initY, int initR, QColor initColour=0);
    //~Circle();
    Circle(string nx, int nxv,
           string ny, int nyv,
           string nr, int nrv,
                      QColor ncolv);
    int getVarFromBase(string name, int newval);
    void show(QPainter *p1);
    void hide();
    void setx(string name, int newx);
    void sety(string name, int newy);
    void setr(string name, int newr);
    void refresh(){}
};

#endif // CIRCLE_H
