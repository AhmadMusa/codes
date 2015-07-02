#include <stdio.h>
int main()
{
    freopen("input.txt","r",stdin);
    int t,cases=1;
    scanf("%d",&t);
    while(t--)
    {
        double total=0;
        int i =12;
        double m;

        while(i--)
        {
            scanf("%lf",&m);
            total+=m;
        }

        double avg= total /12;
        printf("%d ",cases++);
        if(avg > 999.0)
        {
            printf("$%ld",(long)(avg/1000.0));
            printf(",");
            double mod = fmod(avg,1000.0);
            printf("%.2lf\n",mod);
        }
        else
            printf("$%.2lf\n",avg);
    }
    return 0;
}
