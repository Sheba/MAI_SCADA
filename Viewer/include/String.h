//класс строка
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
