///fashion problem spoj
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		vector<int> men(N);
		vector<int> women(N);
		for(int i=0;i<N;i++)
		{
			cin>>men[i];
		}
		for(int i=0;i<N;i++)
		{
			cin>>women[i];
		}
		sort(men.begin(),men.end());
		sort(women.begin(),women.end());
		long sum=0;
		for(int i=0;i<N;i++)
		{
			sum+=men[i]*women[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}

///solved