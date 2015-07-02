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
int save[20000];
int taken[20000] ;
int bfs(int src,int d,int n);
int main()
{
    int add;
    while(scanf("%d",&add)==1 && add)
    {
        for(int i =0 ; i<=add; i++)
        {
            int cost;
            scanf("%d",&cost);
            allcost[i]=cost;
        }

    }
}


