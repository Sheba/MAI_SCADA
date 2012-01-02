//основной код библиотеки
#include"../include/basecode.h"

key_t SharedMemoryKey;

void MakeKey()
{
    srand(time(0));
    SharedMemoryKey=(key_t)rand();
}

DoubleVar::DoubleVar(string newName)
{
    mType=1;
    this->mName=newName;
}

IntVar::IntVar(string newName)
{
    mType=0;
    this->mName=newName;
}

StringVar::StringVar(string newName)
{
    mType=2;
    this->mName=newName;
}

int Var::getType()
{
    return mType;
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
    if(!Find(Name))
    { 
        DoubleVar *doublevar= new DoubleVar(Name);
        doublevar->setValue(beginValue);
        libr.push_back((Var*)doublevar);
        return libr[libr.size()-1];
    }
    else return 0;
}

Var* Library::Create(string Name, int beginValue)
{
    if(!Find(Name))
    {
        IntVar *integervar= new IntVar(Name);
        integervar->setValue(beginValue);
        libr.push_back((Var*)integervar);
        return libr[libr.size()-1];
    }
    else return 0;
}

Var* Library::Create(string Name, string beginValue)
{
    if(!Find(Name))
    {   
        StringVar *stringvar=new StringVar(Name);
        stringvar->setValue(beginValue);
        libr.push_back((Var*)stringvar);
        return libr[libr.size()-1];
    }
    else return 0;
}

int Library::Delete(string Name)
{
    unsigned int i,k;
    int tem=1;
    for(i=0;i<libr.size();i++)
    { 
        if(libr[i]->getName()==Name)
        {
            tem=0;
            break;
        }
        else tem=1;
    }
    if(tem) return 1;
    vector <Var*>::iterator j;
    j=libr.begin();
    for(k=0;k<i;k++) j++;
    libr.erase(j);
    return 0;
}

Var* Library::Find(string Name)
{
    unsigned int i;
    int tem=1;
    for(i=0;i<libr.size();i++)
    { 
        if(libr[i]->getName()==Name)
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
    ifstream in("varbase.xml");
    char buf[64],sname[64],svalue[64],stype[64];
    char name[64],value[64],type[64];
    int lensn,lensv,lenst;
    libr.clear();
    cout<<endl;
    while(1)
    {
        in>>buf;
        memset(name,0,sizeof(name));
        memset(value,0,sizeof(value));
        memset(type,0,sizeof(type));
        if(in.eof()) break;
        if(!strcmp(buf,"<variable"))
        {
            in>>sname;
            lensn=strlen(sname);
            in>>svalue;
            lensv=strlen(svalue);
            in>>stype;
            lenst=strlen(stype);
            for(int i=6;i<lensn-1;i++) name[i-6]=sname[i];
            for(int i=7;i<lensv-1;i++) value[i-7]=svalue[i];
            for(int i=6;i<lenst-22;i++) type[i-6]=stype[i];
            if(!strcmp(type,"int")) Create(name,atoi(value));
            if(!strcmp(type,"double")) Create(name,atof(value));
            if(!strcmp(type,"string")) Create(name,value);
        }
    }
    return 1;
}

int Library::Save()
{
    ofstream out("varbase.xml");
    out<<"<?xml version=\"1.0\" encoding=\"UTF-8\"?>"<<endl;
    out<<"<library namelib=\"BlackLibrary\">"<<endl;
    for(unsigned int i=0;i<libr.size();i++)
    {
        out<<"<variable name=\""<<libr[i]->getName()<<"\" value=\"";
        int h=libr[i]->getType();
        if(h==0) out<<((IntVar*)libr[i])->getValue()<<"\" type=\"int\">Переменная "<<i+1<<"</variable>"<<endl;
        if(h==1) out<<((DoubleVar*)libr[i])->getValue()<<"\" type=\"double\">Переменная "<<i+1<<"</variable>"<<endl;
        if(h==2) out<<((StringVar*)libr[i])->getValue()<<"\" type=\"string\">Переменная "<<i+1<<"</variable>"<<endl;
    }
    out<<"</library>"<<endl;
    out.close();
    return 1;
}

Library* ConnectToSharedMemory()
{
    int shmid;
    if((shmid=shmget(SharedMemoryKey,SHMSZ, IPC_CREAT | 0666))<0)
    {
        return NULL;
    }
    Library *shml;
    shml=(Library *)shmat(shmid,NULL,0);
    return shml;
}

Library* CreateLibrary()
{
    MakeKey();
    Library* SMM=ConnectToSharedMemory();
    Library* SML=new(SMM) Library;
    return SML;
}
