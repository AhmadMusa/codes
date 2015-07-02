#include <stdio.h>
long int first[1002];
long long int sec[26];
int main()
{
    int n,c=1 ;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            return 0;

        int i;
        for(i=0; i<n; i++)
        {
            scanf("%ld",&first[i]);

        }

        int m,j,k;
        long long int sum=0;

        scanf("%d",&m);
         printf("Case %d:\n",c++);
        for(i=0; i<m; i++)
        {
            scanf("%lld",&sec[i]);

            sum=first[0]+first[1];

            for(j=0; j<n; j++)
            {
                for(k=j+1; k<n; k++)
                {
                    if(fabs(first[j]+first[k]-sec[i])<fabs(sum-sec[i]))
                        sum=first[j]+first[k];

                }
            }
            printf("Closest sum to %lld is %lld.\n",sec[i],sum);
        }

    }
    return 0;
}
