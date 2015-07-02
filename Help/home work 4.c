#include <stdio.h>
int main()
{
    long long int n,i,r=1,con=0;
    printf("Enter number :\n");
    scanf("%lld",&n);
    int choice;
    printf("Enter 1 to compute factorial , 2 to figure out i prime number , 3 to figure out if even or odd.\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        for(i=1; i<=n; i++)
        {
            r=r*i;
        }
        printf("%lld\n",r);
        break;
    case 2:

        i = 2 ;
        while ( i <= n - 1 )
        {
            if ( n % i == 0 )
            {
                printf ( "Not a prime number\n" ) ;
                break ;
            }
            i++ ;
        }
        if ( i == n )
            printf ( "Prime number\n" ) ;

        break;

    case 3:
        if(n%2)
            printf("Odd\n");
        else
            printf("Even\n");
        break;


    }


}
