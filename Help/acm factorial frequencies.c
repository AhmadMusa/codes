#include<stdio.h>
int a[2000000];
int main()
{
int n,index,s,temp,i;
while(scanf("%d",&n)==1)
{
    if(n==0)
        break;
    int q=0,w=0,e=0,r=0,t=0,y=0,u=0,o=0,p=0,nine=0;
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


printf("%d! --\n",s);

for(i=index;i>=0;i--)
{
    if(a[i]==0)
        q++;
    else if(a[i]==1)
        w++;
    else if(a[i]==2)
        e++;
    else if(a[i]==3)
        r++;
    else if(a[i]==4)
        t++;
    else if(a[i]==5)
        y++;
    else if(a[i]==6)
        u++;
    else if(a[i]==7)
        o++;
    else if(a[i]==8)
        p++;
    else if(a[i]==9)
        nine++;

}
printf("   (0)%5d     (1)%5d     (2)%5d     (3)%5d     (4)%5d\n   (5)%5d     (6)%5d     (7)%5d     (8)%5d     (9)%5d\n",q,w,e,r,t,y,u,o,p,nine);


}
return 0;
}


