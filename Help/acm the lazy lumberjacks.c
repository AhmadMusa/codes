#include <stdio.h>
int main()
{
    int t, i=0;
    scanf("%d",&t);
    while(i<t)
    {
        double a,b,c,d;
        scanf("%lf %lf %lf",&a,&b,&c);
        d=(a+b+c)/2;
        if(d>a && d>b && d>c)
            printf("OK\n");
        else
            printf("Wrong!!\n");
        i++;
    }
}
