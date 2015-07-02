#include <stdio.h>

int main()
{
    freopen("INPUT.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    long int test;
    scanf("%ld",&test);
    while(test--)
    {
        int days;
        scanf("%d",&days);

        int party,t=0,a=0,k=0;
        scanf("%d",&party);

        int hartals[3651]= {0};
        int i, j;

        int d;
        for(i=0; i<party; i++)
        {
            scanf("%d",&d);
            k=d;
            j=2;
            while(d<=days)
            {
                if(d%7!=0 && d%7!=6)
                {
                    if(hartals[d]!=1)
                    {
                        hartals[d]=1;
                        a++;
                    }
                }
                d=k*(j++);
            }

        }

        printf("%d\n",a);
    }
    return 0;
}
