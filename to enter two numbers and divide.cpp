#include<iostream>
using namespace std;
int main()
{
int a, b, Q, R;
cout<<"Enter two numbers";
cin>>a>>b;
if (a>b)
  {
  Q=a/b;
  R=a%b;
  }
  else
  {
  Q=b/a;
  R=b%a;
  }
cout<<"The quotient is"<<Q<<"and the remainder is"<<R;
return 0;
}
