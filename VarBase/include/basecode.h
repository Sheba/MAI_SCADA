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

class IntVar: Var //целочисленная переменная
{
    int mValue;
public:
    int getValue();
    void setValue(int newValue);
}

class StringVar: Var  //строковая переменная
{
    string mValue;
public:
    string getValue();
    void setValue(string newValue);
}

class DoubleVar: Var //переменная с плавующей точкой
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
    Var* Create(string Name, string beginValue);
    Var* Create(string Name, double beginValue);
    Var* Create(string Name, int beginValue);
    Var* Find(string Name);
    int Delete(string Name);
    int Load();
    int Save();
};
