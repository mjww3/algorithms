#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
	int arr[10] = {0};
	int sum = 0;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
		sum = sum+arr[i];
		if(sum>=100)
		{
			if((sum-100)<=100-(sum-arr[i]))
			{
				break;
			}
			else
			{
				cout<<sum-arr[i]<<endl;
				return 0;
			}
		}
	}
	cout<<sum<<endl;
return 0;
}
///solved