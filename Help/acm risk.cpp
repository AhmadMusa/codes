#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <iterator>
using namespace std;
#define MAX 2001
vector < int> edges[MAX];

void bfs( int n,int src,int target);
int main()
{

     int test, t,i=1,count=1;

        while(scanf("%d",&test)==1){
        while(test--)
        {
            scanf("%d",&t);
            edges[i].push_back(t);
            edges[t].push_back(i);

        }
         i++;
            if(i==20)
            {
                i=1;
                 int cases;
        scanf("%d",&cases);

              printf("Test Set #%d\n",count++);
        while(cases--)
        {
            int src, target;
            scanf("%d %d",&src,&target);
        bfs(19,src,target);


        }
        printf("\n");
        for(int i=0; i<=20; i++)
            edges[i].clear();


            }
        }

    return 0;
}

void bfs( int n,int src,int target)
{
    queue < int> Q;
    Q.push(src);
     int taken[2001]= {0},distance[2001]= {0};
    taken [src]=1;
    distance [src]=0;
    int v;
    while(!Q.empty())
    {
        int u=Q.front();

        for(int i=0; i<edges[u].size(); i++)
        {
            v=edges[u][i];
            if(!taken[v])
            {
                distance[v]=distance[u]+1;
                if(v==target)
                    break;
                taken[v]=1;
                Q.push(v);
            }
        }

        Q.pop();
        if(v==target)
            break;
    }


printf("%2d to %2d:%2d\n",src,target,distance[target]);
}

