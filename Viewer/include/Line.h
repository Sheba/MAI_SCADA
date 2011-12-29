//класс линия
#ifndef LINE_H
#define LINE_H
#include <qpainter.h>
#include <QtGui/QApplication>
#include "../Viewer/include/shape.h"
#include <cstring>
//#include "../VarBase/include/basecode.h"
//#include "../Viewer/include/shape.h"

class Line: public Shape
{
 public:
  Line(string nx1,  int nx1v,
       string ny1,  int ny1v,
       string nx2,  int nx2v,
       string ny2,  int ny2v,
                    QColor ncolv);

  int setx1(int nx1);
  int getx1();
  int setx2(int nx2);
  int getx2();
  int sety1(int ny1);
  int gety1();
  int sety2(int ny2);
  int gety2();
  int setcolor(int ncolor);
  QColor getcolor();
  void show(QPainter *painter);
  int getVarFromBase(string name, int newval);
};
#endif
