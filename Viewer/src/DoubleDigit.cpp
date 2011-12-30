#include "../include/DoubleDigit.h"
#include <qtextstream.h>
#include "../VarBase/include/basecode.h"
DoubleDigit::DoubleDigit(string name, double newval)
{
 //Library *l;
 DoubleVar *v;
 lib=MkSM();
 lib->Load();
 if((v=(DoubleVar*)lib->Find(name))==0)
 {
  lib->Create(name, newval);
  lib->Save();
  v=(DoubleVar*)lib->Find(name);
 }
 setDigit(name, v->getValue());
}

void DoubleDigit::setDigit(string name, double nDigit)
{
 lib->Delete(name);
 value=nDigit;
 lib->Create(name, value);
 lib->Save();
}

double DoubleDigit::getDigit()
{
 return value;
}

void DoubleDigit::show(QPainter *p, int x, int y)
{
 QString a;
 QTextStream str(&a);
 str<<getDigit();
 QPen pen("BLACK");
 p->setPen(pen);
 p->drawText(x,y,a);
}
