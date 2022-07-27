#include <iostream>

using namespace std;

int main()
{
    string a="satyam";
    string *ptr=&a;
    string **ptr1=&ptr;
    cout<<a<<endl<<ptr<<endl<<ptr1; 
    return 0;
}
