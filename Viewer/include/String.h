//класс строка
#ifndef STRING_H
#define STRING_H
#include <QString>
#include <qpainter.h>

class String
{
 int x, y; //координаты в окне
 char* data;

 public:
  String(){};
  String(char *mas);

  int setData(char* ndata);
  int setX(int nx);
  int setY(int ny);
  char* getData();
  void show(QPainter *p);
};
#endif
