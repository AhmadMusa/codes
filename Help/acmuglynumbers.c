#include <stdio.h>
int main()
{
    long long n,num,i,j=0,count=0;


            for(n=2;count<1500;n++)
        {
            i=n;
            while(i%2==0 || i%3==0 || i%5==0)
            {
            if(i%2==0)
            {
                j++;
                i=i/2;
            }
            else if(i%3==0)
            {
                j++;
                i=i/3;
            }
            else if(i%5==0)
            {
                j++;
                i=i/5;
            }

            }
            if(j>0 && i==1)
            {
                    count++;
            }

        }
        printf("Number is %lld",n);

}
