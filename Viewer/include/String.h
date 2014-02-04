//класс строка
#ifndef STRING_H
#define STRING_H
#include <QString>
#include <qpainter.h>
#include "../Viewer/include/mainwindow.h"
#include <cstring>

class String: public MainWindow
{
 //int x, y; //координаты в окне
 const char* data;

 public:
  String(string name, const char* ndata);
  //String(char *mas);

  const char* getVarFromBase(string name, const char* newval);
  void setData(const char* ndata);
  //int setX(int nx);
  //int setY(int ny);
  const char * getData();
  void show(QPainter *p, int x, int y);
};
#endif
