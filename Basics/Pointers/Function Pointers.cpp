#include <iostream>

using namespace std;
namespace II{
    template <typename T>
    int compareI(T x, T y){
    return (x==y) ? 0 : ((x>y) ? -1 : 1);
}
}

int compareS(string x, string y){
    int n=x.length();
    if(y.length()<x.length())
        n= y.length();
    for(int i=0;i<n;i++){
        if(x[i]<y[i])
            return 1;
        else if(x[i]>y[i])
            return -1;
    }
    if(x.length()==y.length())
        return 0;
    else if(x.length()>y.length())
        return -1;
    return 1;
}

template <typename T> 
bool BinarySearch( T arr[],T x, int i,int n, int (*compare)(T, T)){
    if(i>n){
        return false;
    }
    else{
        int mid = (i+n)/2;
        if(compare(arr[mid],x) == 0)
            return true;
        else if(compare(arr[mid],x) == 1)
            return BinarySearch(arr,x,mid+1,n,compare);
        return BinarySearch(arr,x,i,mid-1,compare);
    }
        
}
int main()
{
    int i=0,n=10;
    int arr[] = {1,4,7,19,33,37,41,45,58,60};
    cout<<((BinarySearch(arr,5,i,n,&(II::compareI))) ? "Found" : "Not Found" )<<endl;
    cout<<((BinarySearch(arr,19,i,n,&(II::compareI))) ? "Found" : "Not Found" )<<endl;
    string srr[] = {"a","ab","abc","abcdee","fgd","lioju","sdfg","sssf","tad","zdffg"};
    string p = "abc";
    string q = "sdfds";
    cout<<((BinarySearch(srr,p,i,n,&compareS)) ? "Found" : "Not Found" )<<endl;
    cout<<((BinarySearch(srr,q,i,n,&compareS)) ? "Found" : "Not Found" )<<endl;

    return 0;
}