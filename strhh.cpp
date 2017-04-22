#include <stdio.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include  <algorithm>
#include <string>
using namespace std;
int main()
{
	int T;
	cin>>T;
	string s;
	int i;
	while(T--)
	{
		cin>>s;
		int length = s.length();
		for(i=0;i<length/2;i=i+2)
		{
			cout<<s[i];
		}
		cout<<std::endl;
	}
return 0;
}
///solved