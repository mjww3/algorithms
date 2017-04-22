#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int T;
	double u,v,w,U,V,W;
	cin>>T;
	while(T--)
	{
		cin>>u>>v>>w>>U>>V>>W;
		double udash = v*v+w*w-U*U;
		double vdash = w*w+u*u-V*V;
		double wdash = u*u+v*v-W*W;
		double volume = 1/12*(sqrt(4*u*u*v*v*w*W-u*u*udash*udash-v*v*vdash*vdash-w*w*wdash*wdash+udash*vdash*wdash));
		cout<<volume<<endl;
	}
	return 0;
}
//solved