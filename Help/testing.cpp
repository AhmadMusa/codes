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
#define mx 10005
using namespace std;
vector< int >g[mx], cost[mx];
struct node
{
    int  u , w;
    node( int  a ,  int  b)
    {
        u=a;
        w = b;
    }
    bool operator<(const node& p ) const
    {
        return w > p.w;
    }
};
int  d[mx], par[mx];
void dijkstra(int start_node, int end_node)
{
    mem(d,10005);
    mem(par,-1);
    priority_queue<node>q;
    q.push(node(start_node,0));
    d[start_node]=0;
    while(!q.empty())
    {
        node top = q.top();
        q.pop();
        int  u = top.u;
        for( int  i=0; i<g[u].size(); i++)
        {
            int   v = g[u][i];
            if(d[u]+cost[u][i]<d[v])
            {
                d[v]=cost[u][i]+d[u];
                par[v]=u;
                q.push(node(v,d[v]));
            }
        }
    }
}
int  main()
{

    int test, cases=1 , nodes, edges;
    cin>>test;
    while(test--)
    {
        int   st, des, costs ;
        cin>>nodes>>edges;
        for( int   i=1; i<=edges; i++)
        {
            scanf("%d %d %d",&st,&des,&costs);
            g[st].push_back(des);
            g[des].push_back(st);
            cost[st].push_back(costs);
            cost[des].push_back(costs);
        }

        dijkstra(1,nodes);
        int cmp = d[nodes];
        vector<int>all_costs;

        for(int i=2; i<=nodes; i++)
        {
            int temp = d[i]*2 + d[nodes];
            if(temp!=cmp)
                all_costs.push_back(temp);
        }
        for(int i=2; i<=nodes; i++)
        {
            dijkstra(i,nodes);
            int temp = d[1] + d[nodes];
            if(temp!=cmp)
                all_costs.push_back(temp);
        }

        sort(all_costs.begin(), all_costs.end());
        if(all_costs.size()==0)
        {
            printf("Case %d: %d\n",cases++,d[nodes]);
        }
        else
        {
            printf("Case %d: %d\n",cases++,all_costs[0]);
        }
        for(int i=0; i<=nodes; i++)
        {
            g[i].clear();
            cost[i].clear();
        }
        all_costs.clear();
    }
}
