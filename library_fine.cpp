#include<iostream>
using namespace std;
int main()
{
    int n, fine;
    cout<<"enter the  number of days by which book submission is late: ";
    cin>>n;
    ((n<=5)?fine=n*5:(6<=n<=10)?fine=n*10:fine=n*13);
    cout<<"the fine is: "<<fine;
    return 0;
}
