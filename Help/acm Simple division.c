#include <stdio.h>
int main()
{
    long int num[1001];
    while(scanf("%ld",&num[0])==1)
    {
        if(num[0]==0)
            return 0;
        int i=0;
        long int n;
        while(1)
        {
            scanf("%ld",&n);
            if(n==0)
                break;
            else
                num[++i]=fabs(n-num[0]);
        }
        int temp=0;
        int k;
        while(temp!=i)
        {
            for(k=i; k>temp; k--)
            {
                if(num[k]<num[k-1])
                {
                    if(num[k]-num[k-1]!=0)
                    {
                        num[k]=fabs(num[k]-num[k-1]* (num[k]/num[k-1]));
                        printf("{%ld}",num[k]);
                    }
                    else
                        num[k]=num[k];
                }
                else
                {
                    if(num[k-1]-num[k]!=0)
                    {
                        num[k]=fabs(num[k-1]-num[k]* (num[k-1]/num[k]));
                        printf("{%ld}p",num[k]);
                    }
                    else
                        num[k]=num[k];
                }
            }
            ++temp;
        }

        printf("%d\n",num[k]);
    }
    return 0;
}
