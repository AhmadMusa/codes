#include <stdio.h>
int main()
{
    int marks ;

    printf("Enter your marks : ");

    scanf("%d",&marks);

    if(marks <40)
        printf("grade : F");
    else if(marks < 50)
        printfA("Grade : D");

    else if(marks < 65)
        printf("Grade : C");

    else if(marks<80)
        printf("Grade : B");
    else
        printf("Grade : A");



}
