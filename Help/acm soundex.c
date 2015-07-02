#include <stdio.h>
#include <string.h>
int main()
{
    int soundex(char a);
    char s[21];

    while(gets(s))
    {
        int flag=0;
        int i,temp=0;
        for(i=0; i<strlen(s); i++)
        {
            if(soundex(s[i])!=temp)
            {
                temp=soundex(s[i]);
                if(soundex(s[i])!=0)
                {
                    printf("%d",temp);
                }
            }
        }

        printf("\n");
    }
    return 0;

}

int soundex(char a)
{
    if(a=='B' || a=='F' || a=='P' || a=='V')
        return 1;
    else if(a=='C' || a== 'G' || a== 'J' || a== 'K' || a=='Q' || a== 'S' || a== 'X' || a=='Z')
        return 2;
    else if(a=='D' || a=='T')
        return 3;
    else if(a=='L')
        return 4;
    else if(a=='M' || a=='N')
        return 5;
    else if(a=='R')
        return 6;
    else
        return 0;
}
