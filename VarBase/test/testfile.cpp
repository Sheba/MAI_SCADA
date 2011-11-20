//tests
library lib = new library();
lib.create("");
string varname=””;

int testaddvar()
{
   if(lib.find(varname)==-1)
   {
if(lib.create(varname))return 1;
return 0;
   }
   return 0;
}

int testread()
{
   int val=42;
   if(lib.read(varname)==val) return 0;
   else return 1;
}

int testwrite()
{
   int val=42;
   if(lib.write(varname)==0)return 0;
   else return 0;
}
