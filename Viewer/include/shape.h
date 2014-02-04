#ifndef SHAPE_H
#define SHAPE_H
#include <QtGui/QApplication>
//#include "../Viewer/include/mainwindow.h"
#include <qcolor.h>
#include <cstring>
//using namespace std;

class Shape
{
 protected:
    int type_id;

    /* 1 - Line
       2 - Circle
       3 - Square
       4 - Ellipse
       5 - IntDigit
       6 - DoubleVar
       7 - String
    */

    int x, y, x1, y1, x2, y2;
    double dval;
    const char* sval;
    int ival;
    int r, a, r1, r2;
    QColor color;

public:
    Shape();
    virtual void show(QPainter *p);
    // Universal accessors
    virtual void setTypeID(int newID);
    virtual void setX(int newX);
    virtual void setY(int newY);
    virtual void setX1(int newX1);
    virtual void setY1(int newY1);
    virtual void setX2(int newX2);
    virtual void setY2(int newY2);
    virtual void setR(int newR);
    virtual void setA(int newA);
    virtual void setR1(int newR1);
    virtual void setR2(int newR2);
    virtual void setIval(int newIval);
    virtual void setDval(double newDval);
    virtual void setSval(const char* newSval);
};

#endif // SHAPE_H
