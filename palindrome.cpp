#include<iostream>
using namespace std;
int main()
{
    int n, a, r = 0;
    cin>>n;
    a=n;
    do
    {
        d = n % 10;
        r = r*10 + d;
        n = n/10;
    } while (n!=0)
    if(a==r)
    {
        .......
        .......
    }
    else
    {
        ........
        ........
    }
    return 0;
}

