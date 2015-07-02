#include <stdio.h>
#include <string.h>
int main()
{
    char num[2000];
    while(scanf("%s",&num)==1)
    {

        int i, l, sq;
        l=strlen(num);
        i=num[l-1]-'0';
        if(i==0 || i==1)
            printf("Not an Automorphic number.\n");
        else
        {

        sq=i*i;
        sq=sq%10;
        if(i==sq)
            printf("Automorphic number of %d-digit.\n",l);
        else
            printf("Not an Automorphic number.\n");
        }
    }
    return 0;
}
