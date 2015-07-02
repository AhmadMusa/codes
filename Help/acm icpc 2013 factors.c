#include <stdio.h>
int main()
{
    int factor, n;
    while(scanf("%d",&n)==1)
    {
        factor=0;
        int i;
        for(i=n-3;i<=n;i++)
        {
            factor=factor+(i)*2;
        }
        printf("%d %d\n",n,factor);

    }
}
