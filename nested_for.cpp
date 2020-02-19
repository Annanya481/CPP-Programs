#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"MENU"<<"\N"<<"1. To print the pythagorean triplets from 1 to 100"<<"\n"<<"2. To print the sum of: S= (2!/1)+(3!/2)+(4!/3)....n"<<"\n"<<"3. To print the series: A"<<"\n"<<"AB"<<"\n"<<"ABC"<<"\n"<<"ABCD"<<"\n"<<"ABCDE"<<"\n"<<"ABCDEF"<<"\n"<<"ABCDEFG";
    cout<<"\n Enter your choice(1, 2, 3): ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        {
            int a, b, c;
            for(a=1; a<=100; a++)
            {
                for(b=1; b<=100; b++)
                {
                    for(c=1; c<=100; c++)
                    {
                        if((a*a)+(b*b)==(c*c))
                            cout<<"\n"<<a<<" ,"<<b<<" ,"<<c<<" FORM A PYTHAGOREAN TRIPLET";
                        else
                            cout<<"\n"<<"NOT A PYTHAGOREAN TRIPLET";
                    }
                }
            }
            break;
        }
    case 2:
        {
            int n, i, j, p, f, s;
            cout<<"Enter the value of n: ";
            cin>>n;
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=i+1; j++)
                {
                    p=p*f;
                    s=s+(p/i);
                }
            }
            cout<<"Sum is: "<<s;
            break;
        }
    case 3:
        {
            char i, j;
            for(i='A'; i<='G'; i++)
            {
                for(j='A'; j<=i; j++)
                {
                    cout<<j;
                }
                cout<<"\n";
            }
            break;
        }
    default:
        {
            cout<<"\n"<<"WRONG ENTRY";
            break;
        }
    }
    return 0;
}
