//write a program in c++ to accept two numbers and print the number which has minimal ones's place.
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a%10>b%10)
    {
        cout<<"The number with minimal one's place is: "<<b;
    }
    else
    {
        cout<<"The number with minimal one's place is: "<<a;
    }
    return 0;

}
