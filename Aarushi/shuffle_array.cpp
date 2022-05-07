#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[2*n],j=0;
    for(int i=0;i<2*n;i++)
    {
        cin>>arr[i];
    }
    int a[n],b[n];
    for (i=0;i<n;i++)
    {
        a[i]=arr[i];
    }
    for (i=n;i<2*n;i++)
    {
        b[j]=arr[i];
        j++;
    }
    int c[2*n],k=0;
    j=0;
    for (i=0;i<2*n;i++)
    {
        if (i%2==0)
        {
           c[i]=a[j]; 
           j++;
        }
        else
        {
           c[i]=b[k];
           k++;
        }
        cout<<" "<<c[i];
    }
    return 0;
}
