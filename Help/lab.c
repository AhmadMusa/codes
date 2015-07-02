#include <stdio.h>
int main()
{
    char s[10];
    scanf("%s",s);

    int i;
    for(i=0;s[i]!='\0';i++)
        ;
    char news[10];
    int j=i-1;
    i=0;
    for(;j>=0;j--)
    {
        news[i++]=s[j];
    }
    news[i]='\0';

    printf("%s",news);
}
