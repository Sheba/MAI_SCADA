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
    libr.push_back(doublevar);
    return libr[libr.size()-1];
}

Var* Library::Create(string Name, int beginValue)
{
    IntVar *integervar= new Var(Name);
    integervar->setValue(beginValue);
    libr.push_back(integervar);
    return libr[libr.size()-1];
}

Var* Library::Create(string Name, string beginValue)
{
    StringVar *stringvar=new Var(Name);
    stringvar->setValue(beginValue);
    libr.push_back(stringvar);
    return libr[libr.size()-1];
}

int Library::Delete(string Name)
{
    int i,tem=0;
    for(i=0;i<libr.size();i++)
    { 
        if(libr[i]->mName==Name) 
        {
            tem=0;
            break;
        }
        else tem=1;
    }
    if(tem) return 1;
    vector <Var*>::iterator j;
    j=libr.begin();
    for(i=0;i<libr.size();i++) j++;
    libr.erase(j);
    return 0;
}

Var* Library::Find(string Name)
{
    int i,tem=0;
    for(i=0;i<libr.size();i++)
    { 
        if(libr[i]->mName==Name) 
        {
            tem=0;
            break;
        }
        else tem=1;
    }
    if(tem) return 0;
    return libr[i];
}

int Library::Load()
{
    return 1;
}

int Library::Save()
{
    return 1;
}
