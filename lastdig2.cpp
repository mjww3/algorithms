///last digit problem
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;
long long int power(long long int x, long long int y, int p)
{
    long long int res = 1; 
    if(y==0)
    {
    	res =1;
    	return res;
    }  
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
    string s;
	long long int b;
	cin>>T;
	while(T--)
	{
		cin>>s>>b;
        long long int sa = stroi(s);
		cout<<power(sa,b,10)<<endl;
	}
return 0;
}