#include <stdio.h>
#define limit 10000 /*size of integers array*/
#define PRIMES 10000 /*size of primes array*/

int main()
{
    int i,j,numbers[limit];

    long long test;
    scanf("%lld",&test);
    while(test--)
    {
        long long n;
        scanf("%lld",&n);
        if(n==1 || n==2)
            printf("-1\n");
        else
        {

            long long i, t, temp = n/2;
            for(i=temp+1;; i++)
            {
                t=i;
                if(primes[t])
                    break;
            }
            printf("%lld\n",t);
        }

    }
    return 0;
}

// prime function

