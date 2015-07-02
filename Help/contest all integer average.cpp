#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int gcd(int n, int m);
int main()
{
    freopen("too.txt","r",stdin);
    int num,cases=1;
    while(scanf("%d",&num)==1 && num!=0)
    {
        int arr[num];
        long int total=0;
        int avg, upp_part=0, low_part;
        for(int i=0; i<num; i++)
        {
            scanf("%d",&arr[i]);
            total+=arr[i];
        }
        avg=total/num;
        if(total<0)
            upp_part=(-total)%num;
        else
            upp_part=total%num;

        if(upp_part>0)
        {
            low_part=num;
            int gcdnum=gcd(upp_part,low_part);
            if(gcdnum!=1)
            {
                upp_part/=gcdnum;
                low_part/=gcdnum;
            }
        }
        else
            low_part=0;
        printf("Case %d:\n",cases);

        int t;
        if(avg<0)
            t=-avg;
        else
            t=avg;
        //fractional
        if(upp_part!=0)
        {
            if(avg==0)
            {
                //upper part
                int o=floor(log10(low_part))-floor(log10(upp_part));
                 for(int k=0; k<o; k++)
                    printf(" ");
                if(total<0)
                    printf("  ");
                printf("%d\n",upp_part);

                if(total<0)
                    printf("- ");
                for(int k=0; k<floor(log10(low_part))+1; k++)
                    printf("-");
                printf("\n");

                 if(total<0)
                    printf("  ");
                printf("%d\n",low_part);
            }
            else
            {
                for(int k=0; k<floor(log10(low_part))+floor(log10(t))+1-floor(log10(upp_part)); k++)
                    printf(" ");
                if(avg<0)
                    printf("  ");
                printf("%d\n",upp_part);


                if(avg<0)
                    printf("- %d",-avg);
                else
                    printf("%d",avg);

                for(int k=0; k<floor(log10(low_part))+1; k++)
                    printf("-");
                printf("\n");


                for(int k=0; k<floor(log10(t))+1; k++)
                    printf(" ");
               if(avg<0)
                    printf("  ");
                printf("%d\n",low_part);
            }
        }
        else
        {
            if(total<0)
                    printf("- %d\n",-avg);
                else
                    printf("%d\n",avg);
        }
        cases++;
    }
    return 0;
}
int gcd(int m, int n)
{
    if ((m % n) == 0)
        return n;
    else
        return gcd(n, m % n);
}
