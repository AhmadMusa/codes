#include  <stdio.h>
int main()
{
    long long int fib[5001];
    long long int i ,n ;
    while(scanf("%lld",&n)!=EOF)
    {
    fib[0]=0, fib[1]=1;
    for(i=2;i<=5000;i++)
        fib[i]=fib[i-1]+fib[i-2];

    for(i=1;i<=5000;i++)
    {
           if(i==n)
                printf("The Fibonacci number for %lld is %lld\n",n,fib[i]);
    }
    }

return 0;
}
