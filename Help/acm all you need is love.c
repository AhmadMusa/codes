#include <stdio.h>
char s[100];
char s2[100];
int main()
{
    long int dec(char s1[]);
    long int gcd(long int a, long int b);
    long test,k=1;
    scanf("%ld",&test);
    while(test--)
    {

        scanf("%s",&s);
        scanf("%s",&s2);

        long int dec1, dec2;

        dec1=dec(s);
        dec2=dec(s2);

        long gcdvalue;

        gcdvalue=gcd(dec1,dec2);
        if(gcdvalue==1)
            printf("Pair #%ld: Love is not all you need!\n",k++);
        else
            printf("Pair #%ld: All you need is love!\n",k++);


    }
    return 0;

}

long int dec(char s1[])
{
    int length ;
    length = strlen(s1);
    int i;
    long int dec=0;
    for(i=0; i<length; i++)
    {
        if (s1[i] == '1')
            dec = dec * 2 + 1;
        else if (s1[i] == '0')
            dec *= 2;
    }
    return dec;
}

long int gcd(long int a, long int b)
{

    if(a==b)
        return a;
    else if(a>b)
        return gcd(a-b,b);
    else if(b>a)
        return gcd(a,b-a);
}
