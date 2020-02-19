#include <iostream>
using namespace std;

int main()
{
    char name[10];

    cout << "Enter your name (10 characters): ";
    cin >> name;
    cout << "You entered: " << name <<"\n";

    for (int i=0;i<10;i++)
    {
        cout <<name[i]<<"\n";
    }

    return 0;
 }
