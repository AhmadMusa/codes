#include <stdio.h>
#include <string.h>
#include <stdlib.h>
     long  int arr[101];
int main()
{
  //  freopen("new.txt","r",stdin);

    int k , n;
    while(scanf("%d %d",&n,&k)==2)
    {
        int i,flag=1,count=0;
        for(i=0; i<n; i++)
        {
            scanf("%ld",&arr[i]);
            if(f(arr[i],k)==0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;

}

int f(long int num,int k)
{
    long int t=num;
    int i,false=0,sum=0,c=0;
   while(num!=0)
    {
        i=num%10;
        if(i>k)
        {
            false=1;
        }
        else
        {
            if(i==0)
            {
                c=1;
            }
            sum+=i;
        }
        num=num/10;
    }
    if(false==1)
        return 1;
    else
    {
        if(sum==((k*(k+1))/2) && (c==1 ||t==0) )
            return 0;
        else
            return 1;
    }

}
