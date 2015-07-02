#include<stdio.h>

int main()

{
    while (1==1)
       {

        int a,b,count;

        scanf("%d" "%d", &a, &b);
        count=2;
        printf("%d ",a);
        while (1==1)
        {
            if (a%2==0)
            {
                a=a/2;
                if (a==b) break;
                count=count+1;

            }

            else
            {
                a=3*a+1;
                if (a==b) break;
                count=count+1;
            }

        }

        printf ("%d %d\n",b,count);

       }

    return 0;
}
