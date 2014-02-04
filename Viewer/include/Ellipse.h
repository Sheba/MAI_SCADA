#ifndef ELLIPSE_H
#define ELLIPSE_H
#include <qpainter.h>
#include <QtGui/QApplication>
#include "../Viewer/include/shape.h"
#include <cstring>
#include "../VarBase/include/basecode.h"

class Ellipse : public Shape
{
 public:
    Library *lib;

    Ellipse();

    void setcolor(QColor ncolor);
    void show(QPainter *painter);
    int gfb(string name);
};

#endif // ELLIPSE_H
