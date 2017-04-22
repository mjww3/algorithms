#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	long long int N;
	while(true){
	cin>>N;
	if (N==0) return 0;
	vector<long long int> numberStudents(N);
	vector<long long int> prices(N);
	for(int i=0;i<N;i++)
	{
		cin>>numberStudents[i];
	}
	for(int i=0;i<N;i++)
	{
		cin>>prices[i];
	}
	sort(numberStudents.begin(),numberStudents.end());
	sort(prices.begin(),prices.end());
	long long int total = 0;
	long long int last = N-1;
	long long int first = 0;
	while(last>=0 && first<=N-1)
	{
		total = total +numberStudents[last]*prices[first];
		last--;
		first++;
	}
	cout<<total<<endl;
}
	return 0;
}

//solved