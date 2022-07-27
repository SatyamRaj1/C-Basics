#include <iostream>
using namespace std;
int sumoa(int *a,int l){
    int sum=0;
    for(int i=0;i<l;i++)
        sum+=*(a+i);
    return sum;    
}

int main()
{
    int a[6]={2,4,4,34,3,45};
    int l=sizeof(a)/sizeof(a[0]);
    cout<<sumoa(a,l)<<endl<<l;
    

    return 0;
}
