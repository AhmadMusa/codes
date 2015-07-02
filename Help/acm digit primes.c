#include <stdio.h>
#include <math.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    int i=0;
    int pr[100];
    while(i<n)
    {
        int a,b,d,t,l,i,s,m=0,p,count=0,pc=0;
        float sr;
        _Bool is_prime;
        scanf("%ld %ld",&a,&b);
        d=a-b;
        for(i=a;i<=b;i++)
        {
            is_prime=1;
            t=i;
            sr=sqrt(t);
            for(l=2;l<=t/2;l++)
            {

                if(t%l==0)
                {
                    is_prime=0;

                }
                if(is_prime!=0)
                {
                    s=t;
                    m=0;
                    while(s!=0)
                    {
                        m=m+s%10;
                        s=s/10;
                    }
                    //printf("%d\t%d\n",t,m);
                    for(p=0;p<d;p++)
                        pr[p]=m;
                }


            }


        }

        for(p=0;p<d;p++)
        {
            if(1==prime(pr[p]))
                count++;
        }
        printf("%ld\n",count);
        i++;
    }
}

int prime(int m)
{
                int s;
                _Bool is_prime=1;
                for(s=2;s<=(m/2);s++)
                {
                    if(m%s==0)
                {
                    is_prime=0;
                }

                }
                if(is_prime!=0)
                    return 1;
                else
                    return 0;
}
