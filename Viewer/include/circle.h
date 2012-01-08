#ifndef CIRCLE_H
#define CIRCLE_H
#include <qpainter.h>
#include <QtGui/QApplication>
#include "../Viewer/include/shape.h"
#include <cstring>
#include "../VarBase/include/basecode.h"

class Circle: public Shape
{
 public:
  Library *lib;

  Circle();

  void setcolor(QColor ncolor);
  void show(QPainter *painter);
  int gfb(string name);
};

#endif // CIRCLE_H
