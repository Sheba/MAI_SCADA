#include "../include/Digit.h"
#include <iostream>
#include <qtextstream.h>

Digit::Digit(string name)
{
 Library l;
 IntVar *v;
 l.Load();
 if((v=(IntVar*)l.Find(name))==0)
 {
  l.Create(name, 69);
  l.Save();
  v=(IntVar*)l.Find(name);
 }
 setDigit(v->getValue());
}

int Digit::setDigit(int nDigit)
{
 value=nDigit;
 return 0;
}

int Digit::getDigit()
{
 return value;
}
 
void Digit::show(QPainter *p, int x, int y)
{
 QString a;
 QTextStream str(&a);
 str<<value;
 p->drawText(x,y,a);
}

