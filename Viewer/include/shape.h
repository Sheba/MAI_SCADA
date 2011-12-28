#ifndef SHAPE_H
#define SHAPE_H
#include <QtGui/QApplication>
#include "../Viewer/include/mainwindow.h"
#include <qcolor.h>

class Shape: public MainWindow
{
//    int a;
protected:
    bool isVisible;
    int uid;
    int x, y;
    int x1, y1, x2, y2;
    QColor color;

public:
    Shape();
    Shape(int initUID, int initX, int initY, QColor initColor=0);
    //~Shape();
    virtual void show();
    virtual void hide();
    virtual void move(int newX, int newY);
    virtual void setColor(QColor newColor);
    virtual void setUID(int newUID);
    // Universal accessors
    virtual int getX();
    virtual int getY();
    virtual bool checkIsVisible();
//    virtual void setA

};

#endif // SHAPE_H
