#include <stdio.h>
long int number[1000000];
int main()
{
    freopen("too.txt","r",stdin);
    long int n, m;
    while(scanf("%ld %ld",&n,&m)==2)
    {
        long int i,j,seq,num;
        for(i=0; i<n; i++)
            scanf("%ld",&number[i]);

       /* for(i=0; i<n; i++)
            printf("{%ld}",number[i]);*/

        long int count=0;
        for(i=0; i<m; i++)
        {

             scanf("%ld %ld",&seq,&num);
            count=0;
            for(j=0; j<n; j++)
            {

                if(num==number[j])
                {

                    count++;

                    if(seq==count)
                    {
                        printf("%ld\n",j+1);
                        break;
                    }
                }

            }
            if(j==n)
                printf("0\n");

        }
    }
    return 0;
}
