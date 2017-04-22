#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

#define MAX 100000000

#define NIL -1

long long int lookup[MAX] = {NIL};

long long int  fibonacci(int m)
{
	if(lookup[m]==NIL)
	{
		if(m<=1)
		{
			lookup[m] = m;
		}
		else
		{
			lookup[m] = fibonacci(m-1)+fibonacci(m-2);
		}
	}
	return lookup[m];
}

long long int result(int n,int m)
{
	long long int sum = 0;
	for(int i=n;i<=m;i++)
	{
		sum = sum+lookup[i];
	}
}
int main()
{
	int t;
	cin>>t;
	int n, m;
	long long int gar = 0;
	while(t--)
	{
		
		cin>>n>>m;
		gar = fibonacci(m);
		cout<<result(n,m)<<endl;
	}
	return 0;
}



