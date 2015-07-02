#include <stdio.h>
unsigned long long ans[1000000];
int main()
{
    unsigned long long n,l, k;
    while(scanf("%llu %llu",&n,&k)==2)
    {
        ans[0]=n;
        unsigned long long mod=0,i=1,temp;
        while(n!=1 && n>=k)
        {
            temp=n%k;
            if(temp!=0)
                mod++;
            n=n/k;
            ans[i++]=n;
        }
        if(mod==0)
        {
            printf("%llu",ans[0]);
            for(l=1;l<i;l++)
            {
                printf(" %llu",ans[l]);
            }
            printf("\n");
        }
        else
            printf("Boring!\n");
    }
    return 0;
}
