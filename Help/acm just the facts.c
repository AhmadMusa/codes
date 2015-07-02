#include <stdio.h>
int main()
{
    long n, rem1, rem2, lastdig;

    while(scanf("%ld",&n)==1)
    {
        if(n>=1 && n<10)
        {
            if(n==1)
                lastdig=1;
            else if(n==2)
                lastdig=2;
            else if(n==3)
                lastdig=6;
            else if(n==4)
                lastdig=4;
            else if(n==5 || n==6)
                lastdig=2;
            else if(n==7)
                lastdig=4;
            else if(n==8)
                lastdig=2;
            else
                lastdig=8;
        }
        else
        {
            rem1=n%10;
            rem2=(n/10)%10;
            if(rem2%2==0)
            {
                if(rem1==0 || rem1==1|| rem1 == 3 || rem1 == 5 || rem1 == 6 || rem1==8)
                    lastdig=4;
                else if(rem1==2 || rem1==7)
                    lastdig=8;
                else
                    lastdig=6;
            }
            else
            {
                if(rem1==0 || rem1==1|| rem1 == 3 || rem1 == 5 || rem1 == 6 || rem1==8)
                    lastdig=8;
                else if(rem1==2 || rem1==7)
                    lastdig=6;
                else
                    lastdig=2;
            }
        }
        printf("%5ld ->%ld\n",n,lastdig);
    }
}
