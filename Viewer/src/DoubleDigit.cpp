#include "../include/DoubleDigit.h"
#include <qtextstream.h>
#include "../VarBase/include/basecode.h"

DoubleDigit::DoubleDigit(){};

void DoubleDigit::show(QPainter *p)
{
 QString a;
 QTextStream str(&a);
 str<<dval;
 QPen pen(color);
 p->setPen(pen);
 p->drawText(x,y,a);
}

int DoubleDigit::gfbi(string name)
{
 IntVar *v;
 lib=ConnectToSharedMemory();
 //lib->Load();
 v=(IntVar*)lib->Find(name);
 return v->getValue();
}


double DoubleDigit::gfbd(string name)
{
 DoubleVar *v;
 lib=ConnectToSharedMemory();
 //lib->Load();
 v=(DoubleVar*)lib->Find(name);
 return v->getValue();
}

void DoubleDigit::setcolor(QColor ncolor)
{
 color=ncolor;
}
