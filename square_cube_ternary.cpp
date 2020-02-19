#include<iostream>
using namespace std;
int main()
{
    int a, b, sum;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    sum = a + b;
    (sum>0)?cout<<a*a:cout<<b*b*b;
    return 0;
}
