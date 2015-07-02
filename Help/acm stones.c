#include <stdio.h>
#include <string.h>
int main()
{
    int i , n;
    int fib[20];
    fib[0]=1;
    fib[1]=1;
    int ans[1600],count=0;
    memset(ans,0,sizeof(ans));

    for(i=2;i<=16;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        ans[fib[i]]=1;
    }
    while(scanf("%d",&n)==1 && n)
    {
        if(ans[n]!=1)
            printf("Alicia\n");
        else
        {
            printf("Roberto\n");
        }
    }

return 0;
}
