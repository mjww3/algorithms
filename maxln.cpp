#include <stdio.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include  <algorithm>

using namespace std;
int main()
{
	int T;
	double r;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
		cin>>r;
		double sol = 1/(4*r);
		double ans = 4*r*r+2*r*sol-4*r*r*sol*sol;
		cout<<"Case"<<" "<<i<<":"<<" ";
		printf("%.2f\n",ans);


	}
	return 0;
}