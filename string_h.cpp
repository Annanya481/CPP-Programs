#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[100]="Welcome", str2[100]="To The World", str3[100]="Aaa", str4[100]="aAA";
    cout<<strlen(str1);//output without null character
    cout<<"\n"<<strcat(str1, str2);//o/p-WelcomeTo The World
    cout<<"\n"<<str1;//after strcat-the combined value of st1 and st2 is stored in st1 becuase st1 is written in brackets before st2-strcat(str1, str2)
    cout<<"\n"<<str2;
    cout<<"\n"<<strcmp(str3, str4);//strcmp compares the two string arguments using their ASCII values
    cout<<"\n"<<strcmp(str4, str3);//if string argument 1>string 2 argument-o/p is 1 and if string 2 argument>string 1 argument-o/p is -1
    cout<<"\n"<<strcmp("AA","AA");//both arguments are equal so o/p-0
    cout<<"\n"<<strcmpi(str3, str4);//compares lengths of characters
    return 0;
}
