#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int a[10000];
int comp(const void *a,const void *b)
{
    int *x=(int *)a;
    int *y=(int *)b;
    return *x-*y;
}
int main()
{
    long long int n , k;
    while(cin>>n>>k)
    {
        int i;
        for(i=0;i<k;i++)
            scanf("%d",&a[i]);

        qsort(a,k,sizeof(a[0]),comp);


        if(a[0]==1 && a[k-1]==n-1)
        {
            printf("NO\n");
            continue;
        }
        int flag=0;
        for(i=0;i<k-1;i++)
        {
            if(a[i+1]-a[i]==1)
            {
            flag++;
            if(flag==2)
            {
                printf("NO\n");
                break;
            }
            }
            else
                flag=0;
        }
        if(i==k-1)
            printf("YES\n");
    }
    return 0;
}
