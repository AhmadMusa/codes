#include <stdio.h>
int main()
{
    int dim,c=1;
    while(scanf("%d",&dim)==1)
    {
        if(dim==0)
            return 0;

     int array[dim][dim];
     int temp=dim/2;
     int i,j, x, y;
     int sum[10];
     for(i=0;i<10;i++)
        sum[i]=0;
     int count =0,t=0;
     for(i=0;i<dim;i++)
     {
         for(j=0;j<dim;j++)
         {
             scanf("%d",&array[i][j]);
         }
     }

     i=0,j=0;
     for(i=0,j=0;i<temp&&j<temp;)
     {
         x=i;
         y=j;
         while(y<=(dim-1-count))
         {
             t+=array[x][y++];

         }
         y=dim-1-count;
         while(x<(dim-1-count))
         {
            t+=array[++x][y];
         }
         x=dim-1-count;
         while(y>0+count)
         {
             t+=array[x][--y];
         }
         y=0+count;

         while(x>0+count+1)
         {
             t+=array[--x][y];
         }
         x=0;
         sum[count]=t;
         t=0;
         i++;
         j++;
         count++;
     }

     printf("Case %d:",c++);
     for(i=0;i<count;i++)
     {
         printf(" %d",sum[i]);
     }
     if(dim%2==1)
     {
         printf(" %d",array[dim/2][dim/2]);
     }

     printf("\n");
    }
}
