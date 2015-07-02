#include <stdio.h>
int main()
{
    long long n;
    while(scanf("%lld",&n)==1)
    {
        long long count=0;
        while(n!=0)
        {

            if((n&1)==0){
                    count++;
                n=n/2;
            }
            else
            {
                if(((n-1)/2)%2==0 || n-1==2){
                    count++;
                    n=n-1;
                }
                else
                {
                count++;
                n=n+1;
                }
            }

        }
        printf("%lld\n",count);
    }
    return 0;
}
