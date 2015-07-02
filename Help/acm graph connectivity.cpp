#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <iterator>
#include <string.h>
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
#define MAX 4000

vector < int> edges[MAX];
bool seen[MAX];

void DFS(int node)
{
    if(seen[node]==true)
    {
        return;
    }
    seen[node]=true;
    for(int k =0 ; k<edges[node].size(); k++)
    {
        int v= edges[node][k];
        DFS(v);
    }

}
int main()
{
    freopen("input.txt","r",stdin);
    int test, t=1;
    scanf("%d\n",&test);

    int cases=test;
    while(test--)
    {

char str[3];
 gets(str);

 int nodes= str[0]-64;

 for(int i=1; i<=nodes; i++)
            edges[i].clear();

        while(gets(str) && str[0])
        {
            int d1,d2;
            d1=str[0]-64, d2=str[1]-64;
            edges[d1].push_back(d2);
            edges[d2].push_back(d1);
        }

        int count=0;
mem(seen,false);

        for(int i=1; i<=nodes; i++)
        {
           if(seen[i]==false)
           {
               ++count;
               DFS(i);
           }
        }
        printf("%d\n",count);
        if(t!=cases)
            printf("\n");

        t++;
    }
    return 0;
}
