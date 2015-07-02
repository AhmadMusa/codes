#include<stdio.h>
int a[2000000];
int main()
{
int n,index,s,temp,i;
while(scanf("%d",&n)==1)
{
    a[0]=1;
    s=n;
    index=0;
    for(;n>=2;n--)
    {
        temp=0;
        for(i=0;i<=index;i++)
        {
        temp=(a[i]*n)+temp;
        a[i]=temp%10;
        temp=temp/10;
        }
   while(temp>0)
   {
   a[++index]=temp%10;
   temp=temp/10;
   }
   }
printf("%d!\n",s);

for(i=index;i>=0;i--)
    printf("%d",a[i]);

printf("\n");
}
return 0;
}


