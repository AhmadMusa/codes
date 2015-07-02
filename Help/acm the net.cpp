#include <cctype>
#include<algorithm>
#include<queue>
#include <cstdio>
#include<iostream>
#include<vector>
#include <cstring>
#include<map>
using namespace std;
vector<int> edges[20000];
int parent[20000];
int taken[20000] ;
int bfs(int src,int d,int n);
vector<int> ans;
int main()
{

    freopen("input.txt","r",stdin);
    int nodes;
    while(scanf("%d",&nodes)==1 &&nodes)
    {
        int snode=nodes;
        printf("-----\n");
        int query;
        int x, opp;
        char c,y;
        while(nodes--)
        {
            scanf("%d",&x);
            int flag=0;
            getchar();
            while(1)
            {
                opp=0;
                while(scanf("%c",&c)==1)
                {
                    if(c==',' || c=='\n')
                    {
                        if(opp==0 && c=='\n')
                        {
                            flag=1;
                            break;
                        }
                        else{

                        edges[x].push_back(opp);

                        opp=0;
                        if(c=='\n')
                        {
                            flag=1;
                            break;
                        }
                        }
                    }
                    else
                        opp= (opp*10)+c-'0';
                }
                if(flag==1)
                    break;
            }
        }
        scanf("%d",&query);
        while(query--)
        {
            int x, y;
            scanf("%d %d",&x,&y);
            int s = bfs(x,y,nodes);
            if(s==0)
                cout<<"connection impossible"<<endl;
            else
            {
                int s=ans.size();
                for(int i=s-1; i>0; i--)
                    cout<<ans[i]<<" ";
                cout<<ans[0]<<endl;
            }
            ans.clear();
        }
        for(int j=0; j<=snode; j++)
        {
            edges[j].clear();
        }
    }
    return 0;
}

int bfs(int src,int d,int n)
{
    queue <int> Q;
    Q.push(src);

    memset(taken, 0, sizeof(taken));
    memset(parent, -1, sizeof(parent));

    taken [src]=1;
    int flag=0;
    while(!Q.empty())
    {
        int u=Q.front();

        for(int i=0; i<edges[u].size(); i++)
        {
            int v=edges[u][i];
            if(!taken[v])
            {
                taken[v]=1;
                Q.push(v);
                parent[v]=u;
                if(v==d)
                {
                    flag=1;
                    break;
                }
            }
        }

        if(flag==1)
        {
            ans.push_back(d);
            while(d!=src)
            {
//                printf("{%d}",parent[d]);
                ans.push_back(parent[d]);
                d=parent[d];
            }
            return 1;
        }
        Q.pop();
    }
    return 0;
}
