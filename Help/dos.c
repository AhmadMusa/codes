#include <stdio.h>
int main()
{
    char file[]="D:\\";
    //gets(file);
    if(remove(file)==0)
        printf("removed");
    else
        perror("remove");
}
