//класс для целых чисел
#ifndef INTDIGIT_H
#define INTDIGIT_H
#include "../include/mainwindow.h"
#include "../VarBase/include/basecode.h"
#include <cstring>

class IntDigit: public MainWindow
{
 int value;

 public:
  IntDigit(string name, int newval);

  //void Load(string name);
  int setDigit(int nDigit);
  int getDigit();
  void show(QPainter *p, int x, int y);
  //void show(int x, int y);
 };
#endif
