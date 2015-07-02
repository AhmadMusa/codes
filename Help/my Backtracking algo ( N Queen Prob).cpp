#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define N 4

int ColumnTaken[20]= {};
int RowTaken[20];
int matrix[N][N] = { {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
};


bool checkIfSafe( int positionX, int positionY)
{

    if(ColumnTaken[positionY])
        return false;


    if(RowTaken[positionX])
        return false;


    int i, j;
    for(i=positionX, j=positionY; i>=0, j>=0; i--, j--)
    {
        if(RowTaken[positionX] || ColumnTaken[positionY] || matrix[i][j])
            return false;
    }

    for(i=positionX, j=positionY; i>=0, j<N; i--, j++)
    {
        if(RowTaken[positionX] || ColumnTaken[positionY] || matrix[i][j])
            return false;
    }

    return true;

}

bool setQueen( int positionX, int positionY)
{

    int i=positionX+1, j;

    if(i>=N)
        return true;

    for(j=0; j<N; j++)
    {

        if(checkIfSafe( i,j)==true)
        {

            RowTaken[i]=1;
            ColumnTaken[j]=1;
            matrix[i][j]=1;
            if(setQueen( i,j )==false)
            {
                RowTaken[i]=0;
                ColumnTaken[j]=0;
                matrix[i][j]=0;
            }
            else
                return true;
        }
    }
    return false;

}

int main()
{

    memset(RowTaken,0,sizeof(RowTaken));
    memset(ColumnTaken,0,sizeof(ColumnTaken));
    RowTaken[0]=1;
    ColumnTaken[0]=1;
    matrix[0][0]=1;
    int x =0;
    while(1)
    {
        if(setQueen(0,x)==false)
        {
            RowTaken[0]=0;
            ColumnTaken[x]=0;
            matrix[0][x]=0;
            x++;
            RowTaken[0]=1;
            ColumnTaken[x]=1;
            matrix[0][x]=1;
        }
        else
            break;
    }

    int i, j;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

}

