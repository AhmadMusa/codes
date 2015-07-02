#include <stdio.h>
#include <stdlib.h>
long long int chight[50001];
long long int phight[25001];

int main()
{
    long long n;
    while(scanf("%lld",&n)==1)
    {
        long long i,j, flag=0;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&chight[i]);
        }

        long long int q, low=0, high=0;
        scanf("%lld",&q);

        for(i=0; i<q; i++)
        {
            scanf("%lld",&phight[i]);
        }
        for(i=0; i<q; i++)
        {
            low=0,high=0;
            for(j=0; j<n; j++)
            {
                if(chight[j]<phight[i])
                    low=chight[j];
                else if(chight[j]>phight[i]){
                    high=chight[j];
                break;
                }
            }
            if(low==0)
            {
                printf("X");
                if(high==0)
                    printf(" X\n");
                else
                    printf(" %lld\n",high);
            }
            else
            {
                printf("%lld",low);
                if(high==0)
                    printf(" X\n");
                else
                    printf(" %lld\n",high);
            }

        }


    }
    return 0;
}
