//write a program to accept a date in the date, month, year format and check if date entered is valid.
#include<iostream>
using namespace std;
int main()
{
    int date, month, year;
    cout<<"Enter the date: ";
    cin>>date;
    cout<<"\n"<<"Enter the month: ";
    cin>>month;
    cout<<"\n"<<"Enter the year: ";
    cin>>year;
    cout<<"\n"<<date<<"/"<<month<<"/"<<year;
    if(year%4==0)
    {
        if(month==1||month==3||month==5||month==7||month==9||month==11)
        {
            cout<<"\n"<<"The month has 31 days";
            if(date>31)
                cout<<"\n"<<"INVALID DATE";
            else
                cout<<"\n"<<"VALID DATE";

        }
        else if(month==4||month==6||month==8||month==10||month==12)
        {
            cout<<"\n"<<"The month has 30 days";
            if(date>30)
                cout<<"\n"<<"INVALID DATE";
            else
                cout<<"\n"<<"VALID DATE";
        }
        else
        {
             cout<<"The month is February";
             if(date>29)
                cout<<"\n"<<"INVALID DATE";
             else
                cout<<"VALID DATE";
        }

    }
    else
    {
        if(month==1||month==3||month==5||month==7||month==9||month==11)
        {
            cout<<"\n"<<"The month has 31 days";
            if(date>31)
                cout<<"\n"<<"INVALID DATE";
            else
                cout<<"/n"<<"VALID DATE";

        }
        else if(month==4||month==6||month==8||month==10||month==12)
        {
            cout<<"\n"<<"The month has 30 days";
            if(date>30)
                cout<<"\n"<<"INVALID DATE";
            else
                cout<<"\n"<<"VALID DATE";
        }
        else
        {
            if(date>28)
                cout<<"\n"<<"INVALID DATE";
            else
                cout<<"\n"<<"VALID DATE";
        }


    }
    return 0;

}
