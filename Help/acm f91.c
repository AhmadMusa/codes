#include <stdio.h>
int main()
{
    long long int num, re;
    while(scanf("%lld",&num)==1)
    {
        if(num==0)
            break;
        int f(long long int num);
        re=f(num);
        printf("f91(%lld) = %lld\n",num,re);
    }
    return 0;
}
int f(long long int n)
{
    if(n>=101)
        return (n-10);
    else if(n<=100)
        return f(f(n+11));
}
