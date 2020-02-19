//accept two strings and print the larger string
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char str1[100], str2[100];
    int a, b;
    cout<<"Enter two strings: ";
    gets(str1);
    cin.ignore();
    cout<<"string 2";
    gets(str2);
    a=strlen(str1);
    b=strlen(str2);
    if(a>b)
        cout<<"\n"<<str1;
    else if(b>a)
        cout<<"\n"<<str2;
    else if(a==b)
        cout<<"\n"<<"str1=str2";
    return 0;

}
