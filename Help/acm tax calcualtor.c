#include <stdio.h>
int main()
{
    long long n,i=1,t;
    scanf("%lld",&t);
    while(i<=t)
    {
        scanf("%lld",&n);
        long long m, k, j,l;
        if(n<=180000)
            printf("Case %lld: 0\n",i);
        else
        {
            m=n-180000;
            if(m>=300000){
                k=m-300000;
            if(k>=400000){
                l=k-400000;
            if(l>=300000)
            {
                j=l-300000;
                if(j>0)
                    printf("Case %lld: %lld\n",i,30000+(400000*15/100)+(300000*20/100)+(j*25/100));
            }
            else
                printf("Case %lld: %lld\n",i,30000+(40000*15/100)+(l*20/100));
            }
            else
                printf("Case %lld: %lld\n",i,30000+(k*15/100));
            }
            else
                printf("Case %lld: 2000\n",i);

        }

        i++;
    }
    return 0;
}
