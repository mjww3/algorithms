///last digit problem
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;
long long int power(long long int x, long long int y, int p)
{
    long long int res = 1; 
    if(y==0)
    {
    	res =1;
    	return res;
    }     // Initialize result
   while (y > 0)
    {
       if (y & 1)
            res = (res*x) % (long long int)p;
        y = y>>1;
        x = (x*x) % (long long int)p;  
    }
    return res;
}
int main()
{
	int T;
	long long int a,b;
	cin>>T;
	while(T--)
	{
		cin>>a>>b;
		cout<<power(a,b,10)<<endl;
	}
return 0;
}