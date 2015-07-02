#include <stdio.h>
int main()
{
    int n, i=1, sum=1, count=0;
    while(scanf("%d",&n)==1)
    {

        if(n<0)
            break;
        if(n==1)
            printf("Case %d: %d\n",i,0);
        else
        {
            while(sum<=n)
            {
                sum=sum*2;
                count++;
                if(sum==n)
                    break;
            }
            printf("Case %d: %d\n",i,count);
            sum=1, count=0;

        }
        i++;
    }


    return 0;
}
