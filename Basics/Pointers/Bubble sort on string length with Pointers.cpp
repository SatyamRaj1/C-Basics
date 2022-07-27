#include <iostream>
using namespace std;
void sorty(string *a){
    for(int i=0;i<6;i++){
        int flag=0;
        for(int j=0;j<5-i;j++){
            if((*(a+j)).length()>(*(a+j+1)).length()){
                string temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;
                flag++;
                
            }
        }
    if (flag==0)
        break;
        
    }
}
int main()
{
    string a[6]={"asda","asdss","asdwdw","adsfafwefweqda","as","asdasdd"};
    sorty(a);
    for(int i=0;i<6;i++)
    cout<<*(a+i)<<endl;
    
}


