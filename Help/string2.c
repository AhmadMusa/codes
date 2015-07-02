#include <stdio.h>
void main()
{
char s3[10];
char revs3[10];
char character;
    int i=0;
    while(character!='\n')
    {
        character=getchar();
        s3[i]=character;
        i++;
    }
    s3[i-1]='\0';
    printf("%s\n\n",s3);
i=0;
while(s3[i]!='\0')
{
    revs3[i]=s3[i];
    i++;
}
revs3[i]='\0';





}
