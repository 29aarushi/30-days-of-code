#include<iostream>
using namespace std;
int main()
{
    int arr[10],newarr[20],n,i;
    cout<<"enter the number of elements you want to enter "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"number you entered are = "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<2*n;i++)
    {
        newarr[i]=arr[i];
    }
    for(i=0;i<2*n;i++)
    {
        newarr[i+n]=arr[i];
    }
    cout<<"\nnew arr = "<<endl;
    for(i=0;i<2*n;i++)
    {
        cout<<newarr[i]<<" ";
    }
    return 0;
}
