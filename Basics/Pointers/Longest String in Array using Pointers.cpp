#include <iostream>
using namespace std;
string sumo(string *a){
    int l=0;
    string c;
    for (int i=0;i<6;i++){
        if ((*a).length()>l){
            l=(*a).length();
            c=*a;
        }
        a=a+1;
    
}
return c;

}

int main() {
	string a[6]={"satyam","sdas","asdhsd","as","asduhi","satyasn"};
	cout<<sumo(a);
	
	return 0;
}