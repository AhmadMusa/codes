#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N,diff;
    int x,y;
    while(scanf("%d",&N)!=EOF)
    {
        diff=0;
        if(N==0) break;
        for(x=sqrt(N);x>0;x--)
        {
           if(diff==N) break;
           for(y=1;y<x;y++)
           {
             diff=(x*x*x)-(y*y*y);
             if(diff==N) break;
             else continue;

           }

        }
        if(diff!=N) printf("No solution\n");
        if(diff==N) printf("%d %d\n",x+1,y);
    }
    return 0;
}
