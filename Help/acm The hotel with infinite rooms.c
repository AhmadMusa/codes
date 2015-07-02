#include <stdio.h>
int main()
{
    long long int s, d;
    while(scanf("%lld %lld",&s,&d)==2)
    {
        long long int i,t=0;
        i=s;
        while(1)
        {
            t=t+i;
            if(t==d){
                printf("%lld\n",i);
                break;
            }
            else if(t>d)
            {
                printf("%lld\n",i);
                break;
            }
            else
            {
                if(t+i+1 == d || t+i+1 >d)
                    {
                        printf("%lld\n",i+1);
                    break;
                    }
                else
                    i++;

        }


    }
}
return 0;
}
