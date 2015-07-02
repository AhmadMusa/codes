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
void bfs(long int n,int src);

int main()
{
//freopen("cr.txt","r",stdin);
   long  int n,e, i;
    long int test, t=1;
    scanf("%ld",&test);

    while(test--)
    {

    scanf("%ld %ld",&n,&e);
    for(i=1; i<=e; i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        edges[x].push_back(y);
//        if(x!=0)
        edges[y].push_back(x);
    }
if(t!=1)
    printf("\n");
    t++;
 bfs(n,1);

for(int i=0;i<=n;i++)
    edges[i].clear();
    }
    return 0;
}

void bfs(long int n,int src)
{
    queue <long int> Q;
    Q.push(src);
    long int taken[2001]={0},distance[2001]={0};
    taken [src]=1;
    distance [src]=0;
    while(!Q.empty())
    {
        int u=Q.front();

        for(int i=0;i<edges[u].size();i++)
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
    for(int i=1;i<=n;i++){
            if(i==n-1)
        printf("%ld ",distance[i]);
    else
         printf("%ld ",distance[i]);
    }

}
