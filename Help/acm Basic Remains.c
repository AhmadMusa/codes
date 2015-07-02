#include <stdio.h>
#include <string.h>
char s[1000000];
int main()
{
    int base;
    while(scanf("%d",&base)==1)
    {
        if(base==0)
            break;

        char num[1000];
        long long int mod;
        scanf("%s %lld",num,&mod);

        long long ans=0;
        long long i;
        for(i=0; i<strlen(num); i++)
        {
            ans=(ans*10 + num[i]-'0')%10;
        }
        basecon(base,ans);

    }
}

int basecon(int base,long long n)
{
    long long k=0;

    if(n==0)
        printf("0\n");
     else
        {
            k=-1;
            while(n!=0)
            {
                s[++k]=n%base +'0';
                n=n/base;
            }
            s[++k]='\0';
            while(k--)
                printf("%c",s[k]);
            printf("\n");
        }
}
