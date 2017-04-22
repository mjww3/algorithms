#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <algorithm>
using namespace std;
int n;
#define MAX 1000001

int bit[MAX];
void update(int x,int value)
{
	for(; x<=n;x+=x&(-x))
	{
		bit[x]+=value;

	}
}
void updatefinal(int a,int b,int value)
{
	update(a,value);
	update(b+1,-value);
}


int query(int x)
{
	int sum=0;
	for(; x>0;x-=x&-x)
	{
		sum = sum+bit[x];
	}
	return sum;

}
int main()
{
	int k;
	scanf("%d %d",&n,&k);
	int a,b;
	memset(bit,0,sizeof(bit));
	for(int i=1;i<=k;i++)
	{
		scanf("%d %d",&a,&b);
		updatefinal(a+1,b+1,1);
	}
	long int arr[n];
	for(int i=0;i<n;i++)
		{
			arr[i]=query(i+1);
		}
		sort(arr,arr+n);

	printf("%ld\n",arr[n/2]);
return 0;
}