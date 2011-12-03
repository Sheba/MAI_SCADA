#include"../include/basecode.h"

Var::Var(string newName)
{
    this->mName=newName;
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


