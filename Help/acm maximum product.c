#include <stdio.h>
int main()
{


    long int n, i=0 ,j ,l=0, max=1, count=1;

    while(scanf("%ld",&n)!=EOF)
    {
        long int s[n];
        long int a[n];
        i=0;
        while(i<n)
        {
            scanf("%ld",&s[i]);
            i++;
        }
        printf("%d",s[0]);
        for(i=0;i<n;i++)
        {
            if(s[i]>0)
            {
                for(j=0;j<=l;)
                {
                    a[j]=s[i];
                    j++;
                }
                l++;
            }
        }
        printf("%d",a[0]);

        for(j=0;j<n;j++)
        {
            max=max* a[j];
        }

        if(max>0)
            printf("Case #%d: The maximum product is %ld.\n\n",count,max);
        else
            printf("Case #%d: The maximum product is 0.\n\n",count);
        count++;
        i=0 ,j=0;

    }
return 0;
}
