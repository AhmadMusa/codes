#include <stdio.h>
main()
{
    char a[10];
    int i=0,j,count=0;

   scanf("%[^\n]s",a);


    for(i=0,j=;a[i]!='\0';i++,j--)
    {
        a[j]=a[i];
    }
    for(j=;j--)
    {
        printf("%c",a[j]);
    }

}
