#include <stdio.h>
int a[200]={0};

int main()
{

    long int n;
int i;
a[0]=1;
      for(i=1;;i++)
      {
          int t=6*i;
          a[t]=1;
          if(t==180)
            break;
      }
    while(scanf("%ld",&n)==1)
    {
        if(a[n]==1)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
