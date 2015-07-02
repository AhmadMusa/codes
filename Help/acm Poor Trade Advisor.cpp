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
int g[501][501];
bool mark[501];
int totalcity=0, t_value=0;
bool seen[501][501];
long  int cities, roads;
void flood(int i , int j)
{
    if(i<=0||i>cities || j<=0 || j>cities || seen[i][j] || g[i][j]==0)
        return;
    seen[i][j]=true;
    if(mark[i]==false)
    {
        mark[i]=true;
        totalcity++;
    }
    if(mark[j]==false)
    {
        mark[j]=true;
        totalcity++;
    }

    t_value+=g[i][j];

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

    while(scanf("%ld %ld",&cities,&roads)==2 && roads && cities)
    {
        mem(seen,false);
        mem(mark,false);
        mem(g,0);
        for(long int i =0; i<roads; i++)
        {
            int x, y, cost;
            scanf("%d %d %d",&x,&y,&cost);
            if(g[x][y]<cost)
                g[x][y]=cost;
        }
        int max_city=0, max_value=0 ;
        for(int i =1; i<=cities; i++)
        {
            for(int j =1; j<=cities; j++)
            {
                if(seen[i][j]==false && g[i][j]!=0)
                {
                    flood(i,j);
                    printf("%d %d\n",max_value,t_value);
                    if(max_value<=t_value)
                    {
                        max_value = t_value;
                        if(max_city<=totalcity)
                        {
                            max_city=totalcity;
                        }
                    }
                    totalcity=0, t_value=0;
                    mem(seen,false);
                    mem(mark,false);
                }
            }
        }
        printf("%d\n",max_city-1);

    }
    return 0;
}
