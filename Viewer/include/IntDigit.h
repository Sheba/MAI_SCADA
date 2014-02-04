//класс для целых чисел
#ifndef INTDIGIT_H
#define INTDIGIT_H
#include <qpainter.h>
#include <QtGui/QApplication>
#include "../Viewer/include/shape.h"
#include <cstring>
#include "../VarBase/include/basecode.h"

class IntDigit: public Shape
{
 public:
  Library *lib;
  IntDigit();

  void setcolor(QColor ncolor);
  void show(QPainter *painter);
  int gfb(string name);
 };
#endif
