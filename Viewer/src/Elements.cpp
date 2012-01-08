#include "../Viewer/include/Elements.h"

Elem::Elem()
{
 lib=ConnectToSharedMemory();
 flag=0;
}

QColor Elem::StrToQCol(char* name)
{
 QColor col;
 if(!strcmp("BLACK",name))  col="BLACK";
 if(!strcmp("RED",name))    col="RED";
 if(!strcmp("GREEN",name))  col="GREEN";
 if(!strcmp("BLUE",name))   col="BLUE";
 if(!strcmp("YELLOW",name)) col="YELLOW";
 if(!strcmp("WHITE",name))  col="WHITE";
 return col;
}


Shape* Elem::AddLine(string cx1,
                     string cy1,
                     string cx2,
                     string cy2,
                     char* ccolor)
{
 Line *l=new Line;
 lib->Load();
 l->setX1(l->gfb(cx1));
 l->setY1(l->gfb(cy1));
 l->setX2(l->gfb(cx2));
 l->setY2(l->gfb(cy2));
 l->setcolor(StrToQCol(ccolor));
 elem.push_back((Shape*)l);
 return elem[elem.size()-1];
}

Shape* Elem::AddCircle(string cx,
                       string cy,
                       string cr,
                       char* ccolor)
{
 Circle *l=new Circle;
 lib->Load();
 l->setX(l->gfb(cx));
 l->setY(l->gfb(cy));
 l->setR(l->gfb(cr));
 l->setcolor(StrToQCol(ccolor));
 elem.push_back((Shape*)l);
 return elem[elem.size()-1];
}

Shape* Elem::AddSquare(string cx,
                       string cy,
                       string ca,
                       char* ccolor)
{
 Square *l=new Square;
 lib->Load();
 l->setX(l->gfb(cx));
 l->setY(l->gfb(cy));
 l->setA(l->gfb(ca));
 l->setcolor(StrToQCol(ccolor));
 elem.push_back((Shape*)l);
 return elem[elem.size()-1];
}

Shape* Elem::AddEllipse(string cx,
                        string cy,
                        string cr1,
                        string cr2,
                        char* ccolor)
{
 Ellipse *l=new Ellipse;
 lib->Load();
 l->setX(l->gfb(cx));
 l->setY(l->gfb(cy));
 l->setR1(l->gfb(cr1));
 l->setR2(l->gfb(cr2));
 l->setcolor(StrToQCol(ccolor));
 elem.push_back((Shape*)l);
 return elem[elem.size()-1];
}

Shape* Elem::AddIntDigit(string cx,
                         string cy,
                         string cival,
                         char* ccolor)
{
 IntDigit *l=new IntDigit;
 lib->Load();
 l->setX(l->gfb(cx));
 l->setY(l->gfb(cy));
 l->setIval(l->gfb(cival));
 l->setcolor(StrToQCol(ccolor));
 elem.push_back((Shape*)l);
 return elem[elem.size()-1];
}

Shape* Elem::AddDoubleDigit(string cx,
                            string cy,
                            string cdval,
                            char* ccolor)
{
 DoubleDigit *l=new DoubleDigit;
 lib->Load();
 l->setX(l->gfbi(cx));
 l->setY(l->gfbi(cy));
 l->setDval(l->gfbd(cdval));
 l->setcolor(StrToQCol(ccolor));
 elem.push_back((Shape*)l);
 return elem[elem.size()-1];
}

Shape* Elem::AddString(string cx,
                       string cy,
                       string csval,
                       char* ccolor)
{
 String *l=new String;
 lib->Load();
 l->setX(l->gfbi(cx));
 l->setY(l->gfbi(cy));
 l->setSval(l->gfbs(csval));
 l->setcolor(StrToQCol(ccolor));
 elem.push_back((Shape*)l);
 return elem[elem.size()-1];
}


int Elem::getNumEl()
{
    return flag;
}

int Elem::Load()
{
 ifstream in("elements.xml");
 char buf[64],stype[64],sx[16],sy[16],sr[16],sa[16],sr1[16],sr2[16],sx1[16],sy1[16],sx2[16],sy2[16], sival[16], sdval[64], ssval[64], scolor[64];
 char type[64],cx[16],cy[16],cr[16],ca[16],cr1[16],cr2[16],cx1[16],cy1[16],cx2[16],cy2[16], cival[16], cdval[64], csval[64], ccolor[64];
 int lenst,lensx,lensy,lensr,lensa,lensr1,lensr2,lensx1,lensy1,lensx2,lensy2,lensival,lensdval,lenssval,lensc;
 elem.clear();
 while(1)
 {
  in>>buf;
  memset(type,0,sizeof(type));

  if(in.eof()) break;
  if(!strcmp(buf,"<element"))
  {
   in>>stype;
   lenst=strlen(stype);
   for(int i=6;i<lenst-1;i++) type[i-6]=stype[i];
   switch(atoi(type))
   {
    //Line
    case 1:
     memset(cx1,0,sizeof(cx1));
     memset(cy1,0,sizeof(cy1));
     memset(cx2,0,sizeof(cx2));
     memset(cy2,0,sizeof(cy2));
     memset(ccolor,0,sizeof(ccolor));
     in>>sx1;
     lensx1=strlen(sx1);
     in>>sy1;
     lensy1=strlen(sy1);
     in>>sx2;
     lensx2=strlen(sx2);
     in>>sy2;
     lensy2=strlen(sy2);
     in>>scolor;
     lensc=strlen(scolor);
     //for(int i=6;i<lenst-1;i++) type[i-6]=stype[i];
     for(int i=4;i<lensx1-1;i++) cx1[i-4]=sx1[i];
     for(int i=4;i<lensy1-1;i++) cy1[i-4]=sy1[i];
     for(int i=4;i<lensx2-1;i++) cx2[i-4]=sx2[i];
     for(int i=4;i<lensy2-1;i++) cy2[i-4]=sy2[i];
     for(int i=7;i<lensc-2;i++) ccolor[i-7]=scolor[i];
     AddLine(cx1, cy1, cx2, cy2, ccolor);
     flag++;
     break;

     //Circle
     case 2:
      memset(cx,0,sizeof(cx));
      memset(cy,0,sizeof(cy));
      memset(cr,0,sizeof(cr));
      memset(ccolor,0,sizeof(ccolor));
      in>>sx;
      lensx=strlen(sx);
      in>>sy;
      lensy=strlen(sy);
      in>>sr;
      lensr=strlen(sr);
      in>>scolor;
      lensc=strlen(scolor);
      //for(int i=6;i<lenst-1;i++) type[i-6]=stype[i];
      for(int i=3;i<lensx-1;i++) cx[i-3]=sx[i];
      for(int i=3;i<lensy-1;i++) cy[i-3]=sy[i];
      for(int i=3;i<lensr-1;i++) cr[i-3]=sr[i];
      for(int i=7;i<lensc-2;i++) ccolor[i-7]=scolor[i];
      AddCircle(cx, cy, cr, ccolor);
      flag++;
      break;

      //Square
      case 3:
       memset(cx,0,sizeof(cx));
       memset(cy,0,sizeof(cy));
       memset(ca,0,sizeof(ca));
       memset(ccolor,0,sizeof(ccolor));
       in>>sx;
       lensx=strlen(sx);
       in>>sy;
       lensy=strlen(sy);
       in>>sa;
       lensa=strlen(sa);
       in>>scolor;
       lensc=strlen(scolor);
       //for(int i=6;i<lenst-1;i++) type[i-6]=stype[i];
       for(int i=3;i<lensx-1;i++) cx[i-3]=sx[i];
       for(int i=3;i<lensy-1;i++) cy[i-3]=sy[i];
       for(int i=3;i<lensr-1;i++) ca[i-3]=sa[i];
       for(int i=7;i<lensc-2;i++) ccolor[i-7]=scolor[i];
       AddSquare(cx, cy, ca, ccolor);
       flag++;
       break;

       //Ellipse
       case 4:
        memset(cx,0,sizeof(cx));
        memset(cy,0,sizeof(cy));
        memset(cr1,0,sizeof(cr1));
        memset(cr2,0,sizeof(cr2));
        memset(ccolor,0,sizeof(ccolor));
        in>>sx;
        lensx=strlen(sx);
        in>>sy;
        lensy=strlen(sy);
        in>>sr1;
        lensr1=strlen(sr1);
        in>>sr2;
        lensr2=strlen(sr2);
        in>>scolor;
        lensc=strlen(scolor);
        for(int i=3;i<lensx-1;i++) cx[i-3]=sx[i];
        for(int i=3;i<lensy-1;i++) cy[i-3]=sy[i];
        for(int i=4;i<lensr1-1;i++) cr1[i-4]=sr1[i];
        for(int i=4;i<lensr2-1;i++) cr2[i-4]=sr2[i];
        for(int i=7;i<lensc-2;i++) ccolor[i-7]=scolor[i];
        AddEllipse(cx, cy, cr1, cr2, ccolor);
        flag++;
        break;

        //IntDigit
        case 5:
         memset(cx,0,sizeof(cx));
         memset(cy,0,sizeof(cy));
         memset(cival,0,sizeof(cival));
         memset(ccolor,0,sizeof(ccolor));
         in>>sx;
         lensx=strlen(sx);
         in>>sy;
         lensy=strlen(sy);
         in>>sival;
         lensival=strlen(sival);
         in>>scolor;
         lensc=strlen(scolor);
         for(int i=3;i<lensx-1;i++) cx[i-3]=sx[i];
         for(int i=3;i<lensy-1;i++) cy[i-3]=sy[i];
         for(int i=6;i<lensival-1;i++) cival[i-6]=sival[i];
         for(int i=7;i<lensc-2;i++) ccolor[i-7]=scolor[i];
         AddIntDigit(cx, cy, cival, ccolor);
         flag++;
         break;

         //DoubleDigit
         case 6:
          memset(cx,0,sizeof(cx));
          memset(cy,0,sizeof(cy));
          memset(cdval,0,sizeof(cdval));
          memset(ccolor,0,sizeof(ccolor));
          in>>sx;
          lensx=strlen(sx);
          in>>sy;
          lensy=strlen(sy);
          in>>sdval;
          lensdval=strlen(sdval);
          in>>scolor;
          lensc=strlen(scolor);
          for(int i=3;i<lensx-1;i++) cx[i-3]=sx[i];
          for(int i=3;i<lensy-1;i++) cy[i-3]=sy[i];
          for(int i=6;i<lensdval-1;i++) cdval[i-6]=sdval[i];
          for(int i=7;i<lensc-2;i++) ccolor[i-7]=scolor[i];
          AddDoubleDigit(cx, cy, cdval, ccolor);
          flag++;
          break;

          //String
          case 7:
           memset(cx,0,sizeof(cx));
           memset(cy,0,sizeof(cy));
           memset(csval,0,sizeof(csval));
           memset(ccolor,0,sizeof(ccolor));
           in>>sx;
           lensx=strlen(sx);
           in>>sy;
           lensy=strlen(sy);
           in>>ssval;
           lenssval=strlen(ssval);
           in>>scolor;
           lensc=strlen(scolor);
           for(int i=3;i<lensx-1;i++) cx[i-3]=sx[i];
           for(int i=3;i<lensy-1;i++) cy[i-3]=sy[i];
           for(int i=6;i<lenssval-1;i++) csval[i-6]=ssval[i];
           for(int i=7;i<lensc-2;i++) ccolor[i-7]=scolor[i];
           AddString(cx, cy, csval, ccolor);
           flag++;
           break;
   }
  }
 }
 return 1;
}

