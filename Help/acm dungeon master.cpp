#include <iostream>
#include <utility>
#include <string>
#include <cstdio>
#include <queue>
#include <vector>
#include <map>
#include <cstring>
#define mem(x,y) memset(x,y,sizeof(x))
#define pii pair<int,int>
using namespace std;
int fx[4]= {  0, 0, 1,-1 };
int fy[4]= { 1,-1, 0, 0 };
int fz[2]= {1,-1};
int dim, r, c;
char str[31][31][31];
bool taken[31][31][31];
int cost[31][31][31];
struct node
{
    int d;
    int x;
    int y;
};
bool valid(int nd, int nx , int ny)
{
    if(nd>=0 && nd<dim && nx>=0 && nx<r && ny>=0 && ny<c )
        return true;
    else
        return false;
}

int bfs(node nodex)
{
    queue <node> q;
    q.push(nodex);
    mem(taken,false);
    mem(cost,0);
    taken[nodex.d][nodex.x][nodex.y]=1;
    int count=0,flag=0;
    while(!q.empty())
    {
        node ns = q.front();
        q.pop();
        for(int i =0 ; i<4; i++)
        {
            int nd = ns.d;
            int nx = ns.x+fx[i];
            int ny =ns.y+fy[i];
            if(valid(nd,nx,ny) && taken[nd][nx][ny]!=1 && (str[nd][nx][ny]=='.' || str[nd][nx][ny]=='E'))
            {
                node nw;
                nw.d= nd;
                nw.x=nx;
                nw.y= ny;
                taken[nd][nx][ny]=1;
                q.push(nw);
                cost[nd][nx][ny]= cost[ns.d][ns.x][ns.y]+1;

                if(str[nd][nx][ny]=='E')
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag) break;
        for(int i =0 ; i<2; i++)
        {
            int nx = ns.x;
            int ny =ns.y;
            int nd = ns.d + fz[i];
            if(valid(nd,nx,ny) && taken[nd][nx][ny]!=1 && (str[nd][nx][ny]=='.' || str[nd][nx][ny]=='E'))
            {
                node nw;
                nw.d= nd;
                nw.x=nx;
                nw.y= ny;
                taken[nd][nx][ny]=1;
                q.push(nw);
                cost[nd][nx][ny]= cost[ns.d][ns.x][ns.y]+1;

                if(str[nd][nx][ny]=='E')
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag) break;
    }
    return flag;
}

int main()
{
    freopen("input.txt","r",stdin);
    while(scanf("%d %d %d\n",&dim,&r,&c)==3 &&dim&&r&&c)
    {
        mem(str,-1);
        int sx, sy, sz, dx, dy, dz;
        for( int i =0 ; i<dim; i++)
        {
            for(int j=0; j<r; j++)
            {
                scanf("%s",&str[i][j]);
            }
        }

        for(int i =0 ; i<dim ; i++)
        {
            for(int j =0; j<r; j++)
            {
                for(int k =0 ; k<c; k++)
                {
                    if(str[i][j][k]=='S')
                    {
                        sx=i;
                        sy=j ;
                        sz=k;
                    }
                    else if(str[i][j][k]=='E')
                    {
                        dx=i;
                        dy=j;
                        dz=k;
                    }
                }
            }
        }
        node nodex ;
        nodex.d=sx;
        nodex.x=sy;
        nodex.y=sz;

        int ans = bfs(nodex);
        if(ans)
        {
           printf("Escaped in %d minute(s).\n",cost[dx][dy][dz]);
        }
        else
            cout<<"Trapped!"<<endl;

    }
    return 0;
}

