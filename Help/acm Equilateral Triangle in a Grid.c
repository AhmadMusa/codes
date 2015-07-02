#include <stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {

        if(n==0)
            break;

    printf("%lld\n",(n*(n+2)*(2*n+1))/8);
    }
    return 0;
}

