#include <stdio.h>
#include <math.h>
int main()
{
    double num;
    double ans,inv, n;

    while(scanf("%lf %lf",&n,&num)==2)
    {
        ans=pow(num,1/n);
        printf("%.0lf\n",ans);

    }
return 0;
}
