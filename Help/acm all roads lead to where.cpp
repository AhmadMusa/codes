#include<cstdio>
#include <string.h>
#include <string>
#include <cctype>
#include<algorithm>
#include<queue>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> edges[20000];
int save[20000] ;
int taken[20000] ;
int bfs(int src,int d,int n);
vector<int> ans;
int main()
{
    freopen("cr.txt","r",stdin);

    int t,newline=0;
    scanf("%d\n",&t);

   while(t--){
        int edge, quest;
   scanf("%d %d",&edge,&quest);

        if(newline>0)
            printf("\n");
        newline++;
        map <string, int> n;
        map <int , string> n2;
        int length=1;

        string a,b;
        getchar();
        while(edge--){
            cin>>a>>b;
            if(n.find(a)==n.end())
            {
                n[a]=length++;
                n2[length-1]=a;
            }
            if(n.find(b)==n.end())
            {
                n[b]=length++;
                n2[length-1]=b;
            }

            edges[n[a]].push_back(n[b]);
            edges[n[b]].push_back(n[a]);
        }
while(quest--){
        cin>>a>>b;

        if(n.find(a)==n.end() || n.find(b)==n.end())
        {
            printf("No route\n");

        }

        else
        {
            int s = bfs(n[a],n[b],length-1);

            if(s==0)
                cout<<"No route"<<endl;
            else
            {
                int s=ans.size();
                for(int i=s-1;i>=0;i--)
                    cout<<n2[ans[i]][0];
            }
            cout<<endl;
            ans.clear();
        }
}
        for(int j=1; j<=length; j++)
        {
            edges[j].clear();
        }

        n.clear();
        n2.clear();


    }
    return 0;
}

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

