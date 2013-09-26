#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
cout<<"\nThis is a program to print the fibonacci sequence";
cout<<"\n The printing stops when the user inputs any key";

long int firstNo = 1;
long int secNo =1;
long int sum=0;

cout<<endl<<firstNo;
sleep(1000);
cout<<endl<<secNo;
sleep(1000);
while(!getch())
  {
  sum=firstNo+secNo;
  cout<<endl<<sum;
  firstNo=secNo;
  secNo=sum;
  sleep(1000);
  
  }

cout<<"\n Thank you for your time..Have a good day";

return 0;
}
