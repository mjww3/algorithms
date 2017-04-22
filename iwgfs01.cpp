#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
int ways=0;
int number_ways(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 2;
	}
	else if(n==2)
	{
		return 3;
	}
	else
	{
		return number_ways(n-2)+number_ways(n-1);

	}
}

int main()
{
	int n;
	cin>>n;
	cout<<number_ways(n)<<endl;
	return 0;


}