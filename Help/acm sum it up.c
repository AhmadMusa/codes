#include <stdio.h>
int main()
{
    int t , n;
    while (scanf("%d",&t)==1)
    {
        scanf("%d",&n);

        int i,j, num[n];
        for(i=0;i<n;i++)
            scanf("%d",&num[i]);

        for(i=0;i<n;i++)
        {
            if(num[i]>t)
                continue;
            else if(num[i]==t)
                printf("%d\n",t);
            else
            {
                for(j=n-1;j>=0;j--)
                {
                    sum+=num[j];
                    if(sum==t)
                    {
                        printf("")
                    }
                }
            }
        }
    }
    return 0;
}
