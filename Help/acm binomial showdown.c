#include <stdio.h>
int main()
{
    long long int n,k;
    while(scanf("%lld %lld",&n,&k)==2)
    {
        if(n==0 && k==0)
            break;
        else if(k==0)
            printf("%d\n",0);
        else
        {
            int i;
            int j;
            double sol=1;
            for(i=k,j=n;i>=1,j>n-k;i--,j--)
            {
             sol=(sol*j)/i;
            }
            printf("%.0lf\n",sol);
        }

    }
    return 0;
}
