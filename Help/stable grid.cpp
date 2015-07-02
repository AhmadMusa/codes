#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
int findelement(vector <int> target, int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int g[100][100];
        int n;
        scanf("%d",&n);
        int i, j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                {
                    scanf("%d",&g[i][j]);
                }
        }
vector<int> target;
int c=0,flag=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==0 && j==0)
                    target.push_back(g[i][j]);
                else
                {
                    if(findelement(target, g[i][j])==0)
                        {
                            target.push_back(g[i][j]);
                            break;
                        }
                }
            }
            if(j==n)
            flag=1;
        }
        if(flag==0)
            printf("Yes\n");
        else
            printf("No\n");

    }
}
int findelement(vector <int> target, int n)
{
    vector<int>:: iterator it;
    for(it=target.begin();it!=target.end();it++)
    {
        if(*it==n)
            return 1;
    }

    return 0;
}
