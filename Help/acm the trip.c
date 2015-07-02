#include <stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        double sum=0,avg=0,ans=0;
        double cost[n];
        long long int i;
        for(i=0; i<n; i++)
        {
            scanf("%lf",&cost[i]);
            sum+=cost[i];
        }
        avg=sum/n;

        for(i=0; i<n; i++)
        {
            if(cost[i]<avg)
            {
                ans+=(avg-cost[i]);
                printf("%lf ",ans);
            }
        }
        printf("$%.2lf\n",ans);
    }
}
