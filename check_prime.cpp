#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int num, ct, isprime='y';
  cout<<"enter a number: "<<"\n";
  cin>>num;
  for(ct=2 ; ct<=sqrt(num) ; ct++)
    {
        cout<<"Divisor: "<<ct<<"\n";
        if(num%ct==0)
        {
           isprime='n';
           cout<<"isprime value: "<<isprime<<"\n";
           break;
        }
    }
    if(isprime=='y')
        cout<<num<<" is a prime"<<"\n";
    else
        cout<<num<<" is not a prime"<<"\n";
    return 0;
  }
