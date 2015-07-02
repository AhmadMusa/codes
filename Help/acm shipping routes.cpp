#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <string.h>
using namespace std;
#define MAX 20000
vector <int> edges[MAX];
vector<int> ans;
int save[20000];
int taken[20000];
int bfs(int src,int d,int n);
int bfs(int src,int d,int n)
{
    queue <int> Q;
    Q.push(src);

    memset(taken, 0, sizeof(taken));
    memset(save, -1, sizeof(save));

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
                save[v]=u;
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
                ans.push_back(save[d]);
                d=save[d];
            }
            return 1;
        }

        Q.pop();
    }
    return 0;
}

int main()
{
    freopen("input.txt","r",stdin);
    int data,test=1;
    scanf("%d",&data);
    printf("SHIPPING ROUTES OUTPUT\n");
    while(data--)
    {
        int nodes ,  edge,  query, length=1;
        scanf("%d %d %d\n",&nodes,&edge,&query);
        string a,b;
        map <string, int> n;
        map <int , string> n2;
        printf("\nDATA SET %2d\n\n",test++);
        while(nodes--)
        {
            cin>>a;
            if(n.find(a)==n.end())
            {
                n[a]=length++;
                n2[length-1]=a;
            }
        }

        while(edge--)
        {
            cin>>a>>b;
            edges[n[a]].push_back(n[b]);
            edges[n[b]].push_back(n[a]);
        }
        while(query--)
        {
            int product;
            ans.clear();
            cin>>product;
            cin>>a>>b;
            getchar();


            if(n.find(a)==n.end() || n.find(b)==n.end())
            {
                printf("NO SHIPMENT POSSIBLE\n");
            }
            else
            {
                if(n[a]==n[b])
                {
                    printf("$%d\n",product*100*0);
                }
                else
                {
                    int s = bfs(n[a],n[b],length-1);

                    if(s==0)
                        cout<<"NO SHIPMENT POSSIBLE"<<endl;
                    else
                    {
                        int s=ans.size()-1;
                        printf("$%d\n",product*100*s);
                    }
                }
            }
        }
        for(int j=1; j<=length; j++)
        {
            edges[j].clear();
        }
        ans.clear();
        n.clear();
        n2.clear();
        if(data==0)
        {
            printf("\n");
            printf("END OF OUTPUT\n");
        }
    }
    return 0;
}


