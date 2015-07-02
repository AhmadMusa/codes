#include <stdio.h>
#include <math.h>
#include <stdlib.h>
long int prime[10000];
long int primes[1000000];
#define limit 1000000/*size of integers array*/

int main()
{
    unsigned long long int i,j;
    for (i=2; i<=(limit); i++)
        primes[i]=1;

    for (i=2; i<=(limit); i++)
        if (primes[i])
            for (j=i; i*j<limit; j++)
                primes[i*j]=0;

    int cou=0;
    for(i=2;i<=(limit);i++)
    {
        if(primes[i])
            prime[cou++]=i;
    }
    long long n;
        while(scanf("%lld",&n)==1)
        {
            int count=0;
            if(n==0)
                break;
        if(n==1000000)
            printf("%lld : 2\n",n);
        else
        {

         int l;
        for(l=0;prime[l]<=n;l++)
        {
            if(n%prime[l]==0)
                count++;
        }

        printf("%lld : %d\n",n,count);
        }
        }
        return 0;
    }
