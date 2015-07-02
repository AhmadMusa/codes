#include <stdio.h>
int main()
{
    double N;
    int test=1;
    while(scanf("%lf",&N)==1 && N)
    {
        double  n = (sqrt(8*N + 9) + 3) / 2;
        long long int a = ceil(n);
        printf("Case %d: %lld\n",test++,a);
    }
    return 0;
}
