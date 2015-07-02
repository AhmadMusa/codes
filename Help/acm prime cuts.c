#include <stdio.h>
#include <stdlib.h>

#define limit 1004 /*size of integers array*/

int main()
{
    int i,j;
    int primes[1004];
    int z = 1;


    for (i=2; i<limit; i++)
        primes[i]=1;

    for (i=2; i<limit; i++)
    {
        if(primes[i])
        {
            for (j=i; i*j<limit; j++)
            {
                primes[i*j]=0;
            }
        }
    }
    primes[1]=1;
    primes[2]=1;
    int newpr[1001];
    int a=1;
    for(i=1; i<=1000; i++)
    {
        if(primes[i])
            newpr[a++]=i;
    }


    int n ,c ;

    while(scanf("%d %d",&n,&c)==2)
    {
        int l,t,a,b,count=0;
        for(l=1; l<=n; l++)
        {
            if(primes[l])
                count++;
        }

        int temp;

        printf("%d %d:",n,c);
        if(2*c>=count)
        {

            for(i=1; i<=n; i++)
                if(primes[i])
                    printf(" %d",i);
            printf("\n\n");

        }
        else
        {
            i=1;

            if(count&1)
            {
                l=count/2-c+2;
                for( ;; i++ )
                {

                    printf(" %d",newpr[l++]);
                    if(i>=(2*c-1))
                        break;

                }
            }
            else
            {
                l=count/2-c+1;

                for( ; ; i++ )
                {

                    printf(" %d",newpr[l++]);
                    if(i>=2*c)
                        break;


                }
            }


            printf("\n\n");
        }
    }
    return 0;
}
