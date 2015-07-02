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
vector<int> edges[100001];
int save[100001];
int taken[100001] ;
vector<int> ans;
int bfs(int src,int d,int n)
{
    queue <int> Q;
    Q.push(src);
    memset(taken, 0, sizeof(taken));
    memset(save, -1, sizeof(save));
    taken [src]=1;
    int flag=0;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0; i<edges[u].size(); i++)
        {
            int v=edges[u][i];
            if(!taken[v])
            {
                taken[v]=1;
                Q.push(v);
                save[v]=u;
                if(v==d)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            ans.push_back(d);
            while(d!=src)
            {
                ans.push_back(save[d]);
                d=save[d];
            }
            return 1;
        }
        Q.pop();
    }
    return 0;
}
int main()
{
    read("input.txt");
    int test;
    scanf("%d\n",&test);
    while(test--)
    {
        int people;
        scanf("%d",&people);
        for(int i=0; i<people; i++)
        {
            int st, ed;
            scanf("%d %d",&st,&ed);
            for(int j=0; j<ed; j++)
            {
                int x;
                scanf("%d",&x);

                edges[st].push_back(x);
            }
        }
        int c1, c2;
        scanf("%d %d",&c1,&c2);
        bfs(c1,c2,people);
        printf("%d %d ",c1,c2);
        printf("%d\n",ans.size()-2);
        ans.clear();
        for(int j=0; j<=people; j++)
        {
            edges[j].clear();
        }
     if(test)
            printf("\n");
    }
}
