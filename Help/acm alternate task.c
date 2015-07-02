#include <stdio.h>
#include <math.h>
#include <stdlib.h>
long int prime[100];
long int primes[1005];
int save[1005];
#define limit 1001/*size of integers array*/

int main()
{
    long long int i,j;
    for (i=2; i<=(limit); i++)
        primes[i]=1;

    for (i=2; i<=(limit); i++)
        if (primes[i])
            for (j=i; i*j<limit; j++)
                primes[i*j]=0;

    int cou=0;
    for(i=2; i<=(limit); i++)
    {
        if(primes[i])
            prime[cou++]=i;
    }
    int l, k,m=0;
    for(l=0;l<1005;l++)
        save[l]=1;
    for(k=1; k<=1000; k++)
    {
        for(l=0; prime[l]<=k; l++)
        {
            if(k%prime[l]==0)
                save[m++]+=prime[l];
        }
    }
    printf("%d",save[0]);
    int n;
    while(scanf("%d",&n)==1)
    {
        int count=0;
        if(n==0)
            break;
        int check;
        /*for(check=n-2; check>=0; check--)
        {
            printf("%d\n",save[check]);
            if(save[check]==n)
            {
                printf("%d\n",check);
                break;
            }
        }
        if(check<0)
            printf("-1\n");
*/

    }

    return 0;
}
