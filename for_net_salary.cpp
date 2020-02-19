#include<iostream>
using namespace std;
int main()
{
    int bsal, netsal, i, da, hra, pf, n, name[200], code[200];
        cout<<"Enter the number of employees: ";
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cout<<"\n"<<"Enter the employee name: ";
            cin>>name;
            cout<<"\n"<<"Enter the employee code: ";
            cin>>code;
            cout<<"\n"<<"Enter the basic salary: ";
            cin>>bsal;
            if(bsal<=13500)
            {
                da=(50*bsal)/100;
                hra=(15*bsal)/100;
                netsal=bsal+hra+da;
                cout<<"\n The net salary is: "<<netsal;
            }
            else if(bsal>13500&&bsal<=15000)
            {
                da=(60*bsal)/100;
                hra=(20*bsal)/100;
                pf=(10*bsal)/100;
                netsal=(bsal+hra+da)-pf;
                cout<<"\n The net salary of "<<name<<" is "<<netsal;
            }
            else if(bsal>15000&&bsal<=17000)
            {
                da=(70*bsal)/100;
                hra=(25*bsal)/100;
                pf=(10*bsal)/100;
                netsal=(da+hra+bsal)-pf;
                cout<<"\n The net salary of "<<name<<" is "<<netsal;
            }
            else
            {
                da=(80*bsal)/100;
                hra=(30*bsal)/100;
                netsal=da+hra+bsal;
                cout<<"\n The net salary of "<<name<<" is "<<netsal;
            }
        }
        return 0;
}
