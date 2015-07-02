#include <stdio.h>
int main()
{
    int test, cases=1;
    scanf("%d",&test);
    while(test--)
    {
      long int n , l;
      scanf("%ld %ld",&n,&l);
      int i,total;
      long int arr[51];
      for(i=0;i<n;i++)
      {
          scanf("%d",&arr[i]);
      }
      l=arr[n-1];
       for(i=0;i<n-1;i++)
      {
          total= l-arr[i];
      }
      if(total%2==1)
        printf("Case %d: First Player\n",cases++);
        else
            printf("Case %d: Second Player\n",cases++);
    }
    return 0;
}
