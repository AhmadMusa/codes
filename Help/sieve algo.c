#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define limit 5000001/*size of integers array*/

long long int count[5000001];
long long int table[5000001];
int main()
{
    unsigned long long int i,j;
    int *primes;
    memset(count,0,sizeof count);
    memset(table,0,sizeof table);

    primes= malloc(sizeof(int)*limit);
    for (i=2; i<limit; i++)
        primes[i]=1;

    for (i=2; i<limit; i++)
    {
        if (primes[i])
        {
            count[i]=1;
            for (j=i; i*j<limit; j++)
            {
                primes[i*j]=0;

            }
        }
    }
    count[1]=0;
    int cou=0;
    for(i=2; i<limit; i++)
    {
        if(primes[i])
            count[i]=1;
    }

    for (i=2; i<limit; i++)
    {
        if (primes[i])
        {
            count[i]=1;
            for (j=i; i*j<limit; j++)
            {
                count[i*j] += count[j]+1;

            }
        }
    }

    for(  i =1; i<limit; i++) table[i] = count[i]+table[i-1];

    long long int test ;
    scanf("%i64d",&test);
    for( i =1; i<=test; i++)
    {
        long long int a, b;
        scanf("%i64d %i64d",&a,&b);
        printf("%i64d\n",table[a]-table[b]);
    }
//    int k=0;



    return 0;
}
