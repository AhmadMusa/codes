#include <stdio.h>
#include <string.h>
#include <stdlib.h>
long int a[100001];
long int b[100001];
int main()
{
    freopen("new.txt","r",stdin);
    long int n , k ;
    while(scanf("%ld %ld",&n,&k)==2)
    {
        long int i=1,j=1;
        for(i=1; i<=k; i++)
            b[i]=0;
        for(i=1; i<=n; i++)
        {
            scanf("%ld",&a[i]);
            if(j>k)
            {
                j=1;
            }
            b[j]+=a[i];
            j++;
        }


       long  int s=k;
        long int min=b[k];
        for(j=k-1; j>=1; j--)
        {

            if(min>=b[j])
            {
                s=j;
                min=b[j];
            }
        }

        printf("%ld\n",s);

    }
    return 0;
}
