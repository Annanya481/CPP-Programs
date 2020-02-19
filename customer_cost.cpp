//write a c++ program to input the following details of a customer- name, address, amount purchased and type of laptop. compute and print net amount to be paid y the customer.
#include<iostream>
using namespace std;
int main()
{
    char name[100], address[100],choice ;
    int net,amt;
    cout<<"Enter the customer's name: ";
    cin>>name;
    cout<<"\n"<<"Enter the customer's address: ";
    cin>>address;
    cout<<"\n"<<"Enter the amount purchased: ";
    cin>>amt;
    cout<<"\n"<<"Enter L for laptop or D for desktop: ";
    cin>>choice;

    if(amt>=0&&amt<=25000)
    {
        if(choice=='L')
        {
           net=amt+(amt*0);
           cout<<net;
        }
        else
        {
            net=amt+(amt*5/100);
            cout<<net;
        }

    }
    else if(amt>=25001&&amt<=57000)
    {
        if(choice=='L')
        {
            net=amt+(amt*5/100);
            cout<<net;
        }
        else
        {
            net=amt+(amt*7.5/100);
            cout<<net;
        }
    }
    else if(amt>=57001&&amt<=100000)
    {
        if(choice=='L')
        {
            net=amt+(amt*7.5/100);
            cout<<net;
        }
        else
        {
            net=amt+(amt*10/100);
            cout<<net;
        }
    }
    else
    {
        if(choice=='L')
        {
            net=amt+(amt*10/100);
            cout<<net;
        }
        else
        {
            net=amt+(amt*15/100);
            cout<<net;
        }
    }
    return 0;
}
