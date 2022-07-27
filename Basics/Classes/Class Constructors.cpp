//classes and objects
#include <iostream>
using namespace std;
class Employee   //class
{   public:    //by default everything is private
    string name,surname;
    int j;
    Employee (string s,string x)   //Constructors // name of class and contructor are always same
    {
        name=s;
        surname=x;
        //Constructors will never return any value
        
    }
    Employee()  //for constructors with no initialised value
    {
        
    }
    int sumo(int x,int y){
        return x+y;
    }
};


int main()
{
    string name="gf"; 
    Employee de;   //Employee
    de.name="fdsfg";   //using attributes of classes
    de.surname="gfu";
    cout<<de.name<<endl<<de.j<<endl; 
    Employee se("sds","adad");
    cout<<se.name<<endl<<se.surname<<endl;
    se.name="saass";
    cout<<se.sumo(10,45)<<endl<<de.sumo(4,8);
    return 0;
}
