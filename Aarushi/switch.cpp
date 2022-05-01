//write a menu driven program to perform a simple calculation includeing addition, subtraction,multiplication and divide.
#include <iostream>
using namespace std;
int main()
{
    float num1,num2;
    float result;
    int n;
    cout<<"enter the first number - "<<endl;
    cin>>num1;
    cout<<"enter the second number - "<<endl;
    cin>>num2;
    
    cout<<"enter 1 for addition"<<endl;
    cout<<"enter 2 for subtraction"<<endl;
    cout<<"enter 3 for multiplication"<<endl;
    cout<<"enter 4 for division"<<endl;
    cout<<"enter 5 to end the program"<<endl;

    cout<<"enter the value which operation you want to perform - ";
    cin>>n;
    switch(n)
    {
        case 1:
        result=num1+num2;
        break;
        case 2:
        result=num1-num2;
        break;
        case 3:
        result=num1*num2;
        break;
        case 4:
        result=num1/num2;
        break;
        case 5:
        cout<<" the program had been ended"<<endl;
        result=0;
        break;
        default:
        break;
    }
    cout<<"result of operation performed by you is - "<<result;
    return 0;
    return 0;
}
