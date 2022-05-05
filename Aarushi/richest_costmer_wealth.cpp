#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    int a,b,i,j,sum=0,res;
    cout<<"enter the number of coustomer you want to enter ";
    cin>>a;
    cout<<"enter the number of banks ";
    cin>>b;
    int account[a][b],rich[a];
    for(i=0;i<a;i++)
    {
        sum=0;
        for(j=0;j<b;j++)
        {
            cin>>account[i][j];
            sum=sum+account[i][j];
        }
        rich[i]=sum;
    }
    int max=rich[0];
    for (i=0;i<a;i++)
    {
        if (max<rich[i])
        max=rich[i];
    }
    cout<<"Richest person : ";
    cout<<max<<endl;
    return 0;
}

