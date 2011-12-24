//класс строка
#ifndef LINE_H
#define LINE_H
#include "../include/shape.h"
#include <QString>

class String
{
 int dlc;
 char* data;

 public:
  String(){};
  
  int setDlc(int nDlc);
  int getDlc();
  int setData(char* nData);
  char* getData();
  void show();
};
