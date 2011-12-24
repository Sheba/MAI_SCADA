//классы

class DataXML
{ 
 char* path;
 LINE* pL[];
 int dIL;
 STRING* pS[];
 int dIS;
 DIGIT* pD[];
 int dID;

 public:
  int setPath(char* nPath)
  {
   if ((nPath==NULL) || ( nPath==" ")) return 1;
   path=nPath;
   return 0;
  }
  char* getPath()
  {
   return path;
  }

 int loadXML()
 {
  if ((getPath()==" ") || ( getPath()==NULL)) return 1;
  ifstream in(getPath());
  in.close();
 }

 int ReadLineXML(){};
 int ReadSTRINGXML(){};
 int ReadDIGIT(){};
}

class LINE
{
 int x1,x2;
 int y1,y2;
 int color;

 public:
  LINE(){}
  int setx1(int nx1)
  {
   x1=nx1;
   return 0;
  }

  int getx1()
  {
   return x1;
  }

  int setx2(int nx2)
  {
   x2=nx2;
   return 0;
  }

  int getx2()
  {
   return x2;
  }

  int sety1(int ny1)
  {
   y1=ny1;
   return 0;
  }

  int gety1()
  {
   return y1;
  }

  int sety2(int ny2)
  {
   y2=ny2;
   return 0;
  }

  int gety2()
  {
   return y2;
  }
};

class STRING
{
 int dlc;
 char* data;

 public:
  STRING(){};
  int setDlc(int nDlc)
  {
   dlc=nDlc;
   return 0;
  }

  int getDlc()
  {
   return dlc;
  }

  int setData(char* nData)
  {
   data=nData;
   return 0;
  }

  char* getData()
  {
   return data;
  }
};

class DIGIT
{
 double value;

 public:
  DIGIT(){};

  int setDigit(double nDigit)
  {
   value=nDigit;
   return 0;
  }

  double getDigit()
  {
   return value;
  }
};
