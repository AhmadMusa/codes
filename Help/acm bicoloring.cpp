#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <iterator>
using namespace std;
#define MAX 2001
vector <long int> edges[MAX];
void bfs(long int n,int src)
{
    queue <long int> Q;
    Q.push(src);
    long int taken[2001]= {0},distance[2001]= {0};


    int v,flag=0;
    while(!Q.empty())
    {
        int u=Q.front();
        if(!taken[u])
        {
            taken[u]=1;
        }
        for(int i=0; i<edges[u].size(); i++)
        {
            v=edges[u][i];
            if(!taken[v])
            {
                if(taken[u]==1)
                    taken[v]=2;
                else
                    taken[v]=1;
                Q.push(v);
            }
            else
            {
                if(taken[u]==taken[v])
                {
                    flag=1;
                    break;
                }
            }
        }
        Q.pop();
        if( flag==1)
                {

                    printf("NOT BICOLORABLE.\n");
                    break;
                }
    }
    if(flag==0)
        printf("BICOLORABLE.\n");

}

int main()
{
    freopen("cr.txt","r",stdin);
    int n, e;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        scanf("%d",&e);
        while(e--)
        {
            int a, b;
            scanf("%d %d",&a,&b);
            edges[a].push_back(b);
            edges[b].push_back(a);
        }
        bfs(n,0);
        for(int i=0;i<n;i++)
            edges[i].clear();

    }
}
