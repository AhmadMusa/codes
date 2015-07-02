#include <stdio.h>
int main()
{
    long long int a, b, i,n;
    char m='=';
    char l='>';
    char o='<';

    scanf("%lld",&n);
        i=0;
        while(i<n)
        {
        scanf("%lld %lld",&a,&b);

        if(a==b)

            printf("%c\n",m);

        else if(a>b)
            printf("%c\n",l);
        else
            printf("%c\n",o);
        i++;
        }

    return 0;
}
