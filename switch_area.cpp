#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float area, rad, len, bre, a, b, c, s;
    int ch;
    cout<<"Area menu"<<"\n";
    cout<<"1. Circle"<<"\n";
    cout<<"2. Rectangle"<<"\n";
    cout<<"3. Triangle"<<"\n";
    cout<<"enter your choice: ";
    cin>>ch;
    cout<<"\n";
    switch (ch)
    {
    case 1:
        {
            cout<<"Enter radius of circle: ";
            cin>>rad;
            area = 3.14*rad*rad;
            cout<<"The area of circle is: "<<area;
            break;
        }
    case 2:
        {
            cout<<"Enter length and breadth of rectangle: ";
            cin>>len>>bre;
            area = len*bre;
            cout<<"The area of rectangle is: "<<area;
            break;
        }
    case 3:
        {
           cout<<"enter the three sides of triangle: ";
           cin>>a>>b>>c;
           s = (a+b+c)/2;
           area = sqrt(s*(s-a)*(s-b)*(s-c));
           cout<<"the area of triangle is: "<<area;
           break;
        }
    default:
        {
            cout<<"Wrong choice";
            break;
        }

    }
    return 0;
}
