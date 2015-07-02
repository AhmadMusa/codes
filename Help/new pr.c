// Adding REVERSED NUMBERS
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100];
    char s2[100];

    int t=0,y,i,sum=0;
    scanf("%s %s",&s1,&s2);

    printf("%s",rev(s1));
}

int rev(char a[])
{
    int i, k=0, l,count=0;
    l=strlen(a);
    for(i=l-1;a[i]=='0';i--)
    {
        if(a[i]=='0')
        {
            count++;
        }
    }
    for(i=0;i<=(l/2)-count;i++)
    {
        k=a[i]-'0';
        a[i]=a[l+1-i-count];
        a[l+1-i-count]=k+'0';
    }
    return a;
}

