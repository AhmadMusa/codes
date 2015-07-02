#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int n;
    fp=fopen("gl.txt.txt","r");
    fseek(fp,10,2);
    ch = fgetc(fp);
     printf("%c\n",ch);
    rewind(fp);
    n=ftell(fp);
    printf("tell position : %d\n",n);
}
