//code
class var
{
   string name;
   string value;
   string type;
public:
   var(string nname){name=nname;}
   string gettype(){return type;}
   string getname(){return name;}
   string getvalue(){return value;}
   void settype(string ntype){type=ntype;}
   void setvalue(string nvalue){value=nvalue;}
};

class library
{
    //сюда сунь свой вектор
public:
    library(){}
    int create(string name){}
    int find(string name){}
    int del(string name){}
    int load(){}
    int save(){}
    int write(string name){}
    int read(string name){}
};
