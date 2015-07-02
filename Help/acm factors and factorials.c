#include <stdio.h>
int main()
{
    int n, i=0;
    long long f=1;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=n;i>=1;i--)
            f=f*i;
        printf("%lld\n",f);
        i=0,n=0,f=1;
    }

}
