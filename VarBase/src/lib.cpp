#include"../include/basecode.h"

Var::Var(string newName)
{
    this->mName=newName;
}

Var::getType()
{
    return this;
}

string Var::getName()
{
    return mName;
}

string StringVar::getValue()
{
    return mValue;
}

void StringVar::setValue(string newValue)
{
    this->mValue=newValue;
}    

int IntVar::getValue()
{
    return mValue;
}

void IntVar::setValue(int newValue)
{
    this->mValue=newValue;
}    

double DoubleVar::getValue()
{
    return mValue;
}

void DoubleVar::setValue(double newValue)
{
    this->mValue=newValue;
}    

Var* Library::Create(string Name, double beginValue)
{
    DoubleVar *doublevar= new Var(Name);
    doublevar->setValue(beginValue);
    //добавление в вектор
}

Var* Library::Create(string Name, int beginValue)
{
    IntVar *integervar= new Var(Name);
    integervar->setValue(beginValue);
    //добавление в вектор
}

Var* Library::Create(string Name, string beginValue)
{
    StringVar *stringvar=new Var(Name);
    stringvar->setValue(beginValue);
    //добавление в вектор
}

int Library::Delete(string Name)
{
    //поиск в векторе
    //удаление из вектора
    //возврат 0, иначе
    return 1;
}

Var* Library::Find(string Name)
{
    //поиск в векторе
    return null;
}

int Library::Load()
{
    return 1;
}

int Library::Save()
{
    return 1;
}
