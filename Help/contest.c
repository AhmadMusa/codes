#include <stdio.h>
#include <string.h>
int main()
{
    int s;
    while(scanf("%d",&s)==1)
    {
        int i , j;
        double mat[171][171];
        for(i=0; i<s; i++)
        {
            for(j=0; j<s; j++)
            {

                scanf("%lf",&mat[i][j]);

            }
        }
        double t=0;
        for(i=0; i<s; i++)
        {
            if(i==0)
            printf("%.8lf",mat[i][0]);
            else
            {
                printf("%.8lf",mat[i][0]1);
            }
            for(j=1; j<s; j++)
            {
                if(i<j)
                printf(" %lf",mat[i][j]+1);
                else if(i==j)
                     printf(" %.8lf",mat[i][j]);
                else
                    printf(" %lf",mat[i][j]+1);
            }
            printf("\n");
        }

        for(i=0; i<s; i++)
        {
            if(i>0)
            printf("-%.8lf",t);
            else
                printf("%.8lf",t);
            for(j=1; j<s; j++)
            {
                if(j<i)
                printf(" -%.8lf",t);
            else
                 printf(" %.8lf",t);
            }
            printf("\n");
        }
    }
    return 0;
}
