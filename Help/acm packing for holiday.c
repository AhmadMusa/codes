#include <stdio.h>
int main()
{
    int t, i=1;
    scanf("%d",&t);
    while(i<=t)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a>=21 || b>=21 || c>=21)
            printf("Case %d: bad\n",i);
        else
            printf("Case %d: good\n",i);
        i++;
    }
    return 0;
}
