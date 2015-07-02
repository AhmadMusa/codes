#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <string.h>
using namespace std;
#define MAX 2000
vector <int> edges[MAX];
int taken[2000];
int bfs(int src,int nodes)
{
    queue <int> Q;
    Q.push(src);

    memset(taken,0,sizeof(taken));
    int count=0;

    while(!Q.empty())
    {
        int u=Q.front();

        for(int i=0; i<edges[u].size(); i++)
        {
            int v=edges[u][i];
            if(!taken[v])
            {
                count++;
                taken[v]=1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    return count;
}

int main()
{
    freopen("input.txt","r",stdin);
    int nodes;
    while(scanf("%d",&nodes)==1 &&nodes)
    {
        int nodeno=1,temp;
        while(1)
        {
            int c=1;
            while(scanf("%d",&temp)==1 && temp)
            {
                if(c==1)
                    nodeno=temp;

                if(c>1)
                {
                    edges[nodeno].push_back(temp);
                }
  c++;
            }
            if(c==1)
                break;

        }
        int work;

        scanf("%d",&work);

        while(work--)
        {
            int source;
            scanf("%d",&source);
            int found = bfs( source,nodeno-1);

            int count = nodes-found;

            printf("%d",count);
            for(int i=1; i<=nodes; i++)
            {
                if(taken[i]==0)
                {
                    printf(" %d",i);
                }
            }
            printf("\n");
        }
        for(int i=1;i<=nodes;i++)
            edges[i].clear();
    }
    return 0;
}

