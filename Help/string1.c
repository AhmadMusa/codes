#include <stdio.h>
void main()
{
    char s1[5]={'T','e','s','t'};
     char s2[6]={'w','o','r','k','s'};
    char s3[10];

    while(s1[i]==s3[i] && s1[i]!='\0' && s3[i]!='\0')
    {
        i++;
    }
    if(s1[i]=='\0' && s3[i]=='\0')
        printf("TRUE");
    else
        printf("FALSE");




}
