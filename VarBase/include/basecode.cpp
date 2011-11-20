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
