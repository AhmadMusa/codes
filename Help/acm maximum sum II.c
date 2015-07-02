#include<stdio.h>
int main()
{
    freopen("too.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    long long int n,i,j,k,flag,num[10000];
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        flag=0;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&num[i]);
            if(num[i]==0)
            {
                flag++;
            }
        }

        if(flag==n)
            printf("0\n");
        else
        {
            i=0;
            for(j=0; j<n; j++)
            {
                if(num[j]!=0)
                {
                    if(i==0)
                    {
                        printf("%lld",num[j]);
                        i++;
                    }
                    else
                        printf(" %lld",num[j]);

                }
            }

            printf("\n");
        }

    }
    return 0;
}
