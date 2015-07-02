//ACCEPTED
#include<cstdio>
#include <string.h>
#include <string>
#include <cctype>
#include<algorithm>
#include<queue>
#include<iostream>
#include<vector>
#include<map>
#define mem(x,y) memset(x,y,sizeof(x))
#define read(x) freopen(x,"r",stdin)
using namespace std;
char g[13][20];
bool seen[13][20];
int total=0;
int balls=0;
void flood(int i , int j, char c)
{
    if(i<0||i>=10 || j<0 || j>=15 || seen[i][j] || g[i][j]!=c )
        return;
    seen[i][j]=true;
    total++;
    flood( i-1, j , g[i][j]);
    flood( i+1, j , g[i][j]);
    flood( i, j-1 , g[i][j]);
    flood( i, j+1 , g[i][j]);

}

void  destroy(int i , int j, char c)
{
    if( i<0||i>=10 || j<0 || j>=15 || seen[i][j] || g[i][j]!=c )
        return;
    g[i][j]='0';
    balls++;
    seen[i][j]=true;
    destroy( i-1, j , c);
    destroy( i+1, j , c);
    destroy( i, j-1 , c);
    destroy( i, j+1 , c);

}
int main()
{
    read("input.txt");
    int dataset,games=1;
    scanf("%d\n",&dataset);
    while(dataset--)
    {
        int moves=1;
        printf("Game %d:\n\n",games++);
        int col=15;
        long int totalsum=0, totalballs=0;
        for(int i=0; i<10; i++)
            scanf("%s",&g[i]);
        int nx, ny, maximum = 0;

        mem(seen, false);
        /* checking from root to find the best starting point */
        int p=0;

        for(int j=0; j<col; j++)
        {
            for(int i =9 ; i>=0; i--)
            {
                if(g[i][j]!='0' && seen[i][j]==false)
                {
                    flood(i,j,g[i][j]);
                    if(total>maximum )
                    {
                        maximum = total;
                        nx=10-i;
                        ny =j+1;
                    }
                    total=0;
                }
            }
        }
        if(maximum==1)
        {
            printf("Final score: 0, with 150 balls remaining.\n");
            if(dataset)
                printf("\n");
            continue;
        }

        while(maximum >1)
        {

            mem(seen,false);

            char color = g[10-nx][ny-1];
            destroy(10-nx,ny-1,g[10-nx][ny-1]);

            /* */

            for(int i=9; i>=0; i--)
            {
                for(int j =0 ; j<col; j++)
                {
                    int p = i, l = j ;
                    while(g[i][j]=='0' && p>=0)
                    {
                        if(g[p--][l]!='0')
                        {
                            g[i][j] = g[p+1][l];
                            g[p+1][l]='0';
                        }
                    }
                }
            }
            int i, c=0, t_c=0  ;

            for(int j = 0 ; j<col; j++)
            {
                c=0;
                t_c=0;
                for( i=9 ; i>=0 ; i--)
                {
                    if(g[i][j]!='0')
                    {
                        break;
                    }
                    else
                        c++;
                }
                if(c==10)
                {
                    while(g[9][j]=='0' && t_c <(15-j) )
                    {
                        int p=j;

                        for( p=j;  p<14; p++)
                        {
                            for(int i=9 ; i>=0 ; i--)
                            {
                                g[i][p] = g[i][p+1];
                                g[i][p+1]='0';
                            }
                        }
                        t_c++;
                    }
                }
            }


            printf("Move %d at (%d,%d): removed %d balls of color %c, got %d points.\n",moves++,nx,ny,balls,color,(balls-2)*(balls-2));
            totalsum+=(balls-2)*(balls-2);
            totalballs+=balls;
            balls=0;
            maximum = 0 ;
            mem(seen,false);
            for(int j=0; j<col; j++)
            {
                p=0;
                for(int i =9 ; i>=0; i--)
                {
                    if(g[i][j]!='0' && seen[i][j]==false)
                    {
                        flood(i,j,g[i][j]);
                        if(total>maximum)
                        {
                            maximum = total;
                            nx=10-i;
                            ny =j+1;
                        }
                        total=0;
                    }

                }
            }

        }
        if(maximum==0)
        {
            printf("Final score: %ld, with 0 balls remaining.\n",totalsum+1000);
        }
        else
        {
            printf("Final score: %ld, with %d balls remaining.\n",totalsum,150-totalballs);
        }
        if(dataset)
            printf("\n");
    }
}
