#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
#include <stdlib.h>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};
int main()
{
	Node* node1 = NULL;
	Node* node2 = NULL;
	Node* node3 = NULL;

	node1 = (struct Node*)malloc(sizeof(Node));
	node2 = (struct Node*)malloc(sizeof(Node));
	node3 = (struct Node*)malloc(sizeof(Node));

	node1->data = 1;
	node1->next = node2;
	node2->data = 2;
	node2->next = node3;
	node3->data = 3;
	node3->next = NULL;
	cout<<node1->next->next->data<<endl;
	return 0;
}