#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"enter a number = ";
    cin>>a;
    for(b=0;b<=10;b++)
    {
        c=a*b;
        cout<<a<<"X"<<b<<"="<<c<<endl;
    }
    return 0;
}
