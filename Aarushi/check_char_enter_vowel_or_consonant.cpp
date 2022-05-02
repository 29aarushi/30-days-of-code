#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"it is an lower case vowel"<<endl;
    }
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        cout<<"it is an upper case vowel"<<endl;
    }
    else 
    {
        cout<<"it is an consonant"<<endl;
    }
    return 0;
}
