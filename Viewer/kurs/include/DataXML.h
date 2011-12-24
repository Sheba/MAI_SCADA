//класс для XML файла

class DataXML
{ 
 char* path;
 
 Line* pL[];
 int dIL;
 
 String* pS[];
 int dIS;
 
 Digit* pD[];
 int dID;

 public:
  int setPath(char* nPath);
  char* getPath();
  int loadXML();
  int ReadLineXML(){};
  int ReadStringXML(){};
  int ReadDigitXML(){};
};
