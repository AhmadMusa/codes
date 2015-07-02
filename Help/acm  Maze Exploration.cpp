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
char str[102][102];
bool seen[102][102];
char farmer1 = 'X';
char farmer2 = '_';
int r ;
void flood(int i  , int j )
{
if( i<0 || i>=r || j<0 || j>=strlen(str[i]) || seen[i][j] || str[i][j]==farmer1 || str[i][j]==farmer2 )
        return;
    seen[i][j] = true;
    flood( i-1, j );
    flood( i+1, j);
    flood( i, j-1 );
    flood( i, j+1 );

}
int main()
{
    read("input.txt");
    int test;
    scanf("%d",&test); getchar();
    while(test--)
    {
        int i=0, nx=0 , ny=0 , f=1;
        while(1)
        {
            gets(str[i]);
            for(int j=0; f && j<strlen(str[i]); j++)
            {
                if(str[i][j]=='*')
                {
                    nx = i; ny = j; f=0;
                }
            }
            i++;
            if(str[i-1][0]=='_')  break;
        }

        r = i; mem(seen, false);


        flood(nx,ny);
        for(int st = 0; st<r ; st++)
        {
            for(int i=0; i<strlen(str[st]); i++)
            {
                if(seen[st][i]==true){
                        if(str[st][i]=='*' || str[st][i]==' ')
                        printf("#");
                else printf("%c",str[st][i]);
                }
                else  printf("%c",str[st][i]);
            }  printf("\n");
        }

    }
    return 0;
}
