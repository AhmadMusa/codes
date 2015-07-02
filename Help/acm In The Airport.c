#include <stdio.h>
int main()
{
    int test,c=1;
    scanf("%d",&test);
    while(test--)
    {
        long long n,m,k;
        scanf("%lld %lld %lld",&n,&m,&k);

        long long int p[1000];

        int i;
        long long int total=0, a,b, avg;

        for(i=0; i<n; i++)
        {
            scanf("%lld",&p[i]);
            total+=p[i];

        }
        avg=total/n;


        for(i=0; i<m; i++)
        {
            if(i==0)
                a=p[i];
            else
            {
                if(avg==a)
                    a=avg;
                else if(avg>a)
                {
                    if(p[i]>m)
                        a=p[i];
                    else
                        a=m;
                }
                else
                {
                    if(m>p[i])
                        a=m;
                    else
                        a=p[i];
                }
            }

        }

        int t=i;

        for(i=t; i<k+t; i++)
        {
            if(i==0)
                b=p[i];
            else
            {
                if(avg==b)
                    b=avg;
                else if(avg>b)
                {

                    if(p[i]>k)
                        b=p[i];
                    else
                        b=k;
                }
                else
                {
                    if(k>p[i])
                        b=k;
                    else
                        b=p[i];
                }
            }

        }

        printf("Case #%d: %lld %lld\n",c++,a,b);
    }
    return 0;
}


