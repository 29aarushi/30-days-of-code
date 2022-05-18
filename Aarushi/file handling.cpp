#include <iostream>
#include<fstream>
using namespace std;
int main() 
{
  ofstream outfile;
  outfile.open("Kirtpreet_Kaur.txt");
  outfile<<"What is your name"<<endl;
  outfile<<"What is your UID"<<endl;
  outfile.close();
  outfile.open("Kirtpreet.txt");
  outfile<<"Kirtpreet"<<endl;
  outfile<<"21BCS6405"<<endl;
  outfile.close();
  char ques[80],ans[80];
  ifstream inpfile;
  inpfile.open("Kirtpreet_Kaur.txt");
  while(inpfile.eof()==0)
    {
      inpfile.getline(ques,80);
      cout<<ques<<endl;
    }
  inpfile.close();
  inpfile.open("Kirtpreet.txt");
  while(inpfile.eof()==0)
    {
      inpfile.getline(ans,80);
      cout<<ans<<endl;
    }
}
