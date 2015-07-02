#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>
#define INF 10000000
using namespace std;
int g[1005][1005];
queue <int> q;
int fx[4]={0,0,1,-1};
int fy[4]={1,-1,0,0};

int main()
{
//    freopen("input.txt","r",stdin);
    int   r, c ;
    while(scanf("%d %d",&r,&c)==2 &&r &&c)
    {
        for(int i=0;i<1005;i++)
            memset(g[i], -1, sizeof(g[i]));
        int input;
        scanf("%d",&input);
        while(input--)
        {
            int row;
            int in ;
            scanf("%d %d",&row,&in);
            while(in--)
            {
                int tmp;
                scanf("%d",&tmp);
                g[row][tmp]=INF;
            }
        }

        int sourceC, sourceR, desC, desR;

        scanf("%d %d %d %d",&sourceR,&sourceC,&desR,&desC);
        g[sourceR][sourceC]=0;
        q.push(sourceR);
        q.push(sourceC);

        while(!q.empty())
        {
            int r1 = q.front();
            q.pop();
            int c1 = q.front();
            q.pop();

            for(int i =0 ; i<4;i++)
            {
                int r2 = r1+fx[i];
                int c2 = c1+fy[i];
                if(r2>=0 && r2<r && c2>=0 &&c2<c && g[r2][c2]<0)
                {
                    g[r2][c2]=g[r1][c1] + 1;
                    q.push(r2);
                    q.push(c2);
                }
            }
        }
        printf("%d\n",g[desR][desC]);
    }
}
