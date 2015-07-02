#include <stdio.h>

int main()
{
    char n[100];
    printf("Enter a character array : ");
    scanf("%s",n);

    upper(n);

   printf("%s",n);


}
int upper(char *pc)
{
    int i=0;
    while(*(pc+i)!='\0')
    {

        if((*(pc+i))>='a'&& (*(pc+i))<='z')
            *(pc+i)=*(pc+i)-32;
        i++;
    }

}
