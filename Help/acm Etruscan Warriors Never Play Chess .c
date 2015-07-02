#include <stdio.h>
#include <math.h>
int  main()
{
    long long int n ;
    scanf("%lld",&n);
    while(n--)
    {
        long long int number, s,ans;

        scanf("%lld",&number);
       s = sqrt(number*2);

       if((s*(s+1))<=(number*2))
        ans=s;
       else
        ans=s-1;

       printf("%lld\n",ans);
    }
    return 0;
}
