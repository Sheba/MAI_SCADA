#include "../include/String.h"
#include <qtextstream.h>

String::String(){};

void String::show(QPainter *p)
{
 QString a;
 a=QString::fromLocal8Bit(sval);
 QPen pen(color);
 p->setPen(pen);
 p->drawText(x,y,a);
}

int String::gfbi(string name)
{
 IntVar *v;
 lib=ConnectToSharedMemory();
 //lib->Load();
 v=(IntVar*)lib->Find(name);
 return v->getValue();
}


const char* String::gfbs(string name)
{
 StringVar *v;
 lib=ConnectToSharedMemory();
 //lib->Load();
 v=(StringVar*)lib->Find(name);
 return v->getValue().c_str();
}

void String::setcolor(QColor ncolor)
{
 color=ncolor;
}

