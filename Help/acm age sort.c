#include <stdio.h>
#include <stdlib.h>
int array[2000000];
int comp(const void *a,const void *b)
{
    int *x=(int *)a;
    int *y=(int *)b;
    return *x-*y;
}

int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;

    int i;

    for(i=0;i<n;i++)
        scanf("%d",&array[i]);

    qsort(array,n,sizeof(array[0]),comp);


    for(i=0;i<n-1;i++)
        printf("%d ",array[i]);
    printf("%d\n",array[n-1]);


}
return 0;
}
