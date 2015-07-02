#include <stdio.h>
int main()
{
    int h[10000];
    int i=1,n, t;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%d",&n);
        int j=0;
        while(j<n)
        {
            scanf("%d",&h[j]);
            j++;
        }
    if(n==1)
        printf("Case %d: %d\n",i,h[0]);
    else
    {
    int temp,c=0;
    for(j=0;j<(n-1);j++)
    {
        if(h[j]>h[j+1])
        {
            temp=h[j];
            if(temp>c)
                c=temp;
        }
        else
        {
            temp=h[j+1];
            if(temp>c)
                c=temp;
        }

    }
    printf("Case %d: %d\n",i,c);
    }

        i++;
    }
    return 0;
}
