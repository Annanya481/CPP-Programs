#include<iostream>
using namespace std;

int main()
{
int a, b, result;
char choice;
cout<<"Enter 2 numbers: ";
cin>>a>>b;

cout<<"Choose an operator from the following:"<<"\n"<<"1. +"<<"\n"<<"2. -"<<"\n"<<"3. *"<<"\n"<<"4. /"<<"\n";
cin>>choice;

if (choice=='+')
  result=a+b;
else
{
    if (choice=='-')
        result=a-b;
    else
        if (choice=='*')
            result=a*b;
        else
            if ( choice=='/')
                result=a/b;
            else
                cout <<"Invalid operator";
}
cout<<"The result is "<<result;

return 0;
}
