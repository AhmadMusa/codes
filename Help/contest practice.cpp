#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    int n , i;
    while(scanf("%d",&n)==1)
    {
          long int arr[100];
         long int total=0;
         for(i=0;i<n; i++)
        {
            scanf("%ld",&arr[i]);
            total+=arr[i];
        }

        sort(arr,arr+n);
        long int target= total/2;
       long  int t=arr[0]+arr[n-1];
        int save=0;
int diff= target-t;


        for(i=1; i<n-1; i++)
        {
            t=arr[i]+arr[n-1];

            if(( target-t)<diff && (target-t)>=0)
            {

                save=i;
                diff=target-t;
            }
        }

total=0;
        for(i=0; i<n-1; i++)
        {
            if(i!=save)
                total+=arr[i];
        }

        if(total > (arr[n-1]+arr[save]))
            total= total- arr[save] - arr[n-1];
        else
        {
            total = arr[n-1]+arr[save]-total;
        }
        if(n!=1 && n!=2)
            printf("%ld\n",total);
        else if(n==1)
        {
            if(arr[0]%2==0)
                printf("0\n");
            else
                printf("1\n");
        }
        else
        {
            printf("%ld\n",(arr[1]-arr[0]));
        }
    }
    return 0;
}
