//to accept values of a, b, c and print x when x=a^2+b^2+c^2
#include<iostream>
using namespace std;
int main()
{
    int a, b, c, x;
    cout<<"enter three numbers: ";
    cin>>a>>b>>c;
    x = a*a + b*b + c*c;
    cout<< x;
    return 0;
}
