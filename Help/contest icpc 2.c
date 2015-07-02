#include <stdio.h>
int a[2000000];
char str[1000000];
int main()
{
    int test,cases=1;
    scanf("%d",&test);
    while(test--)
    {
        long int n;
        scanf("%ld",&n);
int save=n;
        int index,s,temp,i;

        int count=0,c=0;
        a[0]=1;
        s=2;
        index=0;
        for(; count<n-1;)
        {
            count++;
            temp=0;
            for(i=0; i<=index; i++)
            {
                temp=(a[i]*2)+temp;
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

        for(i=index; i>=0; i--)
            str[c++]=a[i]+'0';
        str[c]='\0';

        int mod=0;
        for(i=0; i<strlen(str); i++)
        {
            mod=(mod*10 + str[i]-'0')%1000003 ;
        }


        long int ans=mod+(save-3);

        printf("Case %d: %ld\n",cases++,ans);
    }
    return 0;
}
