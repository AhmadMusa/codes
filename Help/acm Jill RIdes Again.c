#include <stdio.h>
int main()
{
    int a[]={ 4,-1,3,-1,12};
    int n= sizeof(a)/sizeof(a[0]);
int route=1;
    int max_sum= maxSubArraySum(a,n);
    if(max_sum!=40000)
    printf("The nicest part of route %d is between stops %d and %d\n",route,max_sum+1,n);
   else
    printf("Route 3 has no nice parts\n");
    return 0;
}

int maxSubArraySum(int a[], int size)
{
    int max_so_far=0, max_ending_here=0;
    int i;
int count=40000,abs=0;
    for(i=0;i<size;i++)
    {
        max_ending_here = max_ending_here + a[i];
        if(max_ending_here < 0)
          {
              max_ending_here=0;
          }
        if(max_so_far < max_ending_here)
            {
                max_so_far = max_ending_here;

            }
    }

    return count;
}
