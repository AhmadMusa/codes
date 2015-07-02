#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>
#include <string>
#define INF 10000000
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
string str;
string g[1000];
char farmer='0';
bool seen[102][102];
int row, col, count=0;
void flood(int i  , int j )
{
    if( i<1 || i>row || j<0 || j>=col || seen[i][j] || g[i].at(j)!=farmer )
      {
          return;
      }
    seen[i][j] = true;
    count++;
    flood( i-1, j );
    flood( i+1, j);
    flood( i, j-1 );
    flood( i, j+1 );

}
int main()
{
    freopen("input.txt","r",stdin);
    int dataset, f=0;
    scanf("%d\n",&dataset);
    while(dataset--)
    {
         if(f==1)
            printf("\n");
        int r , c, i=1;
        scanf("%d %d",&r,&c);
        getchar();

      while(getline(cin,str))
      {
          if(str.size()==0)
            break;
         g[i++]=str;
         col=str.size();
      }

      row=--i;
      flood(r,c-1);
      cout<<count<<endl;

      count=0;
      mem(seen,false);
f=1;
    }
    return 0;
}
