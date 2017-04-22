#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <list>
#include <queue>

using namespace std;

int digits[5];
bool prime[10001];
bool visited[10001];

struct Node
{
	int cur;
	int level;
};

void getdigits(int number)
{
	digits[1] = (number%10);
	digits[2] = (number%100)/10;
	digits[3] =(number%1000)/100;
	digits[4] =(number%10000)/1000;
}

bool isprime(int number)
{
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

void primetablebuild()
{
	memset(p,0,sizeof(0)) ;
	for(int i=1000;i<10001;i++)
	{
		prime[i]=isprime(i);
	}
}

int bfs(int start,int end)
{
	if(start==end)
	{
		return 0;
	}
	memset(visited,0,sizeof(visited));
	visited[start]=1;
	


}

int main()
{
	int t;
	int a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
	}

}