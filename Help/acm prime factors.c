#include <stdio.h>
long int factor[100000];

int prime_factor(long int n)
{
    int counter=0;
    while(n%2==0)
    {
        factor[counter++] = 2;
        n=n/2;
    }

    int i ;
    for(i=3; i <= sqrt(n); i=i+2)
    {
        while (n%i == 0)
        {
            factor[counter++]=i;
            n = n/i;
        }
    }

    if(n>2)
    {
        factor[counter++]=n;
    }

    return counter;
}
int main()
{
    long int number;
    while(scanf("%ld",&number)==1 && number)
    {
        if(number<0)
        {
            int limit = prime_factor(-number);

            int i;
            printf("%ld = -1 x ",number);
            for(i = 0; i<limit-1; i++)
            {
                printf("%ld x ",factor[i]);

            }
            printf("%ld\n",factor[limit-1]);
        }
        else
        {
            int limit = prime_factor(number);

            int i;
            printf("%ld = ",number);
            for(i = 0; i<limit-1; i++)
            {
                printf("%ld x ",factor[i]);
            }
            printf("%ld\n",factor[limit-1]);
        }
    }
    return 0;
}
