#include <iostream>
using namespace std;
int main()
{
    double i, n, s=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        s = s + i/(i+1);
    }
    cout<<"\n"<<s;
    return 0;
}
