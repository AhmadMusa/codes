#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int test=0,n;
    scanf("%d",&n);
    while(test<n)
    {
        char s[100];

        scanf("%s",&s);

        int i,sum1=0;
        double power;
        int t=0;
        for(i=0;i<3;i++)
        {
            power=pow(26,2-i);
            sum1+=(s[i]-65)*power;
        }

        for(i=4;i<=7;i++)
        {
            t=t*10 + s[i]-'0';

        }

        if(abs(t-sum1)>100)
            printf("not nice\n");
        else
            printf("nice\n");
        test++;

    }
    return 0;
}
