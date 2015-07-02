#include <stdio.h>
int main()
{
    int n , k;
    while(scanf("%d %d",&n,&k)==2)
    {
        if(n==k)
            printf("-1\n");
        else if(k==0)
        {
            int i;
            for(i=1; i<n; i++)
            {
                printf("%d ",i+1);
            }
            printf("1\n");
        }
        else
        {
            int i;
            for(i=1; i<n-k; i++)
            {

                printf("%d ",i+1);
            }
            printf("1 ");
            for(i=n-k+1; i<n; i++)
                printf("%d ",i);
            printf("%d\n",n);
        }
    }
    return 0;
}
