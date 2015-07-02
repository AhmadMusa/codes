#include <stdio.h>
#include <math.h>
#include <limits.h>
long int bac[10000], sp[10000];

int main()
{

    long int a ,b ,c=1;
    while(scanf("%ld %ld",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        long i,j ;
        for(i=0; i<a; i++)
        {
            scanf("%ld",&bac[i]);
        }
        for(i=0; i<b; i++)
        {
            scanf("%ld",&sp[i]);
        }

        if(a<=b)
            printf("Case %ld: 0\n",c++);

        else
        {
            long int min=INT_MAX;
            for(i=0;i<a;i++)
            {
                if(bac[i]<min)
                    min=bac[i];
            }

            printf("Case %ld: %ld %ld\n",c++,a-b,min);
        }

    }
    return 0;
}


