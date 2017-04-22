///codchess problem
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long int T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		if(N%2==0)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<1<<endl;
		}
	}
	return 0;

}
//solved