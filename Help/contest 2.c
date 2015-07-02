#include <stdio.h>
#include <string.h>
int main()
{
    long long int a,b,c;
    while(scanf("%lld %lld %lld",&a,&b,&c)==3)
    {
        long long int sum=a+b+c;
        printf("%lld\n",sum*2);
    }
    return 0;
}
