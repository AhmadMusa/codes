#include <stdio.h>
#include <string.h>
char rem[100000];
char rev[100000];
int main()
{
    long long int n,temp;

    while(scanf("%lld",&n)==1)
    {
        long long count=0,i=-1;
        if(n==0)
            break;
    while(n!=0)
    {
        temp=n%2;
        rem[++i]=temp+'0';
        if(temp==1)
            count++;
        n=n/2;
    }
    rem[++i]='\0';
    printf("The parity of %s is %lld (mod 2).\n",str(rem),count);
    }
return 0;
}

int str(char s[])
{

    int i=strlen(s)-1, j=-1;
    while(i>=0)
    {
        rev[++j]=s[i];
        i--;
    }
    rev[++j]='\0';
    return rev;
}
