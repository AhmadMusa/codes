#include <stdio.h>
int main()
{
      long long n, a, b,i,j=0,count=0, odd=0;
      scanf("%lld",&n);
      j=0;
      while(j<n)
      {
          scanf("%lld %lld",&a,&b);
          for(i=a;i<=b;i++)
          {
              if(i%2==1)
              {
                  odd=odd+i;
              }

          }
          count++;

          printf("Case %lld: %lld\n",count,odd);
          odd=0;
          j++;
      }
      return 0;
}
