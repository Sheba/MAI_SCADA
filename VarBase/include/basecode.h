//библиотека
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
using namespace std;

struct dll
{
  string Name;
  string Value;
  string Type;
};

class Var //переменная
{
   string mName;
   string mValue;
   string mType;
public:
   Var(string newName)//{name=nname;}
   string getType()//{return type;}
   string getName()//{return name;}
   string getValue()//{return value;}
   void setType(string nweType)//{type=ntype;}
   void setValue(string newValue)//{value=nvalue;}
};

class Library //библиотека
{
    vector <dll> Libr;//вектор переменных
public:
    Library(){}
    int Create(string Name)//{return 0;}
    int Find(string Name)//{return 0;}
    int Delete(string Name)//{return 0;}
    int Load()//{return 0;}
    int Save()//{return 0;}
    int Write(string Name)//{return 0;}
    int Read(string Name)//{return 0;}
};
