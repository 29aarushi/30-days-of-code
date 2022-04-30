#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    int len;
    len= a.size();
    cout<<len<<" ";
    len=b.size();
    cout<<len<<" "<<endl;
string c;
    c=a+b;
    cout<<c<<endl;
    char temp;
    temp=b[0];
    b[0]=a[0];
    a[0]=temp;
    cout<<a<<" "<<b;  
    return 0;
}
