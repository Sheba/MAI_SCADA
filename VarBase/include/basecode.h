//библиотека
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
using namespace std;

class Var //переменная
{
   string mName;
public:
   Var(string newName)
   Var* getType()
   string getName()
};

class IntVar: Var
{
    int Value;
public:
    int getValue()
}

class Library //библиотека
{
    vector <Var> Libr;//вектор переменных
public:
    Library(){}
    int Create(string Name, string beginvalue)
    int Create(string Name, double beginvalue)
    int Create(string Name, int beginvalue)
    int Find(string Name)
    int Delete(string Name)
    int Load()
    int Save()
};
