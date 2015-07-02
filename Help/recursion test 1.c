#include <stdio.h>
int A[4]={1,2,3,4};
int check[4];
int main()
{

    Func(0);
}
void Func(n)
{
    int j;
   if(n==4)
   {
       for(j=0;j<4;j++)
       {
           if(check[j]==1)
            printf("%d ",A[j]);
       }
       printf("\n");
       return;
   }

   check[n]=1;
   Func(n+1);
   check[n]=0;
   Func(n+1);
}
