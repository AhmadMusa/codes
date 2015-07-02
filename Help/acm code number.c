#include <stdio.h>
#include <string.h>
char check(char c);
int main()
{
    freopen("input.txt","r",stdin);
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char c;
        while(scanf("%c",&c)==1)
        {
                printf("%c",check(c));
        }
        if(t!=0)
            printf("\n");
    }
}
char check(char c)
{
    if(c=='4')
        return 'A';
    if(c=='8')
        return 'B';
    if(c=='3')
        return 'E';
    if(c=='6')
        return 'G';
    if(c=='1')
        return 'I';
    if(c=='0')
        return 'O';
    if(c=='9')
        return 'P';
    if(c=='5')
        return 'S';
    if(c=='7')
        return 'T';
    if(c=='2')
        return 'Z';

    return c;
}
