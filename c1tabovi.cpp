#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin>>N;
	vector<int>tabsbefore(N);
	vector<int>tabshewant(N);
	for(int i=0;i<N;i++)
	{
		cin>>tabsbefore[i];
	}
	for(int i=0;i<N;i++)
	{
		cin>>tabshewant[i];
	}
}