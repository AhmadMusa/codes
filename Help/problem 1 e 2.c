#include <stdio.h>
double* transpose(double *p,int r , int c);
int main()
{

    int i , j , r , c;
    printf("Enter row and column : ");
    scanf("%d %d",&r,&c);

    double mat1[r][c];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%lf",&mat1[i][j]);
    }

    double *p3 = transpose(mat1,r,c);
     printf("%.0lf %.0lf %.0lf\n%.0lf %.0lf %.0lf\n%.0lf %.0lf %.0lf",*(p3+0),*(p3+1),*(p3+2),*(p3+3),*(p3+4),*(p3+5),*(p3+6),*(p3+7),*(p3+8));
}

double* transpose(double *p,int r , int c)
{
    double mat2[c][r];
    int i , j;
    int row=0, col=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(row==c)
            {
                col++;
                row=0;
            }
            mat2[row++][col]=*p;
            p=p+1;
        }
    }

return mat2;
}
