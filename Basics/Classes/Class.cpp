#include <iostream>
using namespace std;
class Employee{
    public:
    int age,sal;
    Employee(int x,int y){
        age=x;
        sal=y;
    }
    void sala(){
        cout<<age*sal;
    }
};
int main()
{
    Employee rah(10,50);
    rah.sala();
    

    return 0;
}
