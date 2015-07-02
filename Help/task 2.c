#include<stdio.h>
int a[2000000];
int main()
{


long long int n;
while(scanf("%lld",&n)==1){
long long int sum=0;
int j,temp,i;
a[0]=1;
j=0;
for(;n>=2;n--)
{
temp=0;
for(i=0;i<=j;i++)
{
    temp=(a[i]*n)+temp;
    a[i]=temp%10;
    temp=temp/10;
}
while(temp>0)
{
    a[++j]=temp%10;
    temp=temp/10;
}
}
for(i=j;i>=0;i--)
    sum+=a[i];
printf("%lld\n",sum);
}

return 0;

}
