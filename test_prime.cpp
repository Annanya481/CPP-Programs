#include<iostream>
using namespace std;
int main()
{
    int n, i,c=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(n==2)
        {
            cout<<"PRIME NUMBER";
            break;
        }
        else if(n%i==0)
        { c=c+1;
        }

    }
    if(c==2)
    {

        cout<<n<<"IS PRIME NUMBER";
    }
    else
        {
        cout<<"IS NOT A PRIME NUMBER";
    }
    return 0;
}
