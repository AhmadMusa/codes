#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[1000];
    double al[123];
    char n[10];
    int i;
    for(i=97; i<=122; i++)
        al[i]=0;
    while(gets(s))
    {
        int flag=0, num=0;
        int t, te, al1 , al2;
        char temp;
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]=='-' || s[i]=='+' || s[i]=='*' || s[i]=='=' || s[i]=='/')
            {
                flag=1;
                te=s[i-1];
                temp=s[i];
            }
            if(flag==1)
            {
                if(s[i]>='0' && s[i]<='9')
                    num=1;
                else
                {
                    al1=s[i];
                    al2=s[0];
                    num=0;
                    break;
                }
            }
        }
            if(flag==0)
            {

                t=s[0];
                printf("%.2lf\n",al[t]);
            }
            else
            {
                int a=0;
                for(i=2; i<strlen(s); i++)
                {
                    n[a++]=s[i];
                }
                n[a]='\0';
                double save= atof(n);
                if(temp=='=')
                {
                    al[te]=save;
                }
                /*else if(temp=='+')
                {
                    //printf("%.2lf",)
                }*/
            }


        }
    }


