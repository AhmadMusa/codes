#include <stdio.h>
int main()
{
    char s[10]={"hello"};
    char s2[10]={"Morning"};
    char s3[10]={"how"};
    char s4[10]={"are"};

    char sub[100];
    while(gets(sub)){
    if(strstr(s,sub))
        printf("ROBOT : Hello Dude .\n\n");
    else if(strstr(s2,sub))
        printf("ROBOT : Today's a beautiful morning\n\n");
    else if(strstr(s3,sub))
        printf("ROBOT : I'm Fine . How are you,sir?\n\n");
    }
}
