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
char g[102][102];
bool visit[102][102];
int co, r, c;
void flood(int i , int j)
{
    if(i<0||i>=r || j<0 || j>=c || visit[i][j] || g[i][j]=='.')
        return;
    visit[i][j]=true;
    if(g[i][j]=='x')
        co++;
     flood( i-1, j );
    flood( i+1, j);
    flood( i, j-1 );
    flood( i, j+1 );
}
int main()
{
    read("input.txt");
    int dataset, cases=1;
    scanf("%d",&dataset);
    while(dataset--)
    {
        int dim ;
        scanf("%d",&dim);
        getchar(); r=dim, c=dim;
        for(int i=0; i<r; i++)
            scanf("%s",&g[i]);
        mem(visit,false);
        int ans =0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c ; j++)
            {
                if(g[i][j]!='.')
                {
                    flood(i,j);
                    if(co)
                        ans++;
                    co=0;
                }
            }
        }

        printf("Case %d: %d\n",cases++,ans);

    }
}
