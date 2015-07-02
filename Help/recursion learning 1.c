#include <stdio.h>
int main()
{
    char str[100];
    int i=rev(0,str);
    if(i==0)
        printf("Not palindrome.\n");
    else
        printf("Palindrome.\n");
    return 0;
}

int rev(int n, char str[])
{
    char c;
    static int count=0;

    scanf("%c",&c);
    if(c=='\n')
    {
        count=0;
        return 1;
    }
    str[count++]=c;
    rev(n+1,str);
    if(c!=str[count++])
        return 0;
}
