#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define limit 20000000/*size of integers array*/

long int prime[20000001];
long int listing[1000001];
int main()
{
    long long int i,j;
    int *primes;

    primes= malloc(sizeof(int)*limit);
    for (i=2; i<limit; i++)
        primes[i]=1;
    primes[1]=0;
    for (i=2; i<limit; i++)
    {
        if (primes[i])
        {
            for (j=i; i*j<limit; j++)
            {
                primes[i*j]=0;
            }
        }
    }

    long int a=1;
    for(i=1; i<=20000000; i++)
    {
        if(primes[i])
            prime[a++]=i;
    }
    long  int pregen[100001];

    long long n,k, c=0;
    for(k=1; k<a; k++)
    {
        if(prime[k+1]-prime[k]==2)
        {
            pregen[c++]=prime[k];
        }
    }

    while(scanf("%d",&n)==1)
    {
        printf("(%ld %ld)\n",pregen[n-1],pregen[n-1]+2);
    }
    return 0;
}
