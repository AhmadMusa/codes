#include <stdio.h>
int main()
{
    struct birthdate
    {
        char name[20];
        int day , month ,year;
    };
    birthday bd[101];
    int test,i;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%s %d %d %d",&bd.name[i++],&bd.day[i++],&bd.month[i++],&bd.year[i++]);
    }
}
