#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"enter two numbers"<<"\t";
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\n"<<"new value of a is: "<<a<<" and the new value of b is: "<<b;
	return 0;
}
