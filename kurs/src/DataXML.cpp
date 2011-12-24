#include "../Viewer/include/DataXML.h"

int DataXML::setPath(char* nPath)
{
 if ((nPath==NULL) || ( nPath==" ")) return 1;
 path=nPath;
 return 0;
}

char* DataXML::getPath()
{
 return path;
}

int DataXML::loadXML()
{
 if ((getPath()==" ") || ( getPath()==NULL)) return 1;
 ifstream in(getPath());
 in.close();
 return 0;
}

int DataXML::ReadLineXML(){};
int DataXML::ReadStringXML(){};
int DataXML::ReadDigitXML(){};





