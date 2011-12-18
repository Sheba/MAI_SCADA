#ifndef SHAPE_H
#define SHAPE_H
#include <QtGui/QApplication>
//#include "mainwindow.h"
#include <qcolor.h>

class Shape
{
//    int a;
protected:
    bool isVisible;
    int uid;
    int x, y;
    QColor colour;

public:
    Shape();
    Shape(int initUID, int initX, int initY, QColor initColour=0);
    ~Shape();
    virtual void show();
    virtual void refresh()=0;
    virtual void hide();
    virtual void move(int newX, int newY);
    //virtual void change(int newA, QColor newColour);
    virtual void setColour(QColor newColour);
    virtual void setUID(int newUID);
    // Universal accessors
    virtual int getX();
    virtual int getY();
    virtual bool checkIsVisible();
//    virtual void setA

};

#endif // SHAPE_H
