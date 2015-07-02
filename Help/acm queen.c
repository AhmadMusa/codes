#include <stdio.h>
int main()
{
    long long x1,y1,x2,y2;
    while(scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2)==4)
    {
        if(x1==0 && y1==0 && x2==0 && y2==0)
            return 0;

        if(x1==x2 && y1==y2)
            printf("0\n");
        else if(x1==x2 || y1==y2)
            printf("1\n");
        else if(fabs(x1-x2)==fabs(y1-y2))
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
