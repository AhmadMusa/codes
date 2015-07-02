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
int fx[4]= { 0, 0,  1, -1};
int fy[4]= { 1, -1, 0, 0 };
int r, c;
struct node
{
    int x;
    int y;
};
char str[25][25];
bool taken[25][25];

struct node node1, node2;
int bfs(node nodex)
{
    queue <node> q;
    q.push(nodex);
    mem(taken,false);
    taken[nodex.x][nodex.y]=1;
    int count=0;
    while(!q.empty())
    {
        node ns = q.front();
        q.pop();
        for(int k =0; k<4; k++)
        {
            int nx = ns.x +fx[k];
            int ny = ns.y +fy[k];
            if(nx>=0 && nx<r && ny>=0 && ny<c && taken[nx][ny]!=1 &&(str[nx][ny]=='.'))
            {
                node nw ;
                nw.x=nx;
                nw.y =ny;
                taken[nx][ny]=1;
                q.push(nw);
                count++;
            }
        }
    }
    return count;
}

int main()
{

    int test,cases=1;
    scanf("%d",&test);
    while(test--)
    {

        scanf("%d %d\n",&c,&r);
        int sx, sy;

        for( int i =0 ; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                scanf("%c",&str[i][j]);
                if(str[i][j]=='@')
                {
                    sx=i;
                    sy=j;
                }
            }
            getchar();
        }
        node nodex ;
        nodex.x=sx;
        nodex.y=sy;
        int ans = bfs(nodex);
        cout <<"Case "<<cases++<<": "<< ans+1 << endl;
    }
}
