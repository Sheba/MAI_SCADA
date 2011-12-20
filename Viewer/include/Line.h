//класс линия
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
