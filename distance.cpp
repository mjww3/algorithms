#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int distance(vector<int>a,vector<int>b,int d)
{
	int dist = 0;
	int sum  =0;
	for(int i=0;i<d;i++)
	{
		sum = sum+abs((a[i]-b[i]));
	}
	dist = (sum);
}
int main()
{
	int n,d;
	cin>>n>>d;
	vector<vector<int> > points;
	for(int i=0;i<n;i++)
	{
		vector<int> row;
		for(int j=0;j<d;j++)
		{
			int input = 0;
			cin>>input;
			row.push_back(input);
		}
		points.push_back(row);
	}
    int maximum = 0;
 for(int a=0;a<n-1;a++)
 {
	for(int b=1;b<n;b++)
	{
	int disd = distance(points[a],points[b],d);
	if(disd>maximum)
	{
		maximum = disd;
	}
	}
}
cout<<maximum<<endl;
return 0;
}
