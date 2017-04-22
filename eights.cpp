#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;
int main()
{
	long long int T,K;
	cin>>T;
	while(T--)
	{
		cin>>K;
		long long int result = 192+(K-1)*250;
		cout<<result<<endl;
	}
	return 0;
}
///solved