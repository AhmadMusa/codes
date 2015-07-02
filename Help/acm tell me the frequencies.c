#include <stdio.h>
#include <string.h>
int s[100];
int main()
{
    long long i ;
    char input[1000];
    while(gets(input))
    {
        long long flag=0 ,j, temp,count=1;
        int t;
        for(i=0; i<100; i++)
        {
            s[i]=0;
        }
        char ch[100];
        int cou=0;
        char te;
        for(i=0; i<strlen(input)-1; i++)
        {

            s[cou]++;
            if(i==1)
                ch[cou++] = input[i];
            else
            {
                if(input[i]!=input[i-1])
                    ch[cou++]=input[i];

            }
        }
        for(i=0; i<cou-1; i++)
        {
            for(j=0; j<cou-1; j++)
            {
                if(s[j]>=s[j+1])
                {
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                    te=ch[j];
                    ch[j]=ch[j+1];
                    ch[j+1]=te;

                    if(s[j+1]==s[j])
                    {
                        if(ch[j]>ch[j+1])
                        {
                            te=ch[j];
                            ch[j]=ch[j+1];
                            ch[j+1]=te;
                        }
                    }
                    else if(s[j]>s[j+1])
                    {
                        te=ch[j];
                        ch[j]=ch[j+1];
                        ch[j+1]=te;
                    }
                }
            }
        }

        for(i=0;i<cou;i++)
            printf("%d %d\n",ch[i],s[i]);

    }
}
