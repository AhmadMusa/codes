#include<cstdio>
#include <string.h>
#include <string>
#include <cctype>
#include<algorithm>
#include<queue>
#include<iostream>
#include<vector>
#include<map>
#define mem(x,y) memset(x,y,sizeof(x))
#define read(x) freopen(x,"r",stdin)
using namespace std;
bool seen[102][102];
int r, c, digit=0;
char str[102];
char graph[102][102];
int mark[102][102];
void flood(int i , int j, char c)
{
    if(i<0||i>=r || j<0 || j>=c || seen[i][j] || graph[i][j]!=c )
        return;
    seen[i][j]=true;
    mark[i][j]=digit;
    flood( i-1, j, c );
    flood( i+1, j, c);
    flood( i, j-1 , c);
    flood( i, j+1, c );
    flood(i+1,j+1, c);
    flood(i-1,j-1, c);
    flood(i+1,j-1, c);
    flood(i-1,j+1, c);
}

int main()
{
    read("input.txt");
    int i=0;
    while(gets(str))
    {
        if(str[0]!='%')
        {
//            cout<<str<<endl;
            int length=0, p=0;
            while(length<strlen(str))
            {
                if(str[length]!=' ')
                graph[i][p++]=str[length];
                length++;
            }
            i++;
        }
        else
        {
            mem(seen,false); mem(mark,0);
            r=i;
            c = strlen(graph[0]); //printf("%d %d ",r,c);
            i=0, digit=0;
            for(i =0 ; i<r; i++)
            {
                for(int j=0; j<c; j++)
                {
                    if(seen[i][j]==false)
                    {
                        digit++;
                        flood(i,j, graph[i][j]);
                    }
                }
            }
            for(i =0 ; i<r; i++)
            {
                for(int j=0; j<c; j++)
                {
                    if(mark[i][j])
                    printf("%d ",mark[i][j]);
                    else
                    printf(" ");
                }
                puts("");
            }

        }

    }
}
