#include<iostream>
using namespace std;
int main()
{
    float m1, m2, m3, per, marks;
    cout<<"Enter marks in three subjects"<<"\t";
    cin>>m1>>m2>>m3;
    marks = m1+m2+m3;
    per = marks/300*100;
    cout<<"The percentage is: "<<per<<"%";
    return 0;
}
