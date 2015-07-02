#include <stdio.h>
#define limit 65000
int main()
{
long int big_mod(long int base,long  int power, long int mod);
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
    long int n;
    long int a;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            return 0;
        if(primes[n]==1)
            printf("%ld is normal.\n",n);
        else
        {
            long int i;
            for(i=2;i<n;i++)
            {
                long int b=n;
                if(big_mod(i,n,b)!=i)
                {
                    printf("%ld is normal.\n",n);
                    printf("%ld",i);
                    break;
                }
            }
            if(i==n)
                printf("The number %ld is a Carmichael number.\n",n);
        }

    }
    return 0;
}

long int big_mod(long int base,long  int power, long int mod)
{
    if(power==0)    return 1;
    //কোন কিছুর power 0 হলে তার মান 1 হয়ে যায়
    else if(power%2==1) //power বেজোড় হলে
    {
        long int p1 = base % mod;
        long int p2 = (big_mod(base,power-1,mod))%mod;
        return (p1*p2)%mod;
    }
    else if(power%2==0) //power জোড় হলে
    {
        long int p1 = (big_mod(base,power/2,mod))%mod;
        return (p1*p1)%mod;
    }
}
