//классы для дробных чисел
#ifndef DOUBLEDIGIT_H
#define DOUBLEDIGIT_H
#include "../include/mainwindow.h"
#include "../VarBase/include/basecode.h"
#include <cstring>

class DoubleDigit: public MainWindow
{
 double value;

 public:
  DoubleDigit(string name, double newval);

  void setDigit(string name, double nDigit);
  double getDigit();
  void show(QPainter *p, int x, int y);
};

#endif
