#include "../include/square.h"

Square::Square()
{
}


void Square::show(QPainter *painter)
{
 QPen pen(color);
 painter->setPen(pen);
 painter->drawRect(x, y, a, a);
}

int Square::gfb(string name)
{
 IntVar *v;
 lib=ConnectToSharedMemory();
 //lib->Load();
 v=(IntVar*)lib->Find(name);
 return v->getValue();
}

void Square::setcolor(QColor ncolor)
{
 color=ncolor;
}
