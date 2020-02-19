#include<iostream>
using namespace std;
int main()
{
    char a;
    int num;
    cout<<"enter a character: ";
    cin>>a;
    num=a;
    if(num>=48&&num<=57)
    {
       cout<<a<<" is a number from 0-9";
    }
    else if(num>=65&&num<=90)
    {
        cout<<a<<" is an uppercase alphabet";
    }
    else if(num>=97&&num<=122)
    {
        cout<<a<<" is a lower case alphabet";
    }
    else
    {
        cout<<a<<" is a special character";
    }
    return 0;
}






