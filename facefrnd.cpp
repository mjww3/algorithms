#include <iostream>
#include <set>
using namespace std;

int main()
{
	int n;
	cin>>n;
	set<int> friends;
	set<int> fof;
	for(int i=0;i<n;i++)
	{
		int fid = 0;
		cin>>fid;
		friends.insert(fid);
		int num = 0;
		cin>>num;
		while(num--)
		{
			int x = 0;
			cin>>x;
			fof.insert(x);
		}
	}
	std::set<int>::iterator it;
	 for (it=friends.begin(); it!=friends.end(); ++it)
	{
		fof.erase(*it);
	}
	cout<<fof.size()<<endl;
return 0;	
}
///solved