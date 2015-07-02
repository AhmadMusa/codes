#include <stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int test;
    scanf("%d",&test);
    while(test--)
    {

        int n,g;
        scanf("%d %d",&n,&g);

        int i,j,k,loop;

        for(loop=1; loop<=g; loop++)
        {

            for(i=1; i<=n; i++)
            {
                for(j=1; j<=i; j++)
                    printf("%d",i);
                printf("\n");
            }
            for(k=i-2; k>=1; k--)
            {
                for(j=1; j<=k; j++)
                    printf("%d",k);
                printf("\n");
            }
            if(loop!=g || test!=0)
            {
                printf("\n");

            }

        }
    }
    return 0;
}
