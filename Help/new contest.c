#include <stdio.h>
int  main()
{

     long long int a,b,c;
     while(scanf("%lld %lld %lld",&a,&b,&c)==3)
     {
         long long int sum=0;
         while(a>=0&&b>=0&&c>=0)
         {
             sum+=a+b+c;
             a--;
             b--;
             c--;
         }
         printf("%lld\n",sum);
            }

     return 0;
}
