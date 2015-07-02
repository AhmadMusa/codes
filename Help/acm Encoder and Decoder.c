#include <stdio.h>
#include <string.h>
char s[1000000];
int main()
{

    while(gets(s))
    {
        int i,sum=0,flag=0,f=1;
        if(s[0]>='0' && s[0]<='9' )
            f=0;
        for(i=strlen(s)-1; i>=0; i--)
        {
            if(f==0)
            {
                if(flag==0 && i!=strlen(s)-1)
                {
                    printf("%c",sum);
                    sum=0;
                }
                sum=sum*10+ s[i]-'0';
                if(sum>=1 && sum<=12)
                    flag=1;
                else
                    flag=0;
            }
            else
            {
                int temp=s[i];
                while(temp!=0)
                {
                    printf("%d",temp%10);
                    temp/=10;
                }
            }
        }
        if(flag==0 && f==0 && (i!=strlen(s)-1))
        {
            printf("%c",sum);
            sum=0;
        }
        printf("\n");
    }
    return 0;
}
