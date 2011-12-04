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
    //testLib.Create("2",(int)2);
    if(testLib.Delete("1")==1) return 1;
    if(testLib.Find("1")) return 1;
    return 0;
}

int main()
{
    unsigned int i;
    testLib.Create("testn","testv");
    testLib.Create("1",(int)1);
    if(TestAddVar()) std::cout<<"add error\n";
    else std::cout<<"non add error\n";
    for(i=0;i<testLib.libr.size();i++) cout<<testLib.libr[i]->getName()<<" - "<<testLib.libr[i]->getValue()<<endl;
    cout<<endl<<"Find 1:"<<endl;
    if(TestFindVar()) std::cout<<"find error\n";
    else std::cout<<"non find error\n";
    cout<<endl<<"Delete 1:"<<endl;
    if(TestDeleteVar()) std::cout<<"delete error\n";
    else std::cout<<"non delete error\n";
    for(i=0;i<testLib.libr.size();i++) cout<<testLib.libr[i]->getName()<<" - "<<testLib.libr[i]->getValue()<<endl;
    return 0;
}
