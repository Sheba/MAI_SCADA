//библиотека
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
using namespace std;

struct dll
{
  string name;
  string value;
  string type;
};

class var
{
   string name;
   string value;
   string type;
public:
   var(string nname)//{name=nname;}
   string gettype()//{return type;}
   string getname()//{return name;}
   string getvalue()//{return value;}
   void settype(string ntype)//{type=ntype;}
   void setvalue(string nvalue)//{value=nvalue;}
};

class library
{
    vector <dll> libr;//сюда сунь свой вектор -> сунул сюда свой вектор
public:
    library(){}
    int create(string name)//{return 0;}
    int find(string name)//{return 0;}
    int del(string name)//{return 0;}
    int load()//{return 0;}
    int save()//{return 0;}
    int write(string name)//{return 0;}
    int read(string name)//{return 0;}
};
