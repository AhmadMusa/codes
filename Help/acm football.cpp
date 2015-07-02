#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#define INF 10000000
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
int diff[1000001];
int main()
{
    freopen("input.txt","r",stdin);
    long int match, point;
    while(scanf("%ld %ld",&match,&point)==2)
    {
        long int con =0, draw=0, win=0;
        for(int i =0; i<match; i++)
        {
            long int x, y;
            scanf("%ld %ld",&x,&y);
            if(x<y)
            {
                diff[con++]=y-x;
            }
            if(x==y)
                draw++;
            if(x>y)
                win++;
        }
        sort(diff,diff+con);
        while(point && draw)
        {
            win++;
            draw--;
            point--;
        }
        for(int i =0; i<con && point; i++)
        {
            if(diff[i]<=point)
            {
                if(diff[i]==point)
                    draw++;
                else
                    win++;
                point = point - diff[i]-1;
            }
        }
        printf("%ld\n",win*3 + draw);
    }

    return 0;
}
