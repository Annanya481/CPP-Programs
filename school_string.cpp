#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char st1[100]="Welcome", st2[100]="To The World";
    cout<<strlen(st1);//output without null character
    cout<<"\n"<<strcat(st1, st2);//o/p-WelcomeTo The World
    cout<<"\n"<<st1;//after strcat-the combined value of st1 and st2 is stored in st1 becuase st1 is written in brackets before st2-strcat(str1, str2)
    cout<<"\n"<<st2;

    return 0;
}
