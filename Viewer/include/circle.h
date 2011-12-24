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
    Circle();
    Circle(int initUID, int initX, int initY, int initR, QColor initColour=0);
    ~Circle();
    void show(QPainter *p1);
    void hide();
    void setR(int newR);
    void refresh(){}
};

#endif // CIRCLE_H
