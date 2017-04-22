#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    double a;
	while(true)
	{
		cin>>a;
		if(a==-1) break;
		double result =(sqrt((4*a-1)/3));
		if (result == floor(result))
		{
			cout<<"Y"<<endl;
		}
		else
		{
			cout<<"N"<<endl;
		}

	}
	return 0;
}

///solved