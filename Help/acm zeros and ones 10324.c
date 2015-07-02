#include <stdio.h>
#include <string.h>
char s[1000000];
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    long long n,i=0,test=0;
    long long a,b;
    while(scanf("%s",&s)==1)
    {
        i=0;
        long long rip=0;
        printf("Case %lld\n",++test);
        scanf("%lld",&n);
        while(i<n)
        {
            scanf("%lld %lld",&a,&b);
            long long int j=0,temp;
            if(a<b)
            {

            temp=s[a];
            j=a+1;
            while(j<=b)
            {
                if(temp!=s[j])
                {
                    rip=1;
                    break;
                }
                j++;
            }
            if(rip==0)
                printf("Yes\n");
            else
                printf("No\n");
            }
            else
            {

            temp=s[b];
            j=b+1;
            while(j<=a)
            {
                if(temp!=s[j])
                {
                    rip=1;
                    break;
                }
                j++;
            }
            if(rip==0)
                printf("Yes\n");
            else
                printf("No\n");
            }
            i++;
        }
    }
    return 0;
}
