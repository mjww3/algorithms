///n steps problem
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin>>N;
	long int x,y;
	while(N--)
	{
		cin>>x>>y;
		if(x==y)
		{
			if(x%2==0 && y%2==0)
			{
				cout<<2*x<<endl;
			}
			else
			{
				cout<<2*x-1<<endl;
			}
		}
		else if(x-y==2)
		{
			if(x%2==0)
			{
				cout<<x+y<<endl;
			}
			else
			{
				cout<<x+y-1<<endl;
			}
		}
		else
		{
			cout<<"No Number"<<endl;
		}

	}

return 0;
}
///solved