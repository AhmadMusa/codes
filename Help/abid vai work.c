/*
*****-----
*****-----
*****-----
----------
----------
----------
*/
#include <stdio.h>
int main()
{
    int r,c,i,j;
    printf("enter row and column number \n");
    scanf ("%d%d",&r,&c);
    for(i=1; i<=r; i++)
    {
        for (j=1; j<=c; j++)
        {
            if (i<=3 &&j<=5)
            {
                printf("*");
            }
            else printf("-");
        }
        printf ("\n");
    }


return 0;
}
