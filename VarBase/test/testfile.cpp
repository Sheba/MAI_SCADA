//tests
Library testLib = new Library();
testLib.Create("");
string mVarName=””;

int TestAddVar()
{
   if(testLib.Find(mVarName)==-1)
   {
      if(testLib.Create(mVarName))return 1;
      return 0;
   }
   return 0;
}

int TestReadVar()
{
   int mVal=42;
   if(testLib.Read(mVarName)==mVal) return 0;
   else return 1;
}

int TestWriteVar()
{
   int mVal=42;
   if(testLib.Write(mVarName)==0)return 0;
   else return 0;
}
