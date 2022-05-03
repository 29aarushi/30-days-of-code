#include <iostream>
using namespace std;
int main()
{
  int num,a,sum=0;
  cout<<"enter a number = ";
  cin>>num;
  for(int i=1;i<num;i++)
  {
      a=num%i;
      if(a==0)
      {
          sum=sum+i;
      }
  }
      if(sum==num)
      {
          cout<<"it is a perfect number";
      }
      else
      {
          cout<<"it is not a perfect number";
      }
  
    return 0;
}
