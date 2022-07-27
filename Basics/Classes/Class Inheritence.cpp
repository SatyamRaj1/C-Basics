#include <iostream>
using namespace std;

class Employee{
    public:
    int age,sal;
};
//private members are not inheruted
class staff: public Employee    //inheriting Employee class to staff class
{   //pubilc above will inherit all properties as it is (those public will remain public and protected as protected)
    //if protected/private above then all members will be protected/private (private will not be inherited)
    public:
    int a,b;
    void suma(int x,int y){
        cout<<x+y;
    }
};  
int main()
{
    Employee rahul;
    rahul.age=23;
    cout<<rahul.age<<endl;
   // rahul.a=54;    //will give error as parent class can't access children class properties
    staff d;
    d.a=34;
    d.age=123; //inheritade properties
    d.suma(7,54);
    return 0;
}
//protected  -- not accessible from outside but can be inherited 
//private -- neither accessible nor inherited