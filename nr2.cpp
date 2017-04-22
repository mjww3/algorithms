#include <cstdio>
#include <iostream>
#include <cstring>
int main()
{
	int n;
	scanf("%d",&n);
	long long int val;
	long long int answer =0;
	long long int mask = ~(0LL);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&val);
		answer = (answer | val);
		mask = mask&val;


	}
	answer ^= mask;
	printf("%lld\n",answer);
	return 0;
}