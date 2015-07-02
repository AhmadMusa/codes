#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;

        int a[n];
        int i;
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);

        int max_sum= maxSubArraySum(a,n);
        if(max_sum==0)
            printf("Losing streak.\n");
        else
            printf("The maximum winning streak is %d.\n",max_sum);
    }
    return 0;

}
int maxSubArraySum(int a[], int size)
{
    int max_so_far=0, max_ending_here=0;
    int i;

    for(i=0; i<size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if(max_ending_here < 0)
            max_ending_here=0;

        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;

    }

    return max_so_far;
}

