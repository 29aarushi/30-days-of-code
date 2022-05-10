#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>1)
    {
        float res;
        res=100/n;
        cout<<"everyone sholud get "<<res<<"% of pizza";
    }
    else
    {
        cout<<"condition invalid";
    }
    return 0;
}
