#include <stdio.h>
#include <string.h>
int a[2000000];
char str[1000000];
int main()
{
int index,s,temp,i,test,cases=1;
scanf("%d",&test);
long long int n;
while(test--)
{
    scanf("%lld",&n);
    if(n>33)
    {
        printf("Case %d: 0\n",cases++);
        continue;
    }

    int count=0;
    a[0]=1;
    s=n;
    index=0;
    for(;n>=2;n--)
    {
        count++;
        temp=0;
        for(i=0;i<=index;i++)
        {
        temp=(a[i]*n)+temp;
        a[i]=temp%10;
        //printf("{%d}",a[i]);
        temp=temp/10;
        }
   while(temp>0)
   {
   a[++index]=temp%10;
   //printf("{%d}",a[index]);
   temp=temp/10;
   }
   }

int co=0;
for(i=index;i>=0;i--)
    {
        str[co++]=a[i]+'0';
    }
    str[co]='\0';

    long long int mod=0;
    long long int n=4294967296;
for(i=0; i<strlen(str); i++)
    {
        mod=(mod*10 + str[i]-'0')% n;
    }
printf("Case %d: %lld\n",cases++,mod);

}
return 0;
}


