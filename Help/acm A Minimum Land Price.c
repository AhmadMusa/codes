#include <stdio.h>
#include <math.h>
long int taka[10000];
long int comp(void const *a, void const *b)
{
    long int *x= (long int *)a;
    long int *y= (long int *)b;
    return *x-*y;
}
int main()
{
    int no;
    scanf("%d",&no);
    while(no--)
    {
        int i=-1;
        while(scanf("%ld",&taka[++i])==1)
        {
            if(taka[i]==0)
                break;
        }
        int t=i;

        qsort(taka,t,sizeof(taka[0]),comp);

        int j=1;
        double temp;
        long long int total =0;
        for(i=t-1; i>=0; i--)
        {

            temp=pow(taka[i],j++);

            total += 2*temp;
        }
        if(total >5000000)
            printf("Too expensive\n");
        else
            printf("%lld\n",total);
    }

    return 0;
}
