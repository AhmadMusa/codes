#include <stdio.h>
#include <string.h>
int equalString(const char s1[], const char s2[])
{
    int i=0;
    while(s1[i]==s2[i] && s1[i]!='\0' && s2[i]!='\0')
    {
        i++;
    }
    if(s1[i]=='\0' && s2[i]=='\0')
        return 1;
    else
        return 0;
}

int main(void)
{
    int equalString(const char s1[], const char s2[]);
    int i=0;
    const char a1="i want it";
    const char a2="want";
    if(strstr(a1,a2))



}
