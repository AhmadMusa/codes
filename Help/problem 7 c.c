#include <stdio.h>
int main()
{

    int mat[10][10];

    printf("Enter the row and column of the matrix : ");
    int r,c;
    scanf("%d %d",&r,&c);
    if(r!=c){
        printf("Not a magic sqaure matrix.\n");
        return 0;
    }
    int i,j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int sum1=0,sum2=0;
   /*Calculating the sum for one row*/
    for(j=0; j<c; j++)
        sum2+=mat[0][j];
/*checking for rows*/
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum1+=mat[i][j];

        }
        if(sum2!=sum1)
        {
            printf("Not a magic square matrix!\n");
            return 0;
        }
        else
            sum1=0;
    }
/*checking for columns*/
    for(j=0; j<c; j++)
    {
        for(i=0; i<r; i++)
        {
            sum1+=mat[i][j];

        }
        if(sum2!=sum1)
        {
            printf("Not a magic square matrix!!\n");
            return 0;
        }
        else
            sum1=0;
    }
    /*Checking for diagonals*/
    for(i=0,j=0; i<r,j<c; i++,j++)
    {
        sum1+=mat[i][j];

    }
    if(sum2!=sum1)
    {
        printf("Not a magic square matrix!!!\n");
        return 0;
    }
    else
        sum1=0;
    for(i=r-1,j=0; i>=0,j<c; i--,j++)
    {
        sum1+=mat[i][j];
    }
       if(sum2!=sum1)
    {
        printf("Not a magic square matrix!!!!\n");
        return 0;
    }
    else
        sum1=0;

    printf("It is a magic square matrix");
    return 0;
}
