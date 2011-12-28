//библиотека
#ifndef BASECODE_H
#define BASECODE_H
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <cstdlib>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#define SHMSZ 2097152

using namespace std;

class Var //переменная
{
protected:
    string mName;
    int mType;
public:
    int getType();
    string getName();
};

class IntVar:protected Var //целочисленная переменная
{
    int mValue;
public:
    IntVar(string newName);
    int getValue();
    void setValue(int newValue);
};

class StringVar:protected Var  //строковая переменная
{
    string mValue;
public:
    StringVar(string newName);
    string getValue();
    void setValue(string newValue);
};

class DoubleVar:protected Var //переменная с плавующей точкой
{
    double mValue;
public:
    DoubleVar(string newName);
    double getValue();
    void setValue(double newValue);
};

class Library //библиотека
{    
public:
    vector <Var*> libr;//вектор переменных
    Library(){}
    Var* Create(string Name, string beginValue);
    Var* Create(string Name, double beginValue);
    Var* Create(string Name, int beginValue);
    Var* Find(string Name);
    int Delete(string Name);
    int Load();
    int Save();
    //friend
};
Library *MkSM();

//void DtSM(Library *l);
#endif
