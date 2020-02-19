#include<iostream>
using namespace std;
int main()
{
    int choice, num, a, b, c, d, e, f;
    char ch;
    cout<<"MENU"<<"\n"<<"1. To check whether number is an armstrong number"<<"\n"<<"2. To check whether number is a palindrome"<<"\n"<<"Enter your choice(1, 2): ";
    do
    {
        cin>>choice;
         switch(choice)
         {
             case 1:
                 {
                     cout<<"Enter a number: ";
                     cin>>num;
                     a=num%100;
                     b=num-a;
                     c=b/100;//1
                     d=a%10;//3
                     e=a-d;
                     f=e/10;//5
                     if((c*c*c)+(d*d*d)+(f*f*f)==num)
                        {
                            cout<<"\n"<<"IT IS AN ARMSTRONG NUMBER";
                     }
                     else
                        {
                            cout<<"\n"<<"IT IS NOT AN ARMSTRONG NUMBER";
                     }
                     break;
                     }
                     case 2:
                         {
                             cout<<"\n"<<"Enter a number: ";
                             cin>>num;
                            a=num%100;
                            b=num-a;
                            c=b/100;//1
                            d=a%10;//3
                            e=a-d;
                            f=e/10;//5
                            if((c*100)+(f*10)+d==(d*100)+(f*10)+c)
                                {
                                    cout<<"\n"<<"IT IS A PALINDROME";
                            }
                            else
                                {
                                    cout<<"\n"<<"IT IS NOT A PALINDROME";
                            }
                            break;
                            }
                     default:
                        {
                            cout<<"Wrong choice!";
                        }
                            }
                            cout<<"\n"<<"Wish to enter again(y/n)?";
                            cin>>ch;
                            if(ch=='y'||ch=='Y')
                                {
                                    cout<<"Enter choice again(1, 2): ";
                            }
                            } while(ch=='y'||ch=='Y');
                            return 0;
                            }
