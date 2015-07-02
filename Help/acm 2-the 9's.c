#include <stdio.h>
char num[1024];
int main()
{
    //freopen("too.txt","r",stdin);
    //freopen("output1.txt","w",stdout);

    while(scanf("%s",&num)==1)
    {
        if(strcmp(num,"0")==0)
            break;

        long long int i,sum=0,count=0 ;
        int deg;
        for(i=0; num[i]!='\0'; i++)
        {
            sum+=(num[i]-'0');
        }
        if(sum%9==0)
        {
            deg=degree(sum);
            while(deg>9)
                deg=degree(sum);

            printf("%s is a multiple of 9 and has 9-degree %d.\n",num,deg);
        }
        else
            printf("%s is not a multiple of 9.\n",num);
    }
    return 0;
}

int degree(long long int sum)
{
    int s=0,t;
    while(sum>0)
    {
        t=sum%10;
        s+=t;
        sum=sum/10;
    }
    return s;
}
