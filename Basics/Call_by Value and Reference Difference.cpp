#include <iostream>

using namespace std;
int sump(int *j,int *k);
int sumv(int x,int y);
int main()
{
    int a=10,b=20;
    int* ptr=&a;
    int* ptr1=&b;
    int t;
    t=sump(ptr,ptr1);
    cout<<"call by reference"<<endl<<"Sum = "<<t<<endl;
    cout<<"value of a after function = "<<a<<endl;
    int a2=10,b2=20;
    cout<<endl<<"Call by value"<<endl;
    int y=sumv(a2,b2);
    cout<<"Sum = "<<y<<endl;
    cout<<"Value of a2 after function = "<<a2<<endl;
    
    
    

    return 0;
}
int sump(int* x,int* y){
    int sum;
    sum=*x+*y;
    *x=100;
    cout<<"Value of a in function = "<<*x<<endl;
    return sum;
}
int sumv(int x,int y){
    int sum;
    sum=x+y;
    x=100;
    cout<<"Value of a2 in function = "<<x<<endl;
    return sum;
}

