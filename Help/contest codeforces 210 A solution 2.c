#include <stdio.h>
int main()
{
    int n ,k;
    while(scanf("%d %d",&n,&k)==2)
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j==i)
                {
                    if(j==n-1)
                        printf("%d",k);
                    else
                        printf("%d ",k);
                }
                else
                {

                    if(j==n-1)
                        printf("0");
                    else
                        printf("0 ");
                }


            }
              printf("\n");
        }
    }
return 0;
    }
