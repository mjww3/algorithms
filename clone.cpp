///clone problem spoj

#include <vector>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	vector<string> vec;
	int N,L;
	string s;
	cin>>N>>L;
	std::vector<int> v;
	for(int i=0;i<N;i++)
	{
		v[i] = 0;
	}
	while(true)
	{
		cin>>N>>L;
		if(N==0 && L==0)
			break;
		cin>>s;
		vec.push_back(s);
		for(int i=0;i<N-1;i++)
		{
			for(int j=1;j<N;j++)
			{
				if(vec[i]==vec[j])
				{
					v[i]++;
				}
			}
		}
		for (std::vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
    std::cout << *i << endl;
	}

return 0;
}