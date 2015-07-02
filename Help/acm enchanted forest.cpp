#include <iostream>
#include <utility>
#include <string>
#include <cstdio>
#include <queue>
#include <vector>
#include <map>
#include <cstring>
#include <cmath>
#define mem(x,y) memset(x,y,sizeof(x))
#define f(in) freopen("in.txt","r",stdin)
using namespace std;
int fx[8]= {0,0,1,-1,1,1,-1,-1};
int fy[8]= {1,-1,0,0,-1,1,-1,1};
int r, c, time;

struct node
{
    int x;
    int y;
};
int cost[201][201];
int taken[201][201];
bool valid(int x, int y)
{
    if(x>=1 && x<=r && y>=1 && y<=c)
        return true;
    else
    return false;
}
bool dis(int x2, int y2, int x1, int y1)
{
    double t = time;
    double t2 =  (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    t2=sqrt(t2);

    if(t2<=t)
        return true;
    return false;
}
int bfsans()
{
    queue<node> q;
    node input;
    input.x=1, input.y=1;
    q.push(input);
    mem(cost,0);
    int flag=0, f=0;
    if(taken[input.x][input.y]==true)
    {
        cout<<"Impossible."<<endl;
        return 0;
    }
    taken[input.x][input.y]=true;
    while(!q.empty())
    {
        int x= q.front().x;
        int y = q.front().y;
        q.pop();
        for(int i =0 ; i<4; i++)
        {
            int nx = x+fx[i], ny = y+fy[i];
            if(valid(nx,ny) && taken[nx][ny]==false)
            {
                taken[nx][ny]=true;
                node p;
                cost[nx][ny]=cost[x][y]+1;
                p.x=nx, p.y=ny;
                q.push(p);
                if(nx==r && ny==c)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag) break;
    }
    if(flag==1)
        cout<<cost[r][c]<<endl;
    else
        cout<<"Impossible."<<endl;
}
int bfs(node in, int time)
{
    queue <node> q;
    q.push(in);
    taken[in.x][in.y]=true;
    while(!q.empty())
    {
        int x= q.front().x;
        int y = q.front().y;
        q.pop();

        for(int i =0 ; i<8; i++)
        {
            int nx = x+fx[i];
            int ny = y+fy[i];
            if(valid(nx,ny) && taken[nx][ny]==false)
            {
                if(dis(nx,ny,in.x,in.y))
                {
                    taken[nx][ny]=true;
                    node p;
                    p.x=nx, p.y=ny;
                    q.push(p);
                }
            }
        }
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    while(scanf("%d %d",&r,&c)==2&&r&&c)
    {
        mem(taken,false);
        int blocks;
        scanf("%d",&blocks);
        while(blocks--)
        {
            int x, y;
            scanf("%d %d",&x,&y);
            taken[x][y]=true;
        }
        int guards;
        scanf("%d",&guards);
        while(guards--)
        {
            int x, y ;
            scanf("%d %d %d",&x,&y,&time);
            node in;
            in.x=x;
            in.y=y;
            bfs(in,time);
        }
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(taken[i][j]==true)
                    cout<<"1";
                else
                    cout<<"0";
            }
            puts("");
        }

        bfsans();
    }
}

