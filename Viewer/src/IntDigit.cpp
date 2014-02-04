#include "../include/IntDigit.h"
#include <qtextstream.h>

IntDigit::IntDigit(){};

void IntDigit::show(QPainter *p)
{
 QString a;
 QTextStream str(&a);
 str<<ival;
 QPen pen(color);
 p->setPen(pen);
 p->drawText(x, y, a);
}

int IntDigit::gfb(string name)
{
 IntVar *v;
 lib=ConnectToSharedMemory();
 //lib->Load();
 v=(IntVar*)lib->Find(name);
 return v->getValue();
}

void IntDigit::setcolor(QColor ncolor)
{
 color=ncolor;
}
