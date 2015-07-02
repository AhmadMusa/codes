#include <stdio.h>
int main()
{
    long long int a=0,b=0;
    while(scanf("%lld %lld",&a,&b)==2 )
    {
        if(a==0 && b==0)
            break;
        while(1)
        {
            while(a>=b)
            {
                a=a-((a/b)*b);
                if(a==0)
            {
                printf("Ollie wins\n");
            break;
            }

            }
            while(b>a)
            {
                b=b-((b/a)*a);
            if(b==0)
            {
                printf("Stan wins\n");
            break;
            }
            }
        }


    }
    return 0;
}
