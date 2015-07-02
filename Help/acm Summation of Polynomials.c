#include <stdio.h>
int main()
{
    long long n;
    while(scanf("%lld",&n)==1)
    {
        long long i,sum=0;
        i=n;
        for(;i!=0;i--)
        {
            sum+= i*i*i;

        }
        printf("%lld\n",sum);
    }
    return 0;
}
