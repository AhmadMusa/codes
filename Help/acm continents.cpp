#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>
#define INF 10000000
#define mem(x,y) memset(x,y,sizeof(x))
#define READ(x) freopen(x,"r",stdin)
using namespace std;

int r , c, count=0;
char farmer='l';
char str[102][102];
bool seen[102][102];
void flood(int i  , int j )
{
    if( i<0 || i>=r || j<0 || j>=c || seen[i][j] || str[i][j]!=farmer )
        return;
    seen[i][j] = true;
    count++;
    if(j==0)
        flood(i,c-1);
    if(j==c-1)
        flood(i,0);
    flood( i-1, j );
    flood( i+1, j);
    flood( i, j-1 );
    flood( i, j+1 );
}
int main()
{
  READ("input.txt");

    while(scanf("%d %d",&r,&c)==2)
    {
        getchar();
        for(int i =0 ; i<r; i++)
        {
            scanf("%s",&str[i]);
        }

        mem(seen,false);
        int x, y ;
        scanf("%d %d",&x,&y);
        farmer = str[x][y];
        flood(x,y);
        count=0;
        int max=0;

        for(int i =0 ; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(seen[i][j]==false && str[i][j]==farmer)
                {

                    flood(i,j);
                    if(count>max)
                        max=count;
                    count=0;
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
