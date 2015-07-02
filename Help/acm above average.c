#include <stdio.h>
int main()
{

    int a,i,n,j, k=0,count=0;
    float ans, sum=0,average;
    int num[1000];

    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        scanf("%d",&j);
        a=0;
        while(a<j)
        {
            scanf("%d",&num[a]);
            sum=sum+num[a];
            a++;
        }


        average = sum/j;
        k=0;
        while(k<j)
        {
            if(num[k]>average)
                count++;
            k++;
        }
        count=count*100;
        ans=(float)count/j;
        printf("%.3f%%\n",ans);
        sum=0,count=0;
        i++;
    }
    return 0;
}
