#include <stdio.h>
#include <math.h>
int main()
{
    //freopen("input1.txt","r",stdin);
    //freopen("output1.txt","w",stdout);
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        long long count=0,temp=n;

        if(temp==1)
        {
            printf("1\n");
        }
        else
        {
            while(1)
            {
                count++;
                n=ceil(log10(n));
                if(n==1)
                    break;

            }
            if(temp>=10)
            {
                if( temp==100 || temp==1000 || temp==10000 || temp==100000 || temp==1000000)
                    printf("%lld\n",count+1);
                else if(temp==10)
                    printf("%lld\n",count+2);
                else
                    printf("%lld\n",count+1);
            }
            else
            {
                printf("%lld\n",count);
            }
        }
    }
    return 0;
}

