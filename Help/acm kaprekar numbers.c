#include <stdio.h>
int main()
{
    int arr[]= {1, 9, 45, 55, 99, 297, 703, 999 , 2223, 2728, 4879, 4950, 5050, 5292, 7272, 7777, 9999 , 17344, 22222, 38962, 77778, 82656, 95121, 99999, 142857, 148149, 181819, 187110, 208495, 318682, 329967, 351352, 356643, 390313};
    int t,cases=1;
    scanf("%d",&t);
    int save=t;
    while(t--)
    {
        long int low , high;
        scanf("%ld %ld",&low,&high);
        int i=0;
        int flag=0;
        printf("case #%d\n",cases++);
        for(i=0; i<34; i++)
        {
            if(arr[i]>high)
                break;
            if(arr[i]>=low && arr[i]<=high)
            {
                flag=1;
                printf("%ld\n",arr[i]);
            }
        }
        if(flag==0)
            printf("no kaprekar numbers\n");
        if(cases!=save+1)
            printf("\n");
    }
    return 0;
}
