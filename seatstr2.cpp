///the problem from the codechef march challenge
#include <vector>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
int check_for_similarity(string a,string b)
{
	int length = a.length();
	int i,j=0;
	string temp;
	int h =0;
	while(i<length && j<length)
	{
		if(!(a[i] == b[j]))
		{
			swap(a[i],a[i+1]);
			if(a[i]==b[j])
			{
				h=1;
			}
			else
			{
				swap(b[j],b[j+1]);
				if(a[i]==b[j])
				{
					h = 1;
				}
				else
				{
					swap(a[i+1],a[i]);
					if(a[i]==b[j])
					{
						h = 1;
					}
					else 
					{
						h = 0;
					}

				}

			}

		}
		else
		{
			h = 1;
		}
		i++;
		j++;
	}
	return h;
}
long long int number_permutations()
{
	
}
int main()
{
	int T;
	cin>>T;
	string a;
	while(T--)
	{
		cin>>a;
		int length = a.length();
		int number = 0;
		if(length==0)
		{
			cout<<"0"<<endl;
		}

	}
}