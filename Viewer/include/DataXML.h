//класс для XML файла

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
};
