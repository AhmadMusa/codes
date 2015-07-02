#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>
#define INF 10000000
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
int fx[8]= {0,0,1,1,1,-1,-1,-1};
int fy[8]= {1,-1,0,-1,1,1,-1,0};
int r , c, count=0;
char str[102][102];
bool seen[102][102];
void flood(int i  , int j )
{

    if( i<0 || i>=r || j<0 || j>=c || seen[i][j] || (str[i][j]=='T' || str[i][j]=='#'))
        return;

    seen[i][j] = true;
    if(str[i][j]=='G')
        count++;
    if(str[i-1][j]=='T' || str[i+1][j]=='T' || str[i][j-1]=='T' || str[i][j+1]=='T')
        return ;
    flood( i-1, j );
    flood( i+1, j);
    flood( i, j-1 );
    flood( i, j+1 );
}
int main()
{
      freopen("input.txt","r",stdin);
     while(scanf("%d %d",&c,&r)==2)
    {

int flag=1, si, sj;
        getchar();
        for(int i =0 ; i<r; i++)
        {
            scanf("%s",&str[i]);
            for(int j =0;  flag && j<strlen(str[i]); j++)
            {
                if(str[i][j]=='P')
                {
                    flag=0;
                    si=i; sj=j;
                }
            }
        }

        mem(seen,false);
        flood(si,sj);

        printf("%d\n",count);
        count=0;
    }
}
