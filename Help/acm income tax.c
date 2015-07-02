#include <stdio.h>
int main()
{
    //freopen("input.txt","r",stdin);
    long long int m , x ;
    while(scanf("%lld %lld",&m,&x)==2 && m)
    {
        if(x==100 || x==0)
        {
            printf("Not found\n");
        }
        else
        {
            long long int  ans =  (m-1)*100/(100-x);
            long long int  mod = ((m-1)*100)%(100-x);
            if(mod==0)
                ans--;
            if(ans<m)
            {
                printf("Not found\n");
            }
            else
            {
                printf("%lld\n",ans);
            }
        }
    }
    return 0;
}
