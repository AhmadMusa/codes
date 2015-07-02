#include <stdio.h>
int main()
{
    freopen("new.txt","r",stdin);
    int c1,c2;
    while(scanf("%c%c",&c1,&c2)==2)
    {
        printf("%c %c",c1,c2);
    }
}
