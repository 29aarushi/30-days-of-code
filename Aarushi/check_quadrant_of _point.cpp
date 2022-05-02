#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the value of a point";
    cin>>x>>y;
    if(x>0&&y>0)
    {
        cout<<"first quadrant";
    }
    else if(x<0&&y>0)
    {
        cout<<"second quadrant";
    }
    else if(x<0&&y<0)
    {
        cout<<"third quadrant";
    }
    else
    {
        cout<<"fourth quadrant";
    }
    return 0;
}
