#include <iostream>
using namespace std;
int main()
{
    int x, y, z, max;
    cout<<"enter three numbers:";
    cin>>x>>y>>z;
    max=x;
    if(y>max)
        max=y;
    if(z>max)
        max=z;
    cout<<"\n"<<"the greatest number is "<<max;
}
