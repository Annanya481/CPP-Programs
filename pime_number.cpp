#include<iostream>
using namespace std;
int main()
{
   int num, ct;
   cout<<"enter a number: ";
   cin>>num;
   for (ct=2; ct<=num/2; ct++)
     if (num%ct==0)
     {
       cout<<"not a prime";
       break;
     }
     else
     {
       cout<<"prime";
       break;
     }

   return 0;
}
