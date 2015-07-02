#include <stdio.h>
#include <string.h>
int main()
{

    int t,c=1;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char s[100];
        scanf("%s",&s);
        int a=0, b=0;


        printf("Case %d: ",c++);

        if(strlen(s)==5 || strlen(s)==3)
        {
            a=10;
            if(strlen(s)==5)
                b=s[3]-'0';
        }
        else if(strlen(s)==4)
        {
            a=s[0]-'0';
            b=s[2]-'0';
        }
        else if(strlen(s)==2)
            a=s[0]-'0';

        int result = a*50 + b*5;
        printf ("%d", result / 100);
        result%=100;
        if ( result )
        {
            if ( result % 10 == 0 ) printf (".%d", result / 10);
            else printf (".%d", result);

        }
        printf("\n");
    }
}
