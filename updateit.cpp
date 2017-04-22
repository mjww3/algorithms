#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;
#define MAX 10009

int BIT[MAX];
int n;
void update(int j,int x)
{
	for(;j<=n;j=j+(j&(-j)))
		{
			BIT[j]=BIT[j]+x;
		}
	}

void updatefinal(int l,int r,int value)
{
	update(l,value);
	update(r+1,-value);
}
int query(int x)
{
	int sum = 0;
	for(; x>0;x = x-(x&(-x)))
	{
		sum = sum+BIT[x];
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	int u,l,r,val;
	int q,index;
	while(t--)
	{
		memset(BIT,0,sizeof(BIT));
		scanf("%d %d",&n,&u);
		for(int i=0;i<u;i++)
		{
			scanf("%d %d %d",&l,&r,&val);
			updatefinal(l+1,r+1,val);
		}
		cin>>q;
		for(int i=0;i<q;i++)
		{
			scanf("%d",&index);
			printf("%d\n",query(index+1));
		}
	}
return 0;
}