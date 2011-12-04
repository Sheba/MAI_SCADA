//tests
#include "../test/testfile.cpp"
#include "lib.cpp"
#include<iostream>
Library testLib = new Library();
testLib.Create("testn","testv");
testLib.Create("1",(int)1);
string mVarName="testn1";

int TestAddVar()
{
   if(testLib.Find(mVarName)==NULL)
   {
      if(testLib.Create(mVarName,8)==NULL)return 1;
      return 0;
   }
   return 0;
}

int TestFindVar()
{
    if(testLib.Find("1")==NULL)return 1;
    return 0;
}

int TestDeleteVar()
{
    testLib.Create("2",(int)2);
    if(testLib.Delete("2")==1)return 1;
    if(testLib.Find("2"))return 1;
    return 0;
}

int main()
{
    if(!TestAddVar())std::cout<<"add error/n";
    if(!TestFindVar())std::cout<<"find error/n";
    if(!TestDeleteVar())std::cout<<"delete error/n";
    return 0;
}
