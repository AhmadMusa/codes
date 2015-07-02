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
bool seen[102][102];
int r, c;
char graph[102][102];
void flood(int i , int j)
{
    if(i<0||i>=r || j<0 || j>=c || seen[i][j] || graph[i][j]!='1' )
        return;
    seen[i][j]=true;
     flood( i-1, j );
    flood( i+1, j);
    flood( i, j-1 );
    flood( i, j+1 );
    flood(i+1,j+1);
    flood(i-1,j-1);
    flood(i+1,j-1);
    flood(i-1,j+1);
}
int main()
{
    read("input.txt");
    int dim,cases=1 ;
    while(scanf("%d",&dim)==1)
    {
        getchar();
        r= dim, c=dim;
        for(int i=0; i<r; i++)
        {
            scanf("%s",graph[i]);
        }
        mem(seen,false);

        int count=0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(seen[i][j]==false && graph[i][j]=='1')
                {
                    count++;
                    flood(i,j);
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",cases++,count);
    }
    return 0;
}
