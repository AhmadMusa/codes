#include <stdio.h>
int word(char c)
{
    if(c!='\n')
    {
        return word(c);
        printf("%c",c);
    }
    else
        return 0;
}

int main()
{
    char ch;
    scanf("%c",&ch);
    int word(char ch);
}
