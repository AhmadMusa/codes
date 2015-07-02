#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int comp(const void *a,const void *b)
{
    int *x=(int *)a;
    int *y=(int *)b;
    return *x-*y;
}

int main()
{
    int test,n,i,sum,mid,middian,input[30002];
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&input[i]);
        }
        qsort(input,n,sizeof(input[0]),comp);
        mid=n/2;

        if(n&1==0)
            middian=(input[mid]+input[mid-1])/2;
        else
            middian=input[mid];
        sum=0;
        for(i=0; i<n; i++)
        {
            sum+=(labs(middian-input[i]));
        }
        printf("%d\n",sum);
    }
    return 0;
}

