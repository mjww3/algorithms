#include <stdio.h>
#include <iostream>
#include <list>
#include <stdlib.h>
#include <vector>

using namespace std;

struct AdjacencyListNode
{
	int data;
	struct AdjacencyListNode* next;
};

struct AdjacencyList
{
	struct AdjacencyListNode* head;
};

struct Graph
{
	int V;
	struct AdjacencyList* array;
};

Graph* creategraph(int v)
{
	struct Graph* newgraph = NULL;
	newgraph = (struct Graph*)malloc(sizeof(sizeof(AdjacencyList)*v));
	newgraph->V = v;
	return newgraph;
}
int main()
{
	cout<<"helloo"<<endl;
	return 0;
}