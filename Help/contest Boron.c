#include <stdio.h>
#include <string.h>
int cons(char c);
int vowel ( char c);
int checkq(char s[]);
int checkc(char s[]);
int checkv(char s[]);
int checkc(char s[])
{
    int i , si= strlen(s);

    for(i=0;i<si;i++)
    {
        if(cons(s[i])==1)
        {
            if(cons(s[i+1]) && cons(s[i+2]) && cons(s[i+3]) && cons(s[i+4]))
                return 1;
        }
    }
    return 0;
}
int checkv(char s[])
{
    int i , si= strlen(s);

    for(i=0;i<si;i++)
    {
        if(vowel(s[i])==1)
        {
            if(vowel(s[i+1]) && vowel(s[i+2]))
                return 1;
        }
    }
    return 0;
}

int cons(char c)
{
    if(c!='A' && c!='E' && c!='I' &&c!='O' && c!='U' && c>='A' && c<='Z')
        {
           return 1;
        }
        return 0;
}
int vowel ( char c)
{
     if((c=='A' || c=='E' || c=='I' || c=='O' || c=='U') && (c>='A' && c<='Z'))
        {
           return 1;
        }
        return 0;
}
int checkq(char s[])
{
        int i , si= strlen(s);
    int count=0;
    for(i=0;i<si;i++)
    {
        if(s[i]=='?')
           {
               s[i]='A';
               checkv(s);
               if(checkv(s)==1)
                count++;
               s[i]='S';
               if(checkc(s)==1)
                count++;
           }
    }
    return count;
}

int main()
{
freopen("input.txt","r",stdin);
    int t,cases=1;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
         char s[51];
         scanf("%s",s);
         int v = checkv(s);
         int c = checkc(s);
         if(v==0 && c==0)
         {
             int question = checkq(s);
             if(question==0)
             {
                 printf("Case %d: GOOD\n",cases++);
             }
             else if(question==1)
                printf("Case %d: MIXED\n",cases++);
            else if(question==2)
                printf("Case %d: BAD\n",cases++);
         }
         else if( v==1 || c==1)
         {
               printf("Case %d: BAD\n",cases++);
         }
    }
    return 0;
}
