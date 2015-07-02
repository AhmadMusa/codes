#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        int number;
        scanf("%d",&number);
        int fix=1;
        if(number<0)
            fix=-1;
        int diff=-1;
        int diffwhile;

        while(number--)
        {
            int x, y;
            scanf("%d %d",&x,&y);
            diffwhile = fabs(x-y);
            if(diff==-1)
                diff= diffwhile;
            else if(diff!=diffwhile)
                fix=-1;
        }
        if(fix==-1)
            printf("no\n");
        else
            printf("yes\n");
        if(t!=0)
            printf("\n");
    }
    return 0;
}
