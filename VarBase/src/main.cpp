#include "../test/testfile.cpp"
#include "lib.cpp"
#include<iostream>

int main()
{
    if(!TestAddVar())std::cout<<"add error/n";
    if(!TestFindVar())std::cout<<"find error/n";
    if(!TestDeleteVar())std::cout<<"delete error/n";
    return 0;
}
