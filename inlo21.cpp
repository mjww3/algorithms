///inlo 21 problem codechef
#include <vector>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T;
	cin>>T;
	long long int n,m;
	while(T--)
	{
		cin>>n;
		cin>>m;
		cout<< (m*(m+1)*(n)*(n+1))/4<<endl;
	}
	return 0;
}
///solved