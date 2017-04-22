#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
	int T,N,K;
	cin>>T;
	while(T--)
	{
		cin>>N>>K;
		vector<int> students(N);
		for(int i=0;i<N;i++)
		{
			cin>>students[i];
		}
		sort(students.begin(), students.end());
		int first = 0;
		int last = K-1;
		int min = abs(students[K-1]-students[0]);
		while(last<=N-1 && first<=N-K)
		{
			if((abs(students[last]-students[first]))<min)
			{
				min = abs(students[last]-students[first]);
			}
			last++;
			first++;
		}
		cout<<min<<endl;
	}
	return 0;
}
//solved