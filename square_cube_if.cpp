#include<iostream>
using namespace std;
int main()
{
    int a, b, sum;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    sum = a + b;
    if(sum>0)
        cout<<a*a;
    else
        cout<<b*b*b;
    return 0;
}
