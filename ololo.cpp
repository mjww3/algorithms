#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	scanf("%d",&N);
	long long int res = 0;
	long long int a=0;
	//long long int ki;
	for(int i=0;i<N;i++)
	{
		scanf("%lld",&a);
		res = res^a;
	}
	printf("%lld\n",res);
	return 0;
	
}

//solved