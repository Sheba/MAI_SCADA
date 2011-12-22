#include "../include/String.h"

String::String(char *mas)
{
    data=mas;
}

int String::setDlc(int ndlc)
{
 dlc=ndlc;
 return 0;
}

int String::getDlc()
{
 return dlc;
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

QString String::show()
{
 QString a;
 a=QString::fromLocal8Bit(data);
 return a;
}
