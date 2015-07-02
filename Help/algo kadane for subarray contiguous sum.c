#include <stdio.h>
int main()
{
    int a[]={-2,-1,-2};
    int n= sizeof(a)/sizeof(a[0]);

    int max_sum= maxSubArraySum(a,n);

    printf("Max sum = %d\n",max_sum);

    return 0;
}
int maxSubArraySum(int a[], int size)
{
    int max_so_far=0, max_ending_here=0;
    int i;

    for(i=0;i<size;i++)
    {
        max_ending_here = max_ending_here + a[i];
        if(max_ending_here < 0)
            max_ending_here=0;

        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;

    }

    return max_so_far;
}
