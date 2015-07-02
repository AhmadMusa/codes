#include <stdio.h>
int main()
{
    long long n, i, t=0;

    while(scanf("%lld",&n)==1&&n!=0)
    {

        while(t==0)
        {
        while(n!=0)
        {
            t=t+(n%10);
            n=n/10;
        }
        if(t>=10)
        {
            n=t;
            t=0;
        }
        else
            n=n;
        }
        printf("%lld\n",t);
        t=0;

        }
        return 0;
}

