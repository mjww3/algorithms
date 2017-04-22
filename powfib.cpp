#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;
long long fibonacci(long long a)
{
	long long int fib[a+1];
	long long int i;
	fib[0] =1;
	fib[1] = 1;
	for (i = 2; i <= a; i++)
	  {
	      fib[i] = fib[i-1] + fib[i-2];
	  }
	  return fib[a];
}

int main()
{
	long long int T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		long long int one = fibonacci(N);
		long long int two = (fibonacci(N))%10000000007;
		long long int result = (one^two)%10000000007;
		cout<<result<<endl; 
	}
	return 0;
}