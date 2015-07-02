#include <stdio.h>
#include <iostream>
#include <limits.h>
#include <stdlib.h>
using namespace std;
long int num[1000000];
int main()
{
    long int n , k;
    while(scanf("%ld %ld",&n,&k)==2)
    {

        long int i,j,ans=0;
        int total=INT_MAX;

        long int *sum;
        sum=(long int *)calloc(n,sizeof(long int));
        for(i=0; i<n; i++)
        {
            scanf("%ld",&num[i]);
            if(i>=k)
                j=i-k;
            else
                j=0;
            while(j<=i)
            {
                if(i-j<k)
                {
                    sum[j]+=num[i];
                }
                j++;
            }
        }
        total=sum[0];
        for(i=1; i<=n-k; i++)
        {
            if(total>sum[i])
            {
                total=sum[i];
                ans=i;
            }
        }
        printf("%d\n",ans+1);
    }
    return 0;
}


