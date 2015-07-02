#include <stdio.h>
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.out","w",stdout);
    int test,cases=1;
    scanf("%d",&test);
    while(test--)
    {
        double c, f, x;
        scanf("%lf %lf %lf",&c,&f,&x);
        double rate = 2;
        double ans =0;
        while(1)
        {
            if(x/rate<(c/rate)+(x/(rate+f)))
            {
                printf("Case #%d: %lf\n",cases++,ans+(x/rate));
                break;
            }
            ans += c/rate;
            rate = rate + f;
        }
    }

    return 0;
}
