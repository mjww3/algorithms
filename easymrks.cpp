#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n,k;
	for(int g = 1;g<=t;g++)
	{
		cin>>n>>k;
		vector<int> marks(n);
		int sum = 0;
		for(int i=0;i<n;i++)
		{
			cin>>marks[i];
			sum = sum+marks[i];
		}
		int sol=0;
		sol =(k*(n+1)-(sum));
		cout<<"\n"<<endl;
		cout<<"Case "<<g<<": "<<sol; 
	}
	return 0;

}
///solved