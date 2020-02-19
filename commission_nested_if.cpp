#include<iostream>
using namespace std;
int main()
{
    int sales,comm;
    cout<<"enter sales of a salesman: ";
    cin>>sales;
    if(sales>=30001)
    {
         comm = sales + (sales*15/100);
         cout<<comm;
    }
    else if(sales>=22001&&sales<=30000)
    {
        comm = sales + (sales*10/100);
        cout<<comm;
    }
    else if(sales>=12001&&sales<=22000)
    {
        comm = sales + (sales*7/100);
        cout<<comm;
    }
    else if(sales>=5001&&sales<=12000)
    {
        comm = sales + (sales*3/100);
        cout<<comm;
    }
    else if(sales<=5000)
    {
        comm = sales + (sales*0);
        cout<<comm;
    }
    return 0;


}

