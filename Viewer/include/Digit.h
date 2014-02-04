//класс для чисел
#include <QtGui/QApplication>
#include "../include/mainwindow.h"
#include "../VarBase/include/basecode.h"
#include <cstring>

class Digit//: public Shape
{
 int value;

 public:
  Digit(string name);

  //void Load(string name);
  int setDigit(int nDigit);
  int getDigit();
  void show(QPainter *p, int x, int y);
};
