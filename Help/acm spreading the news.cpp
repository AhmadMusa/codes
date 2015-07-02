#include<cstdio>
#include <string.h>
#include <string>
#include <cctype>
#include<algorithm>
#include<queue>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> edges[9000];
int dis[9000];
int taken[9000];
int bfs(int src,int node);
vector < int > maxnum[9000];
int main()
{
    freopen("input.txt","r",stdin);
    int nodes;
    while(scanf("%d",&nodes)==1 && nodes)
    {
        int nodeno=0, saveno = nodes;
        while(nodes--)
        {
            int t;
            scanf("%d",&t);

            while(t--)
            {
                int x ;
                scanf("%d",&x);
                edges[nodeno].push_back(x);
            }
            nodeno++;
        }

        int query;
        scanf("%d",&query);
        while(query--)
        {
            int src;
            scanf("%d",&src);
            int s = bfs(src,nodes);
            int max=0,count=0,flag=0;
            sort(dis , dis + saveno);
            for(int i=0;i<saveno;i++)
                maxnum[i].clear();
            for(int i=0; i<saveno; i++)
            {
                maxnum[dis[i]].push_back(1);
            }

            int maxsize=0, save=0;
            for(int i=1; i<=dis[saveno-1]; i++)
            {
                if(maxnum[i].size()>maxsize)
                {
                    maxsize=maxnum[i].size();
                    save=i;
                }
            }
            if(maxsize)
                printf("%d %d\n",maxsize,save);
            else
                printf("0\n");
        }
        for(int i=0; i<saveno; i++)
            edges[i].clear();
    }
    return 0;
}



int bfs(int src,int node)
{

    memset(taken, 0, sizeof(taken));
    memset(dis, 0, sizeof(dis));
    queue <int> Q;
    Q.push(src);

    dis[src]=0;
    taken[src]=1;

    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0 ; i<edges[u].size() ; i++)
        {
            int v=edges[u][i];
            if(!taken[v])
            {
                dis[v]=dis[u]+1;
                taken[v] = 1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    return 0;
}
