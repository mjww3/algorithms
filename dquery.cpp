#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <set>
#include <algorithm>
using namespace std;
#define MAX 1000006

int bit[MAX];
int n;
void update(int x,int value)
{
	for(;x<n;x=x+(x&(-x)))
	{
		bit[x]+=value;
	}
}

int query(int x)
{
	int sum = 0;
	for(;x>0;x=x-(x&(-x)))
	{
		sum = sum+bit[x];
	}
	return sum;
}
int main()
{
	memset(bit,1,sizeof(bit));
	cin>>n;
	int q;
	int a,b;
	int num=0;
	for(int i=1;i<=n;i++)
	{
		cin>>num;
		update(i+1,num);
	}
	cin>>q;
	while(q--)
	{
		set<int> s;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
			int temp = query(i+1);
			s.insert(temp);
		}
		cout<<s.size()<<endl;
	}

return 0;
}