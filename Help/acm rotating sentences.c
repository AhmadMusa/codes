#include <stdio.h>
int main()
{
    freopen("input.txt","r",stdin);
    char str[100][101];
    int i , j,flag=0, count=0;
    while(1)
    {
        while(gets(str[count])==1)
        {
            printf("%s",str[count]);
        }
        if(str[count][0]=='\n')
               break;
        count++;

    }
}
