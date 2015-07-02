#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int test,count=0;
    scanf("%d",&test);
    while(count<test)
    {
        long  l, index;
        double sum;
        scanf("%lld",&l);
        if(l==1)
            printf("1\n");
        else
        {
        /* log(1) + ... + log(N-1) + log(N) */
        for (sum = 0, index = 1; index <= l; index++)
            sum += log10((double)index);

        /* CEILING[(log(1) + ... + log(N-1) + log(N))] */
        printf("%.0f\n",sum);
        sum = ceil(sum);


        }
        count++;
    }

    return 0;
}
