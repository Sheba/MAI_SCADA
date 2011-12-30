#include "../include/IntDigit.h"
#include <qtextstream.h>

IntDigit::IntDigit(string name, int newval)
{
 //Library *l;
 IntVar *v;
 lib=MkSM();
 lib->Load();
 if((v=(IntVar*)lib->Find(name))==0)
 {
  lib->Create(name, newval);
  lib->Save();
  v=(IntVar*)lib->Find(name);
 }
 setDigit(name, v->getValue());
}

void IntDigit::setDigit(string name, int nDigit)
{
 if(lib->Find(name)==0) return;
 lib->Delete(name);
 value=nDigit;
 lib->Create(name, value);
 lib->Save();
}

int IntDigit::getDigit()
{
 return value;
}

void IntDigit::show(QPainter *p, int x, int y)
{
 QString a;
 QTextStream str(&a);
 str<<value;
 QPen pen("BLACK");
 p->setPen(pen);
 p->drawText(x, y, a);
}
