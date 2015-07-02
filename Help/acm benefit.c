#include <stdio.h>
int main()
{
    freopen("INPUT.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t, i=0;
    scanf("%d",&t);
    while(i<t)
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        if(b%a==0)
            printf("%lld\n",b/a);
        else
            printf("NO SOLUTION\n");
        i++;
    }
return 0;
}
