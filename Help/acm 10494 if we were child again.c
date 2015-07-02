#include <stdio.h>
#include <string.h>
char s[1000000];
char a[1000];
int main()
{
    freopen("INPUT.txt","r",stdin);
    freopen("output2.txt","w",stdout);
    char c;
    while(gets(s))
    {
        long long int b, mod=0, i;
        int temp=0;

        sscanf(s,"%s %c %lld",&a,&c,&b);
        if(s[0]=='0')
        {
            puts("0");
            continue;
        }

        if(c=='%')
        {
            for(i=0; i<strlen(a); i++)
            {
                mod=(mod*10 + a[i]-'0')%b ;

            }
            printf("%lld\n",mod);

        }

        else if(c=='/')
        {
            int flag=1;
            mod=0,temp=0;
            for(i=0; i<strlen(a); i++)
            {
                temp=temp*10 + (a[i]-'0');
                if(temp/b!=0)
                    flag=0;
                if(!gflag)
                    printf("%d",temp/b);
                /*if(i==0)
                {
                    if(temp!=0)
                    {
                        printf("$%d",temp);
                    }
                    else
                    {
                        if(strlen(a)==1)
                            printf("&%d",temp);
                        else
                            flag=1;
                    }
                }
                else if(i==1)
                {
                    if(temp==0)
                    {
                        if(flag==0)
                            printf("#%d",temp);

                    }
                    else
                    {
                        flag=0;
                        printf("/%d",temp);
                    }
                }
                else
                {
                    if(temp==0)
                    {
                        if(flag==0)
                            printf("*%d",temp);

                    }
                    else
                    {
                        flag=0;
                        printf("%d",temp);
                    }
                }*/
                temp=temp%b;
            }
            printf("\n");

        }

    }
    return 0;
}
