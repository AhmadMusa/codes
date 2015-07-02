#include <bits/stdc++.h>
using namespace std;
int savePosition[10];
int savedQueen[100][10];
int size=8;
int times=0;
bool isSafe(int row, int col)
{
    for(int i=0; i<row; i++)
    {
        if(savePosition[i]==col)
            return false;
        if(fabs(i-row)==fabs(savePosition[i]-col))
            return false;
    }
    return true;
}
void printSolution()
{
    printf(" %d : \n",times);
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(savedQueen[times][i]==j)
            {
                printf(" Q ");
            }
            else
                printf(" - ");
        }
        printf("\n\n");
    }
}
void nQueen(int row)
{
    for(int i=0; i<size; i++)
    {
        if(isSafe(row,i)==true)
        {
            savePosition[row]=i;
            if(row==size-1)
            {

                for(int k=0; k<size; k++)
                {
                    savedQueen[times][k] = savePosition[k];
                }
//                printSolution();
                times++;
                return;
            }
            else   nQueen(row+1);
        }
    }
}
int main()
{
//    freopen("output.txt","w",stdout);
    memset(savePosition,-1,sizeof(savePosition));
    memset(savedQueen,-1,sizeof(savedQueen));
    times=0;
    nQueen(0);

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x, y;
        scanf("%d %d",&x,&y);
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        int count=0;
        for(int i=0; i<93; i++)
        {
            if(savedQueen[i][y-1]==(x-1))
            {
                printf("%2d      ",++count);
                for(int j=0; j<size-1; j++)
                {
                    printf("%d ",savedQueen[i][j]+1);
                }
                printf("%d\n",savedQueen[i][size-1]+1);
            }

        }
        if(t)
            printf("\n");
    }
    return 0;
}

