#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;
#define MAX 2001
vector <int> edges[MAX];
int taken[2001];
int bfs(int src)
{
    queue <int> Q;
    Q.push(src);

    memset(taken,0,sizeof(taken));

    taken [src]=1;
   int count=0;
    while(!Q.empty())
    {
        int u=Q.front();Q.pop();
        for(int i=0; i<edges[u].size(); i++)
        {
            int v=edges[u][i];
            if(!taken[v])
            {

                taken[v]=1; Q.push(v);
            }
        }
    }
    return count;
}

int main()
{
    int nodes;
    while(scanf("%d",&nodes)==1 &&nodes)
    {
        int nodeno=1;
        while(1)
        {
            while(scanf("%d",&temp)==1 && temp){
            edges[nodeno].push_back(temp);
            }
            if(!edges[nodeno].size())
                break;
            else
                nodeno++;
        }
        int work;
        scanf("%d",work);
        while(work--)
        {
            int source;
            scanf("%d",&source);
          int found = bfs( source);
          int count = nodes-found;

printf("%d",count);
            for(int i=1;i<=nodes;i++)
            {
                if(!taken[i])
                {
                    printf(" %d",i);
                }
            }

           printf("\n");
        }
    }
}
