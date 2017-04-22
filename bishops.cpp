#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  long long int n;
  while(scanf("%lld",&n)!=EOF)
  {
    if(n==1)
    {
      cout<<1<<endl;
    }
    else if(n==0)
    {
      cout<<0<<endl;
    }
    else if(n==2)
    {
      cout<<2<<endl;
    }
    else if(n==3)
    {
      cout<<4<<endl;
    }
    else
    {
    cout<<2*n-2<<endl;
    }
  }
  return 0;

}
///problem solved
