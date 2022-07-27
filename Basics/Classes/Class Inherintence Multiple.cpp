#include <iostream>
using namespace std;

class Employee{
    public:
    int age,sal;
    void suma(int x,int y)
    { cout<<x<<y;}
};
class student{
    public:
    int entryid;
};
class staff: public Employee, public student{
    public:
    int a,b;
};
int main()
{
    staff rahul;
    rahul.suma(7,9);
    rahul.entryid=343;
    rahul.a=3;
    

    return 0;
}
