//класс для чисел
#include <QtGui/QApplication>
#include "../include/mainwindow.h"
//#include "../include/Digit.h"
class Digit//: public Shape
{
 double value;

 public:
  Digit(){};

  int setDigit(double nDigit);
  double getDigit();
  QString show();
};
