#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char f1[15],s1[15],f2[15],s2[15];
    cin>>f1;
    cin>>s1;
    cin>>f2;
    cin>>s2;
    if(strcmp(s1,s2)==0)
    {
        cout<<"ARE BROTHERS";
    }
    else
    {
        cout<<"NOT";
    }
    return 0;
}
