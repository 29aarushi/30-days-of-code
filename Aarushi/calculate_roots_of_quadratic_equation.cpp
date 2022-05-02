#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    float d,root1,root2;
    cout<<"enter the value of a,b,c"<<endl;
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        cout<<"real roots"<<endl;
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        cout<<"first root = "<<root1<<endl;
        cout<<"second root = "<<root2<<endl;
    }
    else if(d==0)
    {
        cout<<"roots are equal"<<endl;
        root1=(-b)/(2*a);
        root2=root1;
        cout<<"first root = "<<root1<<endl;
        cout<<"second root = "<<root2<<endl;
    }
    else
    {
        cout<<"roots are in complex form"<<endl;
        cout<<"first root = "<<-b/(2*a)<<"+i"<<sqrt(-d)/(2*a)<<endl;
        cout<<"second root = "<<-b/(2*a)<<"-i"<<sqrt(-d)/(2*a)<<endl;
    }
    return 0;
}
