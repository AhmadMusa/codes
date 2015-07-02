#include <stdio.h>
#define limit 5000000
long int factor(long n);
int main()
{
    long a , b;
    unsigned long long int i,j;
        int *primes;
        int z = 1;

        primes = malloc(sizeof(int)*limit);

        for (i=2; i<limit; i++)
            primes[i]=1;

        for (i=2; i<limit; i++){
            if (primes[i]){
                for (j=i; i*j<limit; j++){
                    primes[i*j]=0;
                }
            }
        }

    while(scanf("%ld",&a)==1)
    {

        if(a==0)
            break;
        scanf("%ld",&b);
        long p,s,count=0,t;
        for(p=a; p<=b; p++)
        {
            s=p;
            if(1==primes[s])
            {
                count++;
            }
            else
            {
                t=factor(s);

                if(1==primes[t])
                    count++;
            }
        }
        printf("%ld\n",count);

    }

}


long int factor(long n)
{
    long int i, save=0, term=0;

    for(i=2; n!=1;)
    {
        if(n%i==0)
        {
            n/=i;
            if(save!=i)
            {
                save=i;
                term+=i;
            }
        }
        else
            i++;
    }

    return term;
}

