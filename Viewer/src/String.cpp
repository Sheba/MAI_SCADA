#include "../include/String.h"

String::String(char* mas)
{
    data=mas;
}

int String::setData(char* ndata)
{
 data=ndata;
 return 0;
}

char* String::getData()
{
 return data;
}

int String::setX(int nx)
{
 x=nx;
 return 0;
}

int String::setY(int ny)
{
 y=ny;
 return 0;
}

void String::show(QPainter *p)
{
 QString a;
 a=QString::fromLocal8Bit(data);
 p->drawText(x,y,a);
 //return a;
}
