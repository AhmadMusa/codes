#include <stdio.h>
int main()
{
    long long  e , f, c ,t=0, s=0,s1=0,m=0;
    int N, i=0;
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%lld %lld %lld",&e,&f,&c);
        t=e+f;

        while(c<=(s1+t))
        {
            s=s1+t;
            s1=(s1+t)/c;
            m=m+s1;
            t=(s)%c;
        }
        printf("%lld\n",m);
        s=0;
        t=0;
        m=0;
        s1=0;
    i++;
    }
    return 0;
}
