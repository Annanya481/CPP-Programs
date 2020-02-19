#include<iostream>
using namespace std;
bool is_pytho_triplet(int a, int b, int c);
int factorial(int num1);

int main()
{
    int limit=100;
    int count=0;
    for (int a=1; a<=limit;a++)
    {
        for (int b=1;b<=limit;b++)
        {
            for (int c=1;c<=limit;c++)
            {
                if (is_pytho_triplet(a, b, c))
                {
                    cout<<"\n("<<a<<", "<<b<<", "<<c<<")";
                    count++;
                }

                else
                    continue;
            }
        }
    }
    cout <<"\n"<<"Total "<<count<<" pythagorian triplets found"<<"\n";
}

bool is_pytho_triplet(int a, int b, int c)
{
    if (a*a + b*b == c*c)
        return true;
    else
        return false;
}

int factorial(int num1)
{

}
