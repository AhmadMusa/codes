#include <stdio.h>
int rev(char s);
int f=0;
int main()
{
    char c;
    while(rev(c)==0)
    {
        printf(" ");
    }
}
int rev(char s)
{
    scanf("%c",&s);
    if(s=='\n')
    {
        f=1;
        return 1;
    }
    if(s==' ')
    {
        return 0;
    }
    rev(s);
    printf("%c",s);
    if(f)
        return 1;
    else
        return 0;
}
