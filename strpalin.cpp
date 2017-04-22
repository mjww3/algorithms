///Part of the codechef march challenge 2016
#include <vector>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T;
	cin>>T;
	string a,b;
	while(T--)
	{
		cin>>a;
		int df =0;
		cin>>b;
		int len1 = a.length();
		int len2 = b.length();
		for(int i=0;i<len1;i++)
		{
			for(int j=0;j<len2;j++)
			{
				if(a[i]==b[j])
				{
					df = 1;
					break;
					
				}
		}

	}
			if(df==0)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}

	return 0;
}
///solved