#include <stdio.h>
long int cost[10000];
int main()
{
    long int n;
    while(scanf("%ld",&n)==1)
    {
        long int i;
        for(i=0; i<n; i++)
            scanf("%ld",&cost[i]);
        long int exact;
        scanf("%ld",&exact);

        long int j, low=0,high=0, save=1000001,temp=0;

        for(i=0; i<n; i++)
        {
            if(cost[i]!=exact)
            {
                for(j=i+1; j<n; j++)
                {
                    if(cost[i]+cost[j]==exact)
                    {
                        temp=fabs(cost[j]-cost[i]);
                        if(temp<save)
                        {
                            save=temp;
                            low=cost[i];
                            high=cost[j];
                        }
                    }
                }
            }
        }
        if(low>high)
            printf("Peter should buy books whose prices are %ld and %ld.\n\n",high,low);
        else
            printf("Peter should buy books whose prices are %ld and %ld.\n\n",low,high);
    }
    return 0;
}
