#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:
    Time()
    {
        h=m=s;
    }
    void getdata()
    {
        cin>>h>>m>>s;
    }
    void show()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    friend Time & operator ++(Time &);
    Time & operator --();
};
Time & operator ++(Time &T)
{
    T.s++;
    if(T.s==60)
    {
        T.s=0;
        T.m++;
    }
    if(T.m==60)
    {
        T.m=0;
        T.h++;
    }
    return T;
}
int main()
{
    Time T;
    T.getdata();
    T.show();
    ++T;
    T.show();
}
