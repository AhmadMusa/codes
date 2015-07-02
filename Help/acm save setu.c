#include <stdio.h>
#include <string.h>
int main()
{
    int i=0,t;
    scanf("%d",&t);
long long int n, sum=0;
    while(i<t)
    {
        char s[1000];

        scanf("%s",s);
        if(strcmp("donate",s)==0)
        {
            scanf("%lld",&n);
            sum=sum+n;
        }
        else
            printf("%lld\n",sum);
        i++;
    }
    return 0;
}
