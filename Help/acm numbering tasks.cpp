#include<cstdio>
#include <string.h>
#include <string>
#include <cctype>
#include<algorithm>
#include<queue>
#include<iostream>
#include<vector>
#include<map>
#include <stack>
#define mem(x,y) memset(x,y,sizeof(x))
#define read(x) freopen(x,"r",stdin)
using namespace std;
vector<int> g[102];
stack <int> order;
bool visited[102];
void topsort(int v, stack<int> &order)
{
    visited[v]=true;

    for(int i=0; i<g[v].size() ; i++)
    {
        int curr = g[v][i];
        if(visited[curr]==false)
            topsort(curr, order);
    }
order.push(v);

}
int main()
{
    read("input.txt");
    int task , edge;
    while(scanf("%d %d",&task,&edge)==2 && task )
    {
        while(edge--)
        { int x, y;
        scanf("%d %d",&x,&y);
            g[x].push_back(y);
        }
        mem(visited,false);
        stack <int> order;
        for(int i =1 ; i<=task ; i++)
        {
            if(visited[i]==false)
                topsort(i, order);
        }
        while(order.size()>1)
        {
            cout<<order.top()<<" "; order.pop();
        }
        cout<<order.top()<<endl;
        for(int i=1 ; i<=task ; i++)
            g[i].clear();
    }

}
