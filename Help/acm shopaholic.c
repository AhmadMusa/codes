#include <stdio.h>
#include <stdlib.h>
int comp(void const *a, void const *b)
{
    int *x=(int*) a;
    int *y= (int*) b;
    return *x-*y;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int shop[n];

        int i=0;
        long int sum=0;
        while(i<n)
        {
            scanf("%d",&shop[i]);
            i++;
        }

        qsort(shop,n,sizeof(shop[0]),comp);

        i=n-3;
        while(i>=0)
        {
            sum+=shop[i];
            i=i-3;
        }

        printf("%ld\n",sum);
    }
    return 0;
}
