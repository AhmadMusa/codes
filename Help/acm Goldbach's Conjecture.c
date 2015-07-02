#include <stdio.h>
#include <stdlib.h>
#define limit 1000000 /*size of integers array*/

int main()
{
    unsigned long long int i,j;
    int *primes;
    int z = 1;

    primes = malloc(sizeof(int)*limit);

    for (i=2; i<limit; i++)
        primes[i]=1;

    for (i=2; i<limit; i++)
        if (primes[i])
            for (j=i; i*j<limit; j++)
                primes[i*j]=0;

    long long n;
    while(scanf("%lld",&n)==1)
    {
        int flag=0;
        if(n & 1)
            printf("Goldbach's conjecture is wrong.\n");
        else
        {

            long long temp, save=0, another;
            if(n==0)
                break;

            for(i=1,j=n-1;;)
            {
                    if(primes[i]==1 && primes[j]==1)
                    {
                        printf("%lld = %lld + %lld\n",n,i,j);
                        flag=1;
                        break;
                    }
                    else
                    {
                        i++;
                        j--;
                    }

                if(flag==1)
                    break;
            }
            if(flag=0)
                printf("Goldbach's conjecture is wrong.\n");

        }
    }
    return 0;
}
