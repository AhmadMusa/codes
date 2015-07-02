#include <stdio.h>
int main()
{
    int t,cases=1;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i,max=0,temp;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&temp);
            if(temp>max)
                max=temp;
        }
        printf("Case %d: %lld\n",cases++,max);
    }
    return 0;
}
