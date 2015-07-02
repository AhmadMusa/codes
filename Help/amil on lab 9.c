#include<stdio.h>
main()
{
    char a[999];
    gets(a);
    int i, l=0, j;
    for(i=0; a[i]!='\0'; i++)
    {
        l++;
    }
    char b[l+1];
    i=l-1;
    for(j=0; i>=0; j++)
    {
        if(a[i]>=97 && a[i]<=122)
        b[j]=a[i]-32;
        else if(a[i]>=65 && a[i]<=90)
        b[j]=a[i]+32;
        else b[j]=a[i];
        i--;
    }
    b[j]='\0';
    puts(b);

}
