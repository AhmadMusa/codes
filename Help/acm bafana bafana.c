#include <stdio.h>
int main()
{
    int t,i=1;
    scanf("%d",&t);
    while(i<=t)
    {
        int n,k,p,r;
        scanf("%d %d %d",&n,&k,&p);

      if(n==p==k)
        printf("Case %d: %d\n",i,n);
      else if((p+k)%n==0)
        printf("Case %d: %d\n",i,n);
      else
        printf("Case %d: %d\n",i,(p+k)%n);

     i++;
    }
    return 0;
}
