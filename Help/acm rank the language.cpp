/*ACCEPTED*/
#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <map>
#include <cstring>
#define INF 10000000
#include <algorithm>
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
int r , c;
char farmer;

map<char, int> ans;
vector<char> realans[202];
vector <int> num;

char str[202][202];
bool seen[202][202];
void flood(int i  , int j )
{
    if( i<0 || i>=r || j<0 || j>=c || seen[i][j] || str[i][j]!=farmer )
        return;
    seen[i][j] = true;
    flood( i-1, j );
    flood( i+1, j);
    flood( i, j-1 );
    flood( i, j+1 );
}

int main()
{
    freopen("input.txt","r",stdin);
    int t, test=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&r,&c);
        getchar();
        for(int i=0; i<r; i++)
            scanf("%s",&str[i]);
        mem(seen,false);
        for(int i =0; i<r; i++)
        {
            for(int j=0; j<c ; j++)
            {
                if(seen[i][j]==false)
                {
                    farmer=str[i][j];
                    flood(i,j);
                    ans[str[i][j]]++;
                }
            }
        }
        map<char,int>::iterator it;
        for(it=ans.begin(); it!=ans.end(); it++)
        {
            int n = it->second;
            realans[n].push_back(it->first);
            num.push_back(n);
        }
        printf("World #%d\n",test++);
        sort(num.begin(), num.end());
        for(int i =num.size()-1; i>=0; i--)
        {
            if(num[i]!=num[i-1] || i==0)
            {
                if(realans[num[i]].size()>1)
                {
                    int u= num[i];
                    sort(realans[num[i]].begin(), realans[num[i]].end());
                    for(int j =0; j<realans[num[i]].size(); j++)
                    {
                        cout<<realans[num[i]][j]<<": "<<u<<endl;
                    }
                }
                else
                {
                    cout<<realans[num[i]][0]<<": "<<num[i]<<endl;
                }
            }
        }
        for(int i=0; i<202; i++)
            realans[i].clear();
        ans.clear();
        num.clear();
    }
    return 0;
}

