//tests
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
    Library *shmL;
    shmL=MakeSharedLibrary();
    shmL=new Library;
    shmL->Create("BB1","string");
    shmL->Create("BLA","string");
    shmL->Save();
    shmdt(shmL);
    return 0;
}
