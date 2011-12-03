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
    Var(string newName);
    Var* getType();
    string getName();
};

class IntVar: Var
{
    int mValue;
public:
    int getValue();
    void setValue(int newValue);
}

class StringVar: Var
{
    string mValue;
public:
    string getValue();
    void setValue(string newValue);
}

class DoubleVar: Var
{
    double mValue;
public:
    double getValue();
    void setValue(double newValue);
}

class Library //библиотека
{
    vector <Var> Libr;//вектор переменных
public:
    Library(){}
    int Create(string Name, string beginValue);
    int Create(string Name, double beginValue);
    int Create(string Name, int beginValue);
    int Find(string Name);
    int Delete(string Name);
    int Load();
    int Save();
};
