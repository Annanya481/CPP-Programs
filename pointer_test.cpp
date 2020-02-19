#include <iostream>
using namespace std;

int main()
{
    int i=10;
    int *iptr = &i;

    cout<<"Address of i is: "<<iptr<<"\n";
    cout<<"Value at address "<<iptr<<" is "<<*iptr;

    return 0;

}

