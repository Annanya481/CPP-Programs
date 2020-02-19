#include<iostream>
using namespace std;
int main()
{
    int choice;
    float a, r, c, s, l, b, h, cu;
        cout<<"VOLUME MENU"<<"\n"<<"1. Volume of cube"<<"\n"<<"2. Volume of sphere"<<"\n"<<"3. Volume of cuboid"<<"\n";
    cout<<"\n Enter your choice: ";
    cin>>choice;
    cout<<"\n";
    switch(choice)
    {
        case 1:
            cout<<"Enter the length of side of square: ";
            cin>>a;
            c = a*a*a;
            cout<<"The volume of the cube of side "<<a<<" is "<<c;
            break;
        case 2:
            cout<<"Enter the radius of the sphere: ";
            cin>>r;
            s = (4*r*r*r*3.14)/3;
            cout<<"The volume of the sphere of radius "<<r<<" is "<<s;
            break;
        case 3:
            cout<<"Enter the length of cuboid: ";
            cin>>l;
            cout<<"Enter the breadth of the cuboid: ";
            cin>>b;
            cout<<"Enter the height of the cuboid: ";
            cin>>h;
            cu = l*b*h;
            cout<<"The volume of the cuboid with length "<<l<<", breadth "<<b<<", and height "<<h<<" is "<<cu;
            break;
        default:
            cout<<"Wrong choice, choose again.";
            break;
    }
    cout<<"\n";
    return 0;
}
