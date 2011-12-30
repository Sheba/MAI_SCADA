//класс строка
#ifndef STRING_H
#define STRING_H
#include <QString>
#include <qpainter.h>
#include "../Viewer/include/mainwindow.h"
#include <cstring>

class String: public MainWindow
{
 const char* data;

 public:
  String(string name, const char* ndata);

  const char* getVarFromBase(string name, const char* newval);
  void setData(string name, const char* ndata);
  const char* getData();
  void show(QPainter *p, int x, int y);
};
#endif
