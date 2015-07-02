#include <stdio.h>
#include <stdlib.h>
double* matrix(double *p1, double *p2);
int main()
{
    double matrix1[3][3];
    double matrix2[3][3];
    printf("Enter two matrix one by one :\n");
    int row, column;
    int add=0,i;
    for(row=0; row<3; row++)
    {
        for(column =0 ; column <3 ; column ++)
        {
            scanf("%lf",&matrix1[row][column]);
        }
    }

    for(row=0; row<3; row++)
    {
        for(column =0 ; column <3 ; column ++)
        {
            scanf("%lf",&matrix2[row][column]);
        }
    }
    double *p1=&matrix1, *p2=&matrix2;
    double *p3;

    p3= matrix(p1,p2);
    printf("%.0lf %.0lf %.0lf\n%.0lf %.0lf %.0lf\n%.0lf %.0lf %.0lf",*(p3+0),*(p3+1),*(p3+2),*(p3+3),*(p3+4),*(p3+5),*(p3+6),*(p3+7),*(p3+8));

}

double* matrix(double *p1, double *p2)
{
    double mat3[3][3];
    double *p3=&mat3;
    int row, column=0,add=0, i, rown=0, rownew=0,columnnew=0;
    double temp=0;
    for(row=0; row<9; row+=3)
    {
        for(i=0; i<3; i++)
        {
            rown=rownew;
            for(column=row; column<(row+3); column++)
            {
                temp+=(*(p1+column)*(*(p2+rown)));
                rown+=3;
            }
            *(p3+add)=temp;
            add++;
            temp=0;
            rownew++;
        }
    }
    return p3;
}


