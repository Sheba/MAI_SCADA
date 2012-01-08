#ifndef ELEMENTS_H
#define ELEMENTS_H
#include "../VarBase/include/basecode.h"
#include "../Viewer/include/shape.h"
#include "../Viewer/include/Line.h"
#include "../Viewer/include/circle.h"
#include "../Viewer/include/square.h"
#include "../Viewer/include/Ellipse.h"
#include "../Viewer/include/IntDigit.h"
#include "../Viewer/include/DoubleDigit.h"
#include "../Viewer/include/String.h"
#include <cstring>

class Elem
{
 public:
  Library *lib;
  vector <Shape*> elem;
  int flag;

  Elem();
  int Load();
  Shape* AddLine(string cx1, string cy1, string cx2, string cy2, char* ccolor);
  Shape* AddCircle(string cx, string cy, string cr, char* ccolor);
  Shape* AddSquare(string cx, string cy, string ca, char* ccolor);
  Shape* AddEllipse(string cx, string cy, string cr1, string cr2, char* ccolor);
  Shape* AddIntDigit(string cx, string cy, string cival, char* ccolor);
  Shape* AddDoubleDigit(string cx, string cy, string cdval, char* ccolor);
  Shape* AddString(string cx, string cy, string csval, char* ccolor);
  QColor StrToQCol(char* name);
  int getNumEl();
};

#endif // ELEMENTS_H
