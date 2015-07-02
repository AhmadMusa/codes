#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int i;
        if(n==0)
            break;
        int temp, fib[100];
        fib[0]=1;
        fib[1]=1;
        for(i=2;i<=n;i++)
        {
            fib[i]=fib[i-1]+fib[i-2];
        }
        printf("%d\n",fib[n]);

    }
    return 0;
}
