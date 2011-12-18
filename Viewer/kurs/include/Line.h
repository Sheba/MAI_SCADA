//класс линия
#include <qpainter.h>
#include <QtGui/QApplication>
#include "include/shape.h"

class myLine: public Shape
{
 int x1,x2;
 int y1,y2;
 int color;

 public:
  myLine(){};
  //Line(int nx1, int nx2, int ny1, int ny2, int ncolor){};
 
  int setx1(int nx1);
  int getx1();
  int setx2(int nx2);
  int getx2();
  int sety1(int ny1);
  int gety1();
  int sety2(int ny2);
  int gety2();
  int setcolor(int ncolor);
  int getcolor();
  void show(QPainter *painter);
  void hide();
};
