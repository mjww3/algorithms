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
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		std::vector<int> v(n-1);
		for(int i=0;i<n-1;i++)
		{
			v[i] = i+1;
		}
		int max = 0;
		bool odd = false;
		if(n%2==0)
		{
			odd = true;
			int j= n-2;
			int i=0;
			int mid = ((n/2)-1);
			while(i<=mid && j>=mid)
			{
				if(v[i]*v[j]>max)
				{
					max = v[i]*v[j];
				}
				i++;
				j--;
			}
		}
		else
		{
			odd = false;
			int mid1 = n/2-1;
			int mid2 = n/2;
			int j = n-2;
			int i=0;
			while(i<=mid1 && j>=mid2)
			{
				if(v[i]*v[j]>max)
				{
					max = v[i]*v[j];
				}
				i++;
				j--;
			}

		}
		cout<<max<<endl;

	}
	return 0;
}
///solved