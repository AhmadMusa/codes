#include <stdio.h>
#include <string.h>
int main()
{
    freopen("secretre.txt","r",stdin);
    freopen("output2.txt","w",stdout);

    int test,counter=1;
    scanf("%d",&test);
    while(test--)
    {
        char s[100];
        scanf("%s",&s);
        int length = strlen(s);

        if ((length==1 && s[0]=='1')|| (length==1 && s[0]=='4') || (length==2 && s[0]=='7' && s[1]=='8'))
            printf("+");
        else
        {


            if(length > 1 && s[length-1]=='5' && s[length-2]=='3')
                printf("-");
            else if(length > 1 && s[0] == '9' && s[length - 1] == '4')
                printf("*");
            else if(length > 2 && s[0] == '1' && s[1] == '9' && s[2] == '0')
                printf("?");
        }

        printf("\n");

    }
    return 0;
}
