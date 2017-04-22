///atoms problem in spoj

#include <stdio.h>

using namespace std;

int main()
{
    long long int N,K,M;
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int time = 0;
        scanf("%lld %lld %lld",&N,&K,&M);

        if(N<M)
        {
            while(N<=M)
            {
                N = N*K;
                time++;
            }
            printf("%lld\n",time-1);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}   
//solved