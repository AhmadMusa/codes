#include <stdio.h>
int main()
{
    int ta=1,t;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0;
        scanf("%d",&n);
        int arr[n];
        int i;
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        for(i=0; i<n-1; i++)
        {
            if(arr[i+1]-arr[i]>0)
                count++;
        }

            printf("Case %d: %d\n",ta++,count);
    }
    return 0;
}
