#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int t;
	cin>>t;
	int m,n;
	int summ = 0;
	int sumn = 0;
	while(t--)
	{
	     cin>>m>>n;
	     int arr1[m] = {0};
	     int arr2[n] = {0};
		for(int i=0;i<m;i++)
		{
			cin>>arr1[i];
			summ = summ+arr1[i];
		}
		for(int j=0;j<n;j++)
		{
			cin>>arr2[j];
			sumn = sumn+arr2[j];
		}
		cout<<min((sumn+n*(summ)),(summ+m*(sumn)))<<endl;


	}
	return 0;
}