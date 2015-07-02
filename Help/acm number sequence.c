#include <stdio.h>
unsigned long long int num[2147483];
int main()
{
    long long int i,n,test;
    scanf("%llu",&test);
    while(test--)
    {
        scanf("%llu",&n);
        unsigned long long int counter=0,a=1,sum=1;
        num[-1]=1;
        for(i=0; sum<=n; i++)
        {
            a++;
            sum+=a;
            if(sum>9)
            {

                while(sum>9)
            {
                num[counter++]=sum%10;
                sum=sum/10;
            }
            }
            else
                num[counter++]=sum;

        }



    }
    return 0;
}
