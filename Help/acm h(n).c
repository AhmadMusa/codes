#include <stdio.h>
int main()
{
    int t,k=0;
    scanf("%d",&t);
    while(k<t)
    {
        long long int n,i;
        scanf("%lld",&n);
        if(n<=0)
            printf("\n");
        else
        {
        long long int res = 0;
        for( i = 1; i <= n; i=i+1 )
        {
            res = (res + n/i);
        }
        printf("%lld\n",res);
        }
        k++;
    }
    return 0;
}
