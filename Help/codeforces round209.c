#include <stdio.h>
int main()
{

     int i , j;
    while(scanf("%d %d",&i,&j)==2)
    {
        int m ,n ;
        int arr[i][j];
        int count=0;
        for(m=0;m<i;m++)
        {
            for(n=0;n<j;n++)
            {
                scanf("%d",&arr[m][n]);
                if(arr[m][n]==1)
                    {
                        if(n==0 || n==j-1 || m==0 || m==i-1 )
                        {
                            count++;
                        }
                    }
            }
        }

        if(count>0)
            printf("2\n");
        else
            printf("4\n");
    }
    return 0;
}
