#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;
#define MAX 2001
vector <int> edges[MAX];
int bfs(int nodes,int src);
int main()
{
    freopen("cr.txt","r",stdin);
    int creatures, relations;
    while(scanf("%d %d",&creatures,&relations)==2)
    {
        int c=creatures;
        if(creatures==0 && relations==0)
            break;
        string names[5000];
        getchar();
        map <string, int> r;
        int p=1;
       for(int i=0;i<creatures;i++)
                    {
                        getline(cin,names[i]);
                        r[names[i]]=p++;

                    }
       for(int i=0;i<relations;i++)
       {
           string a , b;
cin>>a;
cin>>b;

           edges[r[a]].push_back(r[b]);
           edges[r[b]].push_back(r[a]);
       }
       int max=0;
       while(c){

       int count=bfs(creatures,c--);
       printf("%d-",count);
       if(max<count)
        max=count;
       }
       printf("%d\n",max);
    }
    return 0;
}

int bfs( int nodes,int src)
{
    queue < int> Q;
    Q.push(src);
     int taken[2001]={0},distance[2001]={0};
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
    int max=0;
    for(int i=1;i<=nodes;i++){
    max+=distance[i];
    }
return max;

}

