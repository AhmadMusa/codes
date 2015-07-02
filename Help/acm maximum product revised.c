#include <stdio.h>
int main()
{

     long int n,i,j,k, max=0,pro=1,count=1;
     while(scanf("%ld",&n)!=EOF)
     {
         long int x[n];
         i=0;
         while(i<n)
         {
             scanf("%ld",&x[i]);
             i++;
         }
       for(j=0;j<i;j++)
        {
            pro=1;
            for(k=j;k<i;k++)
            {
                pro*=x[k];
                if(pro>max) max=pro;
            }
        }
         if(max>0)
            printf("Case #%d: The maximum product is %ld.\n\n",count++,max);
         else
            printf("Case #%d: The maximum product is 0.\n\n",count);
         max=0;
     }
     return 0;
}
