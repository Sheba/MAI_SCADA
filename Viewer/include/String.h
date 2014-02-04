//класс строка
#ifndef STRING_H
#define STRING_H
#include <QString>
#include <qpainter.h>
#include <QtGui/QApplication>
#include "../Viewer/include/shape.h"
#include <cstring>
#include "../VarBase/include/basecode.h"

class String: public Shape
{
 public:
  Library *lib;

  String();

  void setcolor(QColor ncolor);
  void show(QPainter *painter);
  int gfbi(string name);
  const char* gfbs(string name);
};
#endif
