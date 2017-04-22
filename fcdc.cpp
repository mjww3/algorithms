///fcdc
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long int factorial(long long int a)
{
	if(a==0)
	{
		return 1;
	}
	if(a==1)
	{
		return 1;
	}
	return a*factorial(a-1);
}
int main()
{
	long long int a,b;
	cin>>a>>b;
	long int icount = 0;
	long long int i=2;
	while(true)
	{
		if(factorial(i)>max(a,b)) break;
		else if(factorial(i)%a==0 && factorial(i)%b!=0)
		{
			icount++;
		}
		i++;
	}
	cout<<icount<<endl;
	return 0;
}