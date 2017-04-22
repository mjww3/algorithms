///hangover problem spoj
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	float input;
	while(true)
	{
	cin>>input;
	if(input!=0.00)
	{
		float n=2;
		float r = 0.00;
		int result = 0;
		while(r<input)
		{
			r = r+(1/n);
			n++;
			result++;
		}
		cout<<result<<" "<<"card(s)"<<endl;
	}
	else
	{
		return 0;
	}
	}
	
return 0;
}
///solved