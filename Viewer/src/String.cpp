#include "../include/String.h"
#include <qtextstream.h>

String::String(string name, const char* ndata)
{
 StringVar *v;
 lib=MkSM();
 lib->Load();
 if((v=(StringVar*)lib->Find(name))==0)
 {
  lib->Create(name, ndata);
  lib->Save();
  v=(StringVar*)lib->Find(name);
 }
 setData(name, v->getValue().c_str());// c_str() переводит string в const char *
}

void String::setData(string name, const char* ndata)
{
 lib->Delete(name);
 data=ndata;
 lib->Create(name, data);
 lib->Save();
}

const char* String::getData()
{
 return data;
}

/*int String::setX(int nx)
{
 x=nx;
 return 0;
}

int String::setY(int ny)
{
 y=ny;
 return 0;
}*/

void String::show(QPainter *p, int x, int y)
{
 QString a;
 a=QString::fromLocal8Bit(data);
 QPen pen("BLACK");
 p->setPen(pen);
 p->drawText(x,y,a);
}
