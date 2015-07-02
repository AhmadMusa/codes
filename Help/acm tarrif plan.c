#include <stdio.h>
int main()
{
    long long t, i=1;
    scanf("%lld",&t);
    while(i<=t)
    {
        long long n;
        scanf("%lld",&n);
        int a[20];
        int j=0,milec=0,juicec=0;
        while(j<n)
        {
            scanf("%d",&a[j]);
            milec=milec+mile(a[j]);
            juicec=juicec+juice(a[j]);
            j++;
        }
        if(milec==juicec)
            printf("Case %lld: Mile Juice %d\n",i,milec);
        else if(milec<juicec)
            printf("Case %lld: Mile %d\n",i,milec);
        else
            printf("Case %lld: Juice %d\n",i,juicec);


        i++;

    }
    return 0;
}

int mile(int n)
{
    int k=0,cost=0;
    if(n>=60){
        k=(n/60);
    n=n-k*60;
    }
    if(n<30)
        cost=cost+10;
    else if(n>=30 && n<60)
        cost = cost+20;
    cost=cost+ k*20;
    return cost;
}

int juice (int n)
{
    int k=0,cost=0;
    if(n>=60){
        k=(n/60);
    n=n-k*60;
    }
    if(n<60)
        cost=cost+15;
    cost=cost+k*15;
    return cost;
}
