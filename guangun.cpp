#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;
int main()
{
	long long int n,t,s,k;
	while(scanf("%lld",&n)!=EOF)
	{
		if(n<10)
		{
			cout<<n*n<<endl;
			continue;
		}
		t=((n-10)/9)+1;
		k=10+((t-1)*9);
		s=((81*t)+1)+((n-k)*(n-k+2));
		printf("%lld\n",s);
	}
	return 0;
}
//solved