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
char g[51][51];
bool seen[51][51];
int point[51][51];
int digit=0, r, c;

void flood(int i , int j)
{
    if(i<0 || i>=r || j<0 || j>=c || seen[i][j] || g[i][j]=='.')
        return;
    seen[i][j]=true;

    point[i][j]=digit;
    flood(i,j+1);
    flood(i,j-1);
    flood(i-1,j);
    flood(i+1,j);
}

void mark(int i , int j)
{
    if(i<0 || i>=r || j<0 || j>=c || seen[i][j] || g[i][j]!='X')
        return;
    seen[i][j] = true;

    digit++;
    mark(i,j+1);
    mark(i,j-1);
    mark(i-1,j);
    mark(i+1,j);
}
int main()
{
    read("input.txt");
    int cases=1;
    while(scanf("%d %d\n",&c,&r)==2 && r && c)
    {

        for(int i=0; i<r; i++)
            scanf("%s",&g[i]);
        mem(seen,false);
        mem(point,0);
        int ans[500], loop=0;
        mem(ans,0);
        digit=1;
        for(int i =0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(seen[i][j]==false && g[i][j]!='.')
                {
                    flood(i,j);
                    digit++;
                }
            }
        }


        loop=digit;

        digit=1;
        mem(seen,false);
        for(int i =0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(seen[i][j]==false && g[i][j]=='X')
                {
                    mark(i,j);
                    if(digit)
                        ans[point[i][j]]++;
                    digit=1;
                }
            }
        }
        printf("Throw %d\n",cases++);

        sort(ans,ans+loop);
        for(int i=1; i<loop-1; i++)
            cout<<ans[i]<<" ";
        cout<<ans[loop-1]<<endl;

cout<<endl;
    }
    return 0;
}

