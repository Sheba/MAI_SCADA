//класс для чисел
#include <QtGui/QApplication>
#include "../Viewer/include/mainwindow.h"
#include "../Viewer/include/Digit.h"
class Digit: public Shape
{
 double value;

 public:
  Digit(){};

  int setDigit(double nDigit);
  double getDigit();
  void show();
};
