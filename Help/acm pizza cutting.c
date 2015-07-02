#include <stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        if(n<0)
            break;
        long long int sum;
        sum=(n*(n+1))/2 +1;
        printf("%lld\n",sum);
    }
    return 0;
}
