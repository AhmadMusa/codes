#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>
#define INF 10000000
using namespace std;
int fx[8]={0,0,1,1,1,-1,-1,-1};
int fy[8]={1,-1,0,-1,1,1,-1,0};
int main()
{
    freopen("input.txt","r",stdin);

    int r , c;
    while(scanf("%d %d",&r,&c)==2 &&r &&c)
    {
        char str[102][102];
        for(int i =0 ; i<r ;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>str[i][j];
            }
            getchar();
        }
        int count=0;
        for(int i =0 ; i<r ;i++)
        {
            int k;
            for(int j=0;j<c;j++)
            {
                if(str[i][j]=='*'){
                for( k=0; k<8; k++)
                {
                    int r1 = i + fx[k];
                    int c1 = j +fy[k];
               if(r1>=0 && r1<r &&c1>=0&&c1<c)
               {
                   if(str[r1][c1]=='*')
                    break;
               }
                }
                if(k==8)
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }

}
