#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int T;
	long int c,w,k;
	cin>>T;
	while(T--)
	{
		cin>>c>>w>>k;
		if(c*k<=w)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}
///solved