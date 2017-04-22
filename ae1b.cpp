///ae1b problem spoj

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;
 int sort(const void *x, const void *y) {
 return (*(int*)x - *(int*)y);
}
int main()
{
	int n,k,s;//number of screws required
	int arr[1000];
	int a;
	scanf("%d %d %d",&n,&k,&s);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	qsort(arr,n,sizeof(int),sort);
	int count =0;
	int d=0;
	for(int i=n-1;i>0;i--)
	{

		d += arr[i];
		if(d >= k*s) 
		{
			cout<<n-i;
			return 0;
		}
}
	cout<<n;
	return 0;

}

///solved