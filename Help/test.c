#include <stdio.h>
int main()
{
    char str[10];
    scanf("%s",str);
    t(str);
    printf("%s",str);
}

void t(char *p)
{
    *(p+2)=-1;
    *(p+3)=-1;
    *(p+4)=' ';
}
