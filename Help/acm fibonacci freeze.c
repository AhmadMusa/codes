#include<stdio.h>
int a[2000000];
int main()
{
    int n,index,s[1000],temp=0,i,k;
    while(scanf("%d",&n)==1)
    {
        a[0]=0,s[0]=1,index=0,temp=0,i=0;
        while(n--)
        {
            while(i>=1)
            {
            temp=a[i]+s[i];
            s[i]=a[i];
            }
            a[i]=temp%10;
            temp=temp/10;
            while(temp>0)
            {
                a[++index]=temp%10;
                temp=temp/10;
            }
        }
        for(i=index;i>=0;i--)
            printf("%d",a[i]);

        printf("\n");
    }
    return 0;
}

