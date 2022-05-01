#include <iostream>
using namespace std;
int nextEdge(int a,int b)
{
    int c;
    c=(a+b)-1;
    return c;
}
int main()
{
    int x,y,result;
    cin>>x>>y;
    result=nextEdge(x,y);
    cout<<result;

    return 0;
}
