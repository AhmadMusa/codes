#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int comp(void const *a , void const *b)
{
    int *x = (int *)a;
    int *y = (int *) b;
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
        int i, array[n];
        long int sum=0,avg,total=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);

        }

        /*sort the array*/
        qsort(array,n,sizeof(array[0]),comp);
        printf("%d",(array[n-1]-array[0])*2);
    }
    return 0;
}
