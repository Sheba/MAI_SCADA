//класс строка
#ifndef STRING_H
#define STRING_H
#include <QString>
#include <qpainter.h>

class String
{
 int dlc;
 char* data;

 public:
  String(){};
  String(char *mas);
  
  int setDlc(int ndlc);
  int getDlc();
  int setData(char* ndata);
  char* getData();
  QString show();
};
#endif
