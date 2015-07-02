#include <stdio.h>
#include <math.h>
long long int cameras[100001*2];
int main()
{
    int t,cases=1;
    scanf("%d",&t);
    while(t--)
    {
        long int n  , m;
        scanf("%ld %ld",&n,&m);
        long long int i;
        for(i=0;i<2*n;i++)
            scanf("%lld",&cameras[i]);
        printf("Case %d:\n",cases++);
        while(m--)
        {
            long long int location;
            scanf("%lld",&location);
            long long int realans=0, maybeans=0,minp=0,maxp=0 ;
            for(i=0;i<2*n-2;i=i+2)
            {
                if(location>=cameras[i] && location<=cameras[i+1])
                {
                    minp= fabs(location-cameras[i]);
                    maxp= fabs(cameras[i+1]-location);

                    if(minp<maxp)
                        maybeans = minp;
                    else
                        maybeans = maxp;
                    if(realans<maybeans)
                        realans= maybeans;
                }
            }
            printf("%lld\n",realans);
        }
    }
    return 0;
}
