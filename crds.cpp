#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		cout<<(3*((n*(n+1))/2)-n)%1000007<<endl;
	}
	return 0;
}