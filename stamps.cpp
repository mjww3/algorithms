///stamps problem spoj
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int arr[10001];
	long long int number_of_scenarios,number_stamps,number_friends;
	cin>>number_of_scenarios;
	for(int i=1;i<=number_of_scenarios;i++)
	{
		cin>>number_stamps>>number_friends;
		for(int j=0;j<number_friends;j++)
		{
			cin>>arr[j];
		}
		sort(arr,arr+number_friends);
		int count = 0;
		for(int f = number_friends-1;f>=0;f--)
		{
			number_stamps = number_stamps-arr[f];
			count ++;
			if(number_stamps<=0) break;
		}
		if(number_stamps<=0)
		{
		cout<<"Scenario #"<<i<<":"<<endl;
		cout<<count<<endl;
}
else
{
	cout<<"Scenario #"<<i<<":"<<endl;
	cout<<"impossible"<<endl;
}
	}
return 0;
}
///solved