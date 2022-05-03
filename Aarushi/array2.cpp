#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,i,newarr[12];
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
    newarr[0]=arr[0];
    for(i=0;i<n+1;i++)
    {
        newarr[i+1]=newarr[i]+arr[i];
    }
    cout<<"\nnew array we get is = "<<endl;
    for(i=0;i<n+1;i++)
    {
        cout<<newarr[i]<<" ";
    }
    return 0;
}
