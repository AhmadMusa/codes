#include <stdio.h>


int main()
{
    long long int num;
    while(cin>>num)
    {
        if(num==0)
        {
            f0();
            printf("\n");
        }
        while(num)
        {
            int t=num%10;
            if(t==0)
            {
                f0();

            }
            else if(t==1)
            {
                f1();

            }
              else if(t==2)
            {
                f2();

            }
              else if(t==3)
            {
                f3();

            }
              else if(t==4)
            {
                f4();

            }
              else if(t==5)
            {
                f5();

            }
              else if(t==6)
            {
                f6();

            }
              else if(t==7)
            {
                f7();

            }
              else if(t==8)
            {
                f8();

            }
              else if(t==9)
            {
                f9();

            }
            printf("\n");
            num=num/10;
        }
    }
    return 0;
}
int f0()
{
    printf("O-|-OOOO");
}
int f1()
{
    printf("O-|O-OOO");
}
int f2()
{
    printf("O-|OO-OO");
}
int f3()
{
    printf("O-|OOO-O");
}
int f4()
{
    printf("O-|OOOO-");
}
int f5()
{
    printf("-O|-OOOO");
}
int f6()
{
    printf("-O|O-OOO");
}
int f7()
{
    printf("-O|OO-OO");
}
int f8()
{
    printf("-O|OOO-O");
}
int f9()
{
    printf("-O|OOOO-");
}
