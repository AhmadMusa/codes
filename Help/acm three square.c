#include <stdio.h>
#include <math.h>
int main()
{
    long int i=0, j, a=0 ,b ,num,k,l,n;

    scanf("%ld",&n);
    while(i<n)
    {
        scanf("%ld",&num);
        for(j=0;j<sqrt(num);j++)
        {
            for(k=0;k<sqrt(num);k++)
            {
                for(l=0;l<sqrt(num);l++)
                {
                    a=j*j+k*k+l*l;
                if(a==num)
                    break;
                }
                if(a==num)
                    break;
            }
            if(a==num)
                break;
        }
        if(a!=num)
            printf("-1\n");
        else
            printf("%ld %ld %ld\n",j,k,l);

        i++;
    }
    return 0;
}
