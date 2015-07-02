#include <stdio.h>
#include <string.h>
char s[1000000];
int main()
{

    while(gets(s))
    {

    long long int i=0,count=0,word=0;
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            if(count==0)
                word++;
            count++;
        }
        else
        {
            count=0;
        }
    }
    printf("%lld\n",word);
    }
return 0;
}
