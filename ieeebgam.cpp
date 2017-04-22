#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	int t,n;
	double ans;
	cin>>t;;
	while(t--)
	{
		cin>>n;
		ans = (double)n/(n+1);
		printf("%0.8f\n",ans);
	}
	return 0;
}

///solvved