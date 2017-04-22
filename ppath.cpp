#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
using namespace std;

int arr[4]={0};\

int distance[10000] ={-1};
bool visited[10000] = {false};
int primes[10000] = {0};
bool is_prime[10000] = {true};
vector<int> prime_generator(10000);
///separate digits
void seperate_digits(int number)
{
	arr[0] = number%10;
	arr[1] = (number%100)/10;
	arr[2] = (number%1000)/100;
	arr[3] = (number%10000)/1000;
}

///by using the sieve
void generate_primes(int number)
{
	for(int i=2;i<sqrt(number);i++)
	{
		if((number%i)=0)
		{
			is_prime[number]==false;
			break;
		}
	}
}

void bfs(int start)
{
	queue q;
	distance[start] = 0;
	q.push(start);
	visited[start] = true;
	while(!(queue.Empty()))
	{
		temp_number = q.front();
		q.pop();



	}
}

int main()
{
	int t;
	cin>>>t;
	int a,b;
	while(t--)
	{
		cin>>a>>b;
		


	}
}