//тесты
#include "pthread.h"
#include "../src/lib.cpp"
Library testLib;
string mVarName="testn1";

int TestAddVar()
{
   if(testLib.Find(mVarName)==NULL)
   {
      if(testLib.Create(mVarName,8)==NULL) return 1;
   }
   return 0;
}

int TestFindVar()
{
    if(testLib.Find("1")==NULL) return 1;
    return 0;
}

int TestDeleteVar()
{
    if(testLib.Delete("1")==1) return 1;
    if(testLib.Find("1")) return 1;
    return 0;
}

void* funk(void* arg)
{
    Library* cl=ConnectToSharedMemory();
    while(1)
    {
        ((IntVar*)cl->libr[2])->setValue(((IntVar*)cl->libr[2])->getValue()+1);
        sleep(2);
    }
}

void* funk1(void *arg)
{
    while(1)
    {
        Library* cl=ConnectToSharedMemory();
        cout<<((IntVar*)cl->libr[2])->getValue()<<endl;
        sleep(2);
    }
}

int main()
{
    testLib.Create("testn","testv");
    testLib.Create("1",(int)1);
    cout<<"Add testn1 - 8:"<<endl;
    if(TestAddVar()) std::cout<<"add error\n";
    else std::cout<<"non add error\n";
    cout<<testLib.libr[0]->getName()<<" - "<<((StringVar*)testLib.libr[0])->getValue()<<endl;
    cout<<testLib.libr[1]->getName()<<" - "<<((IntVar*)testLib.libr[1])->getValue()<<endl;
    cout<<testLib.libr[2]->getName()<<" - "<<((IntVar*)testLib.libr[2])->getValue()<<endl;
    cout<<endl<<"Find 1:"<<endl;
    if(TestFindVar()) std::cout<<"find error\n";
    else std::cout<<"non find error\n";
    cout<<endl<<"Delete 1:"<<endl;
    if(TestDeleteVar()) std::cout<<"delete error\n";
    else std::cout<<"non delete error\n";
    cout<<testLib.libr[0]->getName()<<" - "<<((StringVar*)testLib.libr[0])->getValue()<<endl;
    cout<<testLib.libr[1]->getName()<<" - "<<((IntVar*)testLib.libr[1])->getValue()<<endl;
    testLib.Save();
    testLib.Load();
    cout<<"After save and load"<<endl;
    cout<<testLib.libr[0]->getName()<<" - "<<((StringVar*)testLib.libr[0])->getValue()<<endl;
    cout<<testLib.libr[1]->getName()<<" - "<<((IntVar*)testLib.libr[1])->getValue()<<endl;
    Library *cl;
    cl=CreateLibrary();
    cl->Create("BB1","string");
    cl->Create("BL1","string");
    cl->Create("Int_prim",(int)1);
    cout<<"After create library in shared memory and add 2 elements"<<endl;
    cout<<cl->libr[0]->getName()<<" - "<<((StringVar*)cl->libr[0])->getValue()<<endl;
    cout<<cl->libr[1]->getName()<<" - "<<((StringVar*)cl->libr[1])->getValue()<<endl;
    int args[2];
    args[0]=1;
    args[1]=2;
    pthread_t pthread_id,ptid2;
    pthread_create(&pthread_id,NULL,funk,(void*)args[0]);
    pthread_create(&ptid2,NULL,funk1,(void*)args[1]);
    while(1)
    {
        sleep(10);
        cl->Save();
    }
}
