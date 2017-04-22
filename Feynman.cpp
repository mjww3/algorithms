#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int N;
	while(true)
	{
		cin>>N;
		if (N==0)
		{
			return 0;
		}
		cout<<((N)*(N+1)*(2*N+1))/6<<endl;
	}
	return 0;
}
