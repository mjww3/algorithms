#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
using namespace std;
long long int 
gcd(long long int a,long long int b )
{
  if ( a==0 ) return b;
  return gcd ( b%a, a );
}

int main()
{
	while(true)
	{
		long long int sol1,sol2;
		long long int a,b;
		cin>>a>>b;
		if(a==0 && b==0) break;
		long long int gc = gcd(a,b);
		sol1 = a/gc;
		sol2 = b/gc;
		cout<<sol1*sol2<<endl;
	}
return 0;
}
//solved