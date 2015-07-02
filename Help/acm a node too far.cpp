#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;
#define MAX 2001
vector <int> edges[MAX];
int bfs(int ttl,int src,int max);
int main()
{
    freopen("input.txt","r",stdin);
    int cases=1;
    int i, nodes;
    while(scanf("%d",&nodes)==1)
    {
        map<int,int> mymap;
        int x,y,max=0;
        int p=1;
        for(i=1; i<=nodes; i++)
        {
            scanf("%d %d",&x,&y);
            if(mymap.find()==mymap.end())
                mymap[x]=p++;
            if(mymap.find()==mymap.end())
                mymap[y]=p++;
            if(mymap[x]!=mymap[y])
            {
                edges[mymap[x]].push_back(mymap[y]);
                edges[mymap[y]].push_back(mymap[x]);
            }
        }
        while(scanf("%d %d",&x,&y)==2)
        {
            if(x==0 && y==0)
                break;
            int count=bfs(y,mymap[x],p-1);
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cases++,count,x,y);
        }
        for(int i=0; i<=p; i++)
        {
            edges[i].clear();
        }
    }
    return 0;
}

int bfs(int ttl,int src,int max)
{
    queue <int> Q;
    Q.push(src);
    int taken[2001]= {0};
    int distance[2001]= {0};
    taken [src]=1;
    distance [src]=0;
    int co=1;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0; i<edges[u].size(); i++)
        {
            int v=edges[u][i];
            if(!taken[v])
            {
                distance[v]=distance[u]+1;
                taken[v]=1;
                co++;
                Q.push(v);
            }
        }
        Q.pop();
    }
     int count=0;

    if(co!=max)
        count=max-co;

    for(int i=1; i<=max; i++)
    {
        if(distance[i]>ttl)
            count++;
    }
    return count;

}
