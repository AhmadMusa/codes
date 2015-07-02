#include <stdio.h>
int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int mat3[3][3];
    int r1=3,c1=3,r2=3,c2=3;

    //printf("Enter two dimensions : \n");
    int n;
   // scanf("%d %d",&r1,&c1);
    //scanf("%d %d",&r2,&c2);

    printf("Enter two matrix one by one :\n");

    int row, i, column;

    for(row=0; row<r1; row++)
    {
        for(column =0 ; column <c1 ; column ++)
        {
            scanf("%d",&matrix1[row][column]);
        }
    }

    for(row=0; row<r2; row++)
    {
        for(column =0 ; column <c2 ; column ++)
        {
            scanf("%d",&matrix2[row][column]);
        }
    }

    int rown=0,temp=0;
    printf("\n\n");

    /*Matrix multiplication*/

    printf("Result of the multiplication is : \n");

    for(row = 0; row<r1; row++)
    {
        rown=0;
        for(i=0; i<r1; i++)
        {
            for(column =0 ; column <c1; column++)
            {
                temp+= matrix1[row][column] * matrix2[column][rown];
            }
            mat3[row][i]=temp;
            temp=0;
           rown++;
        }


    }

    for(row=0;row<3;row++)
    {
        for(column=0;column<3;column++)
        {
            printf("%5d",mat3[row][column]);
        }
        printf("\n");
    }

}


