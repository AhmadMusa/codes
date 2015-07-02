#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,count=0;
    scanf("%d",&t);
    while(t--)
    {
        char s1[20];
        char s2[20];
        char ch;
        char ch2;

        scanf("%s %s",&s1,&s2);
        count=0;
        if(strlen(s1)!=strlen(s2))
            printf("No\n");
        else
        {
            for(i=0;i<strlen(s1);i++)
            {
                if(s1[i]!=s2[i])
                {
                    ch=s1[i];
                    ch2=s2[i];
                    int vowel(char s);
                    if(vowel(ch)==0 || vowel(ch2)==0)
                    {
                        break;
                    }
                }
            }
            if(i==strlen(s1))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}

int vowel(char s)
{
    if(s=='a' || s=='e'|| s=='i'|| s=='o' || s=='u')
        return 1;
    else
        return 0;
}
