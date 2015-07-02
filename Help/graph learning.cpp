#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX 10000
vector <int> edges[MAX];
void bfs(int n,int src);
int in[MAX];
int out[MAX];
int main()
{
    freopen("new.txt","r",stdin);
    int n,e, i;
    scanf("%d %d",&n,&e);
    for(i=1; i<=e; i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        edges[x].push_back(y);
    }
    printf("Nodes Connected :\n\n\n");
    for(int j=1; j<=n; j++)
    {
        cout<<"Node No."<<j<<">>";
        int s=edges[j].size();
        for(int i=0; i < s ; i++)
        {
            printf("%d ",edges[j][i]);
            out[j]++;
            in[edges[j][i]]++;
        }
        printf("\n");
    }
    for(i=1; i<=n; i++)
    {
        cout<<" In:  "<<in[i]<<"   Out : "<<out[i]<<"\n";
    }
    bfs(n,1);
    return 0;
}

void bfs(int n,int src)
{
    queue <int> Q;
    Q.push(src);
    int taken[2001]= {0},distance[2001];
    taken [src]=1;
    distance [src]=0;
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
                Q.push(v);
            }
        }
        Q.pop();
    }
    for(int i=1; i<=n; i++)
        printf("%d\n",distance[i]);
}
