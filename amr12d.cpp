#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
	string S;
	int T;
	cin>>T;
	while(T--)
	{
		int flag = 0;
		cin>>S;
		int length = S.size();
		for(int i=0;i<length;i++)
		{
			if(S[i]!=S[length-i-1])
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"YES"<<endl;
		}
		else if(flag==1)
		{
			cout<<"NO"<<endl;
		}

	}
	return 0;
}
//solved