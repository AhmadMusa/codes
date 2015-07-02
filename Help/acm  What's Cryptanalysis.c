#include <stdio.h>
#include <string.h>
char s[1000000];
int main()
{
    int alphabet(char c);
    int test;
    long int i=0,d=-1, j,num[26]= {0};
    char ch[26];
    char save;

    scanf("%d",&test);
    char c;
    while((c=getchar())!='\n' && c!=EOF);
    while(test--)
    {
        int flag=0;
        gets(s);

        for(i=0; i<strlen(s); i++)
        {
            if(alphabet(s[i])==1)
            {
                if(i==0)
                {
                    ch[++d]=toupper(s[i]);
                    num[d]++;
                }
                else
                {
                    flag=0;
                    for(j=0; j<=d; j++)
                    {
                        if(ch[j]==toupper(s[i]))
                        {
                            flag=1;
                            num[j]++;
                            break;
                        }
                    }
                    if(flag==0)
                    {
                        ch[++d]=toupper(s[i]);
                        num[d]++;
                    }
                }
            }

        }
        if(flag==0)
        {
            if(alphabet(s[i])==1)
            {
                ch[++d]=toupper(s[i]);
                num[d]++;
            }
        }
    }
    long int temp;
    char te;
    for(i=0; i<d; i++)
    {
        for(j=0; j<d; j++)
        {
            if(num[j]<=num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
                te=ch[j];
                ch[j]=ch[j+1];
                ch[j+1]=te;

                if(num[j+1]==num[j])
                {
                    if(ch[j]>ch[j+1])
                    {
                        te=ch[j];
                        ch[j]=ch[j+1];
                        ch[j+1]=te;
                    }
                }
                else if(num[j]<num[j+1])
                {
                    te=ch[j];
                    ch[j]=ch[j+1];
                    ch[j+1]=te;
                }
            }
        }
    }
    for(i=0; i<=d; i++)
        printf("%c %d\n",ch[i],num[i]);
    return 0;
}

int alphabet(char c)
{
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        return 1;
    else
        return 0;
}
