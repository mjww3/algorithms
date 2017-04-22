///chefspl
#include <vector>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	long long int T;
	cin>>T;
	string a;
	while(T--)
	{
		cin>>a;
		long long int length = a.length();
		if(length%2==0)
		{
			long long int center_i_start = 0;
			long long int center_i_end = (length/2)-1;
			long long int center_j_start = length/2;
			long long int center_j_end = length-1;
			long long int i,j;
			int flag ,no= 0;
			while(center_i_start<=center_i_end && center_j_start<=center_j_end)
			{
				if(a[center_i_start]==a[center_j_start])
				{
					flag = 1;
				}
				else
				{
					flag = 0;
					no =1;
					break;
				}
			center_i_start++;
			center_j_start++;
			}
			if(flag==1) cout<<"YES"<<endl;
			else if(no==1 && flag==0) cout<<"NO"<<endl;
		}
		else
		{
			long long int center_i_start = 0;
			long long int center_i_end = (length/2)-1;
			long long int center_j_start = length/2+1;
			long long int center_j_end = length-1;
			long long int i,j;
			int flag ,no= 0;
			while(center_i_start<=center_i_end && center_j_start<=center_j_end)
			{
				if(a[center_i_start]==a[center_j_start])
				{
					flag = 1;
				}
				else
				{
					flag = 0;
					no =1;
					break;
				}
			center_i_start++;
			center_j_start++;
			}
			if(no==1) cout<<"NO"<<endl;
			else if(flag==1) cout<<"YES"<<endl;
		}
		
	}
return 0;
}