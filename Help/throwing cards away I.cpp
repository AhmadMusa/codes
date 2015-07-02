#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
int main()
{
    long int n;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            return 0;

        int num[n+1];

        for(long int i=1; i<=n; i++)
            num[i]=1;

        int flag=1,count=0;
        printf("Discarded cards:");
        for(long int i=1;; i++)
        {
            if(i>n)
                i=1;
            if(num[i]!=-1)
            {
                if(flag==1)
                {
                    printf(" %ld",i);
                    num[i]=-1;
                    flag=0;
                    count++;
                    if(count==n-1)
                        break;
                    else
                        printf(",");
                }
                else
                    flag=1;
            }
        }
        for(long int i=1; i<=n; i++)
        {
            if(num[i]==1)
            {
                printf("\nRemaining card: %d\n",i);
                break;
            }
        }
    }
    return 0;
}
