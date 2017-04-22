#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct quest
{
	char value;
	int x;
}quest;
int main()
{
	int T,N;
	cin>>T;
	
	for(int j=1;j<=T;j++)
	{
		cin>>N;
		int numberofmangoes=0;
		vector<quest> questions(N);
		vector<int> basket;
		cout<<"Case"<<" "<<j<<":"<<endl;
		for(int i=0;i<N;i++)
		{
			cin>>questions[i].value;
			if(questions[i].value=='A')
			{
				cin>>questions[i].x;
			}
			if(questions[i].value=='A')
			{
				basket.push_back(questions[i].x);
			}
			else if(questions[i].value=='R')
			{
				basket.pop_back();
			}
			else if(questions[i].value=='Q')
			{
				std::vector<int>::iterator result;
				result =max_element(basket.begin(),basket.end());
				if(!basket.empty())
				{
				cout<<*result<<endl;
			}
			else
			{
				cout<<"Empty"<<endl;
			}
		}
		}

	}
	return 0;
}