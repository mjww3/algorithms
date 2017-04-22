#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;
int main()
{
	long long int T,N,a;
	long long int numpairs=0;
	cin>>T;
	while(T--)
	{
		cin>>N;
		vector<long long int> array(N);
		for(int i=0;i<N;i++)
		{
			cin>>array[i];
		}
		sort(array.begin(),array.end());
		

	}
}
