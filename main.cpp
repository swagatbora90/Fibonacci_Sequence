#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
cout<<"\nThis is a program to print the fibonacci sequence";
cout<<"\nThe printing stops when the user inputs any key";
cout<<endl<<endl<<"press any key to exit";

long int firstNo = 1;
long int secNo =1;
long int sum=0;

cout<<endl<<firstNo;
Sleep(1000);
cout<<endl<<secNo;
Sleep(1000);
//cout<<endl<<"press X to exit";

while(!kbhit())
  {
  sum=firstNo+secNo;
  cout<<endl<<sum;
  firstNo=secNo;
  secNo=sum;
  Sleep(1000);
 
  
  }

cout<<"\n Thank you for your time..Have a good day";
getch();
return 0;
}

