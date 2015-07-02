#include <stdio.h>
int main()
{
    int t,i=0,Case=1;
    while(scanf("%d",&t)==1)
    {

        if(t==0)
            break;
        int num[1000],count=0;
        for(i=0;i<t;i++)
        {
            scanf("%d",&num[i]);
            if(num[i]==0)
                count++;
        }
        printf("Case %d: %d\n",Case,t-count*2);
        Case++;
    }
    return 0;
}
