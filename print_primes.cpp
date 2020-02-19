#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int  num, ct, i;
cout<<"enter a number: ";
cin>>num;
for (ct=2; ct<=num; ct++)
  {
     cout<<"the number to be checked is: "<<ct<<"\n";
     for (i=1; i<=num; i++)
     {
         cout<<"the divisor is: "<<i<<"\n";
         if(ct%i!=0)
         {
             cout<<ct<<" is a prime"<<"\n";
             break;

         }


     }

  }
return 0;
}


