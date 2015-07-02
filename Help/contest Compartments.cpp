#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    long int n;
    while(scanf("%ld",&n)==1)
    {
        int num[n];
        int sum=0,count=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
            if(num[i]==4 || num[i]==3)
                count++;
        sum=sum+num[i];
        }
        int ans;
        if((n-count)!=0)
        ans= (sum/(n-count))-count;
        else
            ans=0;
        printf("%d\n",ans);

    }
    return 0;
}
