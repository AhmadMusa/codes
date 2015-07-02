#include <stdio.h>
#include <stdlib.h>
int comp(const void *a,const void *b)
{
    int *x=(int *)a;
    int *y=(int *)b;
    return *x-*y;
}
int main()
{
    //freopen("inputbus.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,d,r;
    while(scanf("%d %d %d",&n,&d,&r)==3)
    {
        if(n==0 && d==0 && r==0)
            break;

        int day[100],i, due=0, night[100];
        int temp;
        for(i=0;i<n;i++)
            scanf("%d",&day[i]);
        for(i=0;i<n;i++)
            scanf("%d",&night[i]);

        qsort(day,n,sizeof(day[0]),comp);
        qsort(night,n,sizeof(night[0]),comp);

        for(i=0;i,i<n;i++)
        {


            if(day[i]+night[n-i-1]>d)
                due+=((night[n-i-1]+day[i])-d)*r;


        }


        printf("%d\n",due);
    }
    return 0;
}
