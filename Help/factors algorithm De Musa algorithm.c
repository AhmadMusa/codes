#include <stdio.h>
#include <stdlib.h>
#define limit 100
int main()
{
    unsigned long long int i,j;
    int *primes;
    int z = 1;

    primes = malloc(sizeof(int)*limit);

    for(i=2; i<limit; i++)
        primes[i]=1;

    for(i=2; i<limit; i++)
        if (primes[i])
            for (j=i; i*j<limit; j++)
                primes[i*j]=0;
    int prime[50];
    int a=0;
    for(i=2; i<100; i++)
    {
        if(primes[i])
            prime[a++]=i;
    }
    int k,l,t=2;
    int *factors;
    factors = malloc(sizeof(int)*limit);

    for(k=1; k<=limit; k++)
        factors[k]=0;
    a=0;
    k=2;
    while(k<=20)
    {
        printf("{%d}",k);
        int count=1,d,save,t=2;

        save=k;
        for(l=k;t<=save;t++)
        {
            d=l;
            while(d*t<=100)
            {
                ++count;
                d=d*t;
                if(factors[d]==0)
                    factors[d]=count+1;
                printf("%d ",d);
            }
        }
        k++;

    }

    for(k=2; k<=100; k++)
        printf("%d: %d\n ",k,factors[k]);

    return 0;
}
