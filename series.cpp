#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n, t;
    double s=0.0, f=10;
    cout<<"enter limit: "<<endl;
    cin>>n;
    for(int j=1; j>0; j++)
    {
        for(int i=j; i>0; i--)
        {
            f=f*i;
        }
        s=s+(i/f);
    }
    cout<<"sum= "<<s<<endl;
    return 0;
}
