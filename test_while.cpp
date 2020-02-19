#include<iostream>
using namespace std;
int main()
{
    int num, i, fact=1;
    cout<<"Enter a number: ";
    cin>>num;
    i=num;
    while(num)
    {
        fact=fact*num;
        --num;
    }
    cout<<"The factorial of "<<i<<" is "<<fact;
    return 0;

}
