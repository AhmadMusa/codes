#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int a[100000];
int main()
{

    long long int n,t,s=0;
    while(scanf("%lld",&n)==1)
    {
        s=0;
        if(n==0)
            break;

        long long int i=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,n);
        for(i=0; i<n-1; i++)
        {
            t=a[i+1]-a[i];
            if(t<0)
                t=-t;
            if(t>200)
            {
                printf("IMPOSSIBLE\n");
                s=1;
                break;
            }
        }
        if(s==0)
        {

        if((1422-a[n-1])>100)
            printf("IMPOSSIBLE\n");
        else
            printf("POSSIBLE\n");
        }
    }
    return 0;
}

int  sort(int a[],int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
            if(a[j]>a[j+1])
            {
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
    }
    return 0;
}
