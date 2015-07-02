#include <stdio.h>
int main()
{
    long int in=0, out=0;

    static long int bal = 1507.31 ;

    printf("\t\tWanna push Taka / pop Taka ? \n");
 again:
    printf("\n\t\tIf Push , then Press y\n");
    printf("\t\tElse press n\n\n");


   char c;
   scanf("%c",&c);
    if(c=='y' || c=='Y')
    {
        printf("\t\tEnter amount : \n");
        scanf("%ld",&in);
    }
    else
    {
          printf("\t\tEnter amount : \n");
        scanf("%ld",&out);

    }
getchar();
    bal = bal + in -out;
    in=0 , out=0;
    printf("Present Balance : %ld\n\n",bal);
    printf("Wanna check again ? Press y Or press n \n\n");
    scanf("%c",&c);
    getchar();
    if(c=='y')
        goto again;
    else
        exit(1);
}
