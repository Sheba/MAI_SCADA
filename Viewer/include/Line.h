//класс линия
#ifndef LINE_H
#define LINE_H
#include <qpainter.h>
#include <QtGui/QApplication>
#include "../Viewer/include/shape.h"
#include <cstring>
#include "../VarBase/include/basecode.h"

class Line: public Shape
{
 public:
  Library *lib;

  Line();

  void setcolor(QColor ncolor);
  void show(QPainter *painter);
  int gfb(string name);
};
#endif
