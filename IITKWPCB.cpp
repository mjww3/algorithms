///IITKWPCB problem spoj
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
///for being the gcd==1
//number must be prime
int main()
{
	int T;
	long long int n,c;
	cin>>T;
	while(T--)
	{
		cin>>n;
		if(n%2==0)
		{
			c= (n/2)-1;
		if(c%2==0)
		{
			cout<<c-1<<endl;
		}
		else
		{
			cout<<c<<endl;
		}
	}
		else
		{
			cout<<(n/2)<<endl;
		}
	}
	return 0;
}
///solved