#include <stdio.h>
#define limit 10000000
int main()
{
    //freopen("factor.txt","r",stdin);
    //freopen("factor1.txt","w",stdout);
    int n , p;

    int factor[100], save=0,term=0;
    while(scanf("%d",&n)==1)
    {
        int s=n;
        int flag=0;
        save=0,term=0;
        for(p=2;n!=1;)
        {

            if(n%p==0)
            {
                n/=p;
                flag=0;
                term++;

            }
            else
            {
                save= (save) + (term+1);
                p++;
                flag=1;
            }
        }
       if(flag==0)
            save= (save) + (term+1);
        printf("%d : %d\n",s,term);

    }


    return 0;


}
