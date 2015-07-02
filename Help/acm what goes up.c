#include <stdio.h>
int main()
{
    freopen("whatgoesup.txt","r",stdin);
    freopen("outp.txt","w",stdout);
    long long seq[1000];
    long long n, c=0;
    while(scanf("%lld",&n)!=EOF)
    {
        long long temp=c;
        if(c==0)
            seq[c]=n;
        else
        {
            if(n<=seq[temp])
            {
                seq[temp]=n;
            }
            else
            {
                seq[c]=n;
                c++;
            }
        }


    }
    long long i;
    for(i=0;i<c;i++)
        printf("%d\n",seq[i]);

}
