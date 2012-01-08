#ifndef SQUARE_H
#define SQUARE_H
#include <qpainter.h>
#include <QtGui/QApplication>
#include "../Viewer/include/shape.h"
#include <cstring>
#include "../VarBase/include/basecode.h"

class Square : public Shape
{
 public:
  Library *lib;

  Square();

  void setcolor(QColor ncolor);
  void show(QPainter *painter);
  int gfb(string name);
};

#endif // SQUARE_H
