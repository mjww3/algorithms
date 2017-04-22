#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int BIT[20001];

void initialize()
{
	for(int i=0;i<20001;i++)
	{
		BIT[i] =0;
	}
}
void update(int a,int val,int n)
{
	for(; x<=n;x = x+x&-x)
	{
		BIT[x] = Bit[x]+val;
	}
}
int query(int a)
{
	int sum = 0;
	for(; x>0; x-=x&-x)
	{
		sum = sum+BIT[x];
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		initialize();

	}
}