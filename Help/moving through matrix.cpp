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
char g[100][100];
using namespace std;
void flood(int i , int j)
{
    if(g[i][j]=='\\')
    {
        if(g[i][j+1]=='\\')
        flood(i+1,j);
        else
        {
            flood(i,j+1);
        }
    }
    else if(g[i][j]=='/')
    {

    }

}
int main()
{
   char c;
   c='\\';
   cout<<c;
}

