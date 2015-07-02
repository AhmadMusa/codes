//factorial of n
#include <stdio.h>
int main()
{
    long long n, fac=1;

    scanf("%lld",&n);
    long long i;
    for(i=1;i<=n;i++)
        fac*=i;
    printf("%lld",fac);
}
