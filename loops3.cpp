#include<iostream>
using namespace std;
int main()
{
  int a, b, Q, R;
  while(true)
  {
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if (a == 0 || b == 0) {
            break;
    } else if (a > b) {
      Q=a/b;
      R=a%b;
    } else {
      Q=b/a;
      R=b%a;
    }
    cout<<"Quotient= "<<Q<<"\n"<<"Remainder= "<<R<<"\n";
   }

  return 0;
}
