#include <stdio.h>
int main()
{
    int a[100], i, n,t, j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    for(i=1;i<n;i++)
    {
        if(a[0]>a[i])
        {
            t=a[0];
            a[0]=a[i+1];
            a[i+1]=t;
            break;
        }
    }

    for(i=0;i<n;i++)
        printf("%d",a[i]);

}

