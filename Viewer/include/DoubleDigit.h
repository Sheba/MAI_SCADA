//классы для дробных чисел
#ifndef DOUBLEDIGIT_H
#define DOUBLEDIGIT_H
#include <qpainter.h>
#include <QtGui/QApplication>
#include "../Viewer/include/shape.h"
#include <cstring>
#include "../VarBase/include/basecode.h"

class DoubleDigit: public Shape
{
 public:
  Library *lib;

  DoubleDigit();

  void setcolor(QColor ncolor);
  void show(QPainter *painter);
  int gfbi(string name);
  double gfbd(string name);
};

#endif
