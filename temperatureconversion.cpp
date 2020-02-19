#include<iostream>
using namespace std;
int main()
{
    int choice;
    double temp, F, C;
    cout<<"Temperature Conversion"<<"\n"<<"1. Fahrenheit to Celsius"<<"\n"<<"2. Celsius to Fahrenheit"<<"\n"<<"3. Exit"<<"\n";
    cout<<"Enter choice: ";
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>temp;
        C=((temp-32)*5)/9;
        cout<<"Temperature in Celsius is: "<<C;
    }
    if(choice==2)
    {
        cout <<"Enter temperature in Celsius: ";
        cin>> temp;
        F=((temp*9)/5)+32;
        cout<<"Temperature in Fahrenheit is: "<<F;
    }
    if(choice==3)
    {
        cout<<"Goodbye";
    }
}
