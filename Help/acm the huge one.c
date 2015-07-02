#include <stdio.h>
char num[100000];
int main()
{

    long int test;
    scanf("%ld",&test);
    while(test--)
    {
        scanf("%s",&num);
        int i, n;
        scanf("%d",&n);
        long long int nums;
        int flag=0;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&nums);
            if(1==modu(num,nums))
                flag=1;
        }
        if(flag==0)
            printf("%s - Wonderful.\n",num);
        else
            printf("%s - Simple.\n",num);

    }
    return 0;
}
int modu(char s[],long long int n)
{
    int i, mod=0;
    for(i=0; i<strlen(s); i++)
    {
        mod=(mod*10 + s[i]-'0')%n ;
    }
    if(mod==0)
        return 0;
    else
        return 1;
}
