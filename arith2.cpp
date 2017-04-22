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
	char operators;
	long long int a,b,T;
	cin>>T;
	while(T--)
	{
		operators = 0;
		cin>>a;
		while(true)
		{
			cin>>operators;
			if(operators=='=')
				break;
		cin>>b;
		switch(operators)
		{
			case '+':
			a = a+b;
			break;
			case '-':
			a = a-b;
			break;
			case '*':
			a = a*b;
			break;
			case '/':
			a = a/b;
			break;
		}
	}
	cout<<a<<endl;

	}
	return 0;
}
///solved