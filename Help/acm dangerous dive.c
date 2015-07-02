#include <stdio.h>
#include <string.h>
int main()
{
    int r , n;
    while(scanf("%d %d",&r,&n)==2)
    {
        int a[r+1];
        memset(a,0,sizeof(a));

        int i,temp,count=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&temp);
            a[temp]=1;
        }

        if(r==n)
        {
            printf("*\n");
            continue;
        }
        for(i=1; i<=r; i++)
        {
            if(a[i]!=1)
                printf("%d ",i);
        }

        printf("\n");
    }
    return 0;
}
