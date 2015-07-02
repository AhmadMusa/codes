#include<cstdio>
#include <string.h>
#include <string>
#include <cctype>
#include<algorithm>
#include<queue>
#include<iostream>
#include<vector>
#include <stack>
#include<map>
#define mem(x,y) memset(x,y,sizeof(x))
#define read(x) freopen(x,"r",stdin)
using namespace std;
map<string , int> ind;
vector <int> g[201];
map<int, string> get;
bool visited[201][201];
int INDEG[201];

vector<int> TOPOLOGICAL_SORT(int node)
{

    priority_queue<int> Q;

    for(int n=1; n<node; n++)
    {
        if(INDEG[n] == 0)
        {
            Q.push(-n);
        }
    }

    vector<int> topoList;

    while( !Q.empty())
    {
        int N = -Q.top();
        Q.pop();
        topoList.push_back(N);
        for(int M=0; M<g[N].size(); M++)
        {
            if(visited[N][M]==false)
            {
                INDEG[g[N][M]]--;
//                visited[N][M]=true;
                if(INDEG[g[N][M]] == 0)
                {
                    Q.push(-g[N][M]);
                }
            }
        }
    }
    return topoList;
}



int main()
{
    read("input.txt");
    int noOfBev , cases=1;
    while(scanf("%d",&noOfBev)==1)
    {
        getchar();
        int p=1;
        while(noOfBev--)
        {
            string in;
            cin>> in;
            if(ind.find(in)==ind.end())
            {
                ind[in]=p++;
                get[p-1]=in;
                INDEG[p-1]=0;
            }
        }
        int order;
        scanf("%d",&order);
        getchar();
        while(order--)
        {
            string in, out;
            cin>>in>>out;
            g[ind[in]].push_back(ind[out]);
            INDEG[ind[out]]++;
        }
        mem(visited,false);
vector<int>ordering = TOPOLOGICAL_SORT(p);
        printf("Case #%d: Dilbert should drink beverages in this order: ",cases++);
        int i;

 for( i=0; i<ordering.size()-1; i++)
    {
        cout << get[ordering[i]] << " " ;
    }
     cout << get[ordering[i]] << "."<<endl;
        for(int i=1 ; i<p ; i++)
            g[i].clear();
        get.clear() ;
        printf("\n");
        ind.clear();
        getchar();
    }
    return 0;

}
