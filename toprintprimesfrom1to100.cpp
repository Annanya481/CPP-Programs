using namespace std;
#include<iostream>
int main()
{
  int i, num;
  for(i=2; i<=100; i++){
    for(num=2; num<i; num++){
      if(i%num==0){
            break;
      }
      else if (i==num+1)
        cout<<i<<"\n";
    }
  }
  return 0;
}
