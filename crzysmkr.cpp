#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main()
{
	int T;
	cin>>T;
	long long int N;
	while(T--)
	{
		cin>>N;
		long long int remainder = ((int)pow(34,N)+30*N+32)%11;
		if(remainder==0)
		{
			cout<<0<<endl;
		}
		else
		{
		long long int M = 11 - remainder;
		cout<<M<<endl;
	    }
	}
	return 0;
}