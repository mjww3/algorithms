#include <stdio.h>
#include <vector>
#include <list>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

struct inputtype
{
	char a;
	int x;
};

void bfs(vector<list<struct inputtype> > graph,char a,int b,char x,int y)
{
	int numberofmoves = 0;
	list<int> queue;
	vector<int>
}
int main()
{
	int T;
	cin>>T;
	struct inputtype* start = (struct inputtype*)malloc(sizeof(struct inputtype));
	struct inputtype* end = (struct inputtype*)malloc(sizeof(struct inputtype));	
	while(T--)
	{
		cin>>start->a>>start->x;
		cin>>end->a>>end->x;
		vector<list<struct inputtype> > graph(1);
		bfs(graph,start->a,start->x,end->a,end->x);
	
}
return 0;
}