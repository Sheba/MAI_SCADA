#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"
#include <qpainter.h>

class Square : public Shape
{
    int a;
public:
    Square();
    Square(int initUID, int initX, int initY, int initA, QColor initColour=0);
    ~Square();
    void show(QPainter *p);
    void hide();
    void setA(int newA);
    void refresh(){}
};

#endif // SQUARE_H
