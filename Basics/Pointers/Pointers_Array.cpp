/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int a[10]={1,2,3,4,5,6,7,8,9,10};
   cout<<a;   // a is pointer in array , give memory address of a[0]
   cout<<*a<<"  "<<*(a+1)<<"  "<<*(a+2)<<endl;   //*(a+1)==a[1]
   double b[4][3]={{1,2,3},{25,4,11},{34,23,29},{21,42,23}};
   cout<<b<<endl; //b store starting point of array (first row)
   cout<<*b<<endl;  //*b store address of first element(first element of first row)
   cout<<**b<<endl;  //**b gives first element(value at *b)
   //b gives full array *b gives first row 
   cout<<*(*b+1)<<endl;
   cout<<**(b+1)<<endl;
   cout<<*(*(b+1)+2)<<endl;
   

    return 0;
}
