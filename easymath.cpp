#include <stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	long long int n,m,a,d;
	while(t--)
	{
		long long int count = 0;
		scanf("%lld%lld%lld%lld",&n,&m,&a,&d);
		long long int qw = a+d;
		long long int we = a+2*d;
		long long int er = a+3*d;
		long long int rt = a+4*d;
		for(int i=n;i<=m;i++)
		{
			if((i%a)!=0 && ((i%(qw))!=0) && ((i%(we))!=0) && ((i%(er)!=0)) && ((i%(rt))!=0))
			{
				count++;
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}