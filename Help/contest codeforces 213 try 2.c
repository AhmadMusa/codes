#include <stdio.h>
#include <string.h>
#include <stdlib.h>
long  int arr[10001];
int main()
{
    long int n;
    while(scanf("%ld",&n)==1)
    {
        int i;
        int max=0;
        for(i=0;i<n;i++)
            scanf("%ld",&arr[i]);
        int curr=arr[1],count=0;

        for(i=0;i<n;i++)
        {
           if(i>=2)
           {
            if((arr[i-1]+arr[i-2])==arr[i])
            {
                count++;
                curr=arr[i];
            }
            else{
                    if(count>max)
                    max=count;
                count=0;
            }
           }
           else
            count++;
        }
   printf("%d\n",max);

}
 return 0;
}
