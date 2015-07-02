#include <stdio.h>
#include <string.h>
int main()
{
    char s[2000];
    long long n;
    int test, i=0;
    scanf("%d",&test);
    while(i<test)
    {
     scanf("%lld",&n);
     scanf("%s",&s);

     int count=0;
     long long mod=0;
     while(count<strlen(s))
     {
         mod=(mod*10 + s[count]-'0')%n ;
         count++;
     }
     printf("%lld\n",mod);
        i++;
    }
    return 0;

}

