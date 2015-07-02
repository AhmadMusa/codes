/*ACCEPTED*/
#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>
#define INF 10000000
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
int r, c;
char g[201][201];
bool seen[201][201];
bool row[201];
bool col[201];
char farmer;
void flood(int i  , int j )
{
    if( i<0 || i>=r || j<0 || j>=c || seen[i][j] || g[i][j]!=farmer )
        return;
    seen[i][j] = true;
    row[i]=true;
    col[j]=true;
    flood( i-1, j );
    flood( i+1, j);
    flood( i, j-1 );
    flood( i, j+1 );
    flood(i+1,j+1);
    flood(i-1,j-1);
}
bool check1()
{
    for(int i =0; i<r; i++)
    {
        if(row[i]==false)
            return 0;
    }
    return 1;
}
bool check2()
{
    for(int i =0; i<r; i++)
    {
        if(col[i]==false)
            return 0;
    }
    return 1;
}
int main()
{
    freopen("input.txt","r",stdin);
    int game=1;
    while(scanf("%d",&r)==1 && r)
    {
        getchar();
        for(int i =0; i<r ; i++)
            scanf("%s",&g[i]);

        mem(seen,false);
        mem(row,false);
        mem(col,false);

        c= strlen(g[0]);
        int f=0;
        for(int i =0 ; i<r; i++)
        {
            farmer = 'w';
            mem(seen,false);
            flood(i, 0);
            if(check2()==1)
            {
                cout<<game++<<" "<<"W"<<endl;
                f=1;
                break;
            }
            else
            {
                mem(row,false);
                mem(col,false);
            }
        }
        if(f)
        {
            continue;
        }
        for(int i =0 ; i<c; i++)
        {
            farmer = 'b';
            mem(seen,false);
            flood(0, i);
            if(check1()==1)
            {
                cout<<game++<<" B"<<endl;
                break;
            }
            else
            {
                mem(row,false);
                mem(col,false);
            }
        }

    }
    return 0;
}

