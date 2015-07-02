#include <stdio.h>
#include <math.h>
char word[21];
int main()
{
    int i=0,j, countS=0;
    while(scanf("%s",&word)==1)
    {
        countS=0;
        for(i=0; word[i]!='\0'; i++)
        {
            if(word[i]>='a' && word[i]<='z')
            {
                if(word[i]=='a')
                    countS=countS+1;
                else if(word[i]=='b')
                    countS=countS+2;
                else if(word[i]=='c')
                    countS=countS+3;
                else if(word[i]=='d')
                    countS=countS+4;
                else if(word[i]=='e')
                    countS=countS+5;
                else if(word[i]=='f')
                    countS=countS+6;
                else if(word[i]=='g')
                    countS=countS+7;
                else if(word[i]=='h')
                    countS=countS+8;
                else if(word[i]=='i')
                    countS=countS+9;
                else if(word[i]=='j')
                    countS=countS+10;
                else if(word[i]=='k')
                    countS=countS+11;
                else if(word[i]=='l')
                    countS=countS+12;
                else if(word[i]=='m')
                    countS=countS+13;
                else if(word[i]=='n')
                    countS=countS+14;
                else if(word[i]=='o')
                    countS=countS+15;
                else if(word[i]=='p')
                    countS=countS+16;
                else if(word[i]=='q')
                    countS=countS+17;
                else if(word[i]=='r')
                    countS=countS+18;
                else if(word[i]=='s')
                    countS=countS+19;
                else if(word[i]=='t')
                    countS=countS+20;
                else if(word[i]=='u')
                    countS=countS+21;
                else if(word[i]=='v')
                    countS=countS+22;
                else if(word[i]=='w')
                    countS=countS+23;
                else if(word[i]=='x')
                    countS=countS+24;
                else if(word[i]=='y')
                    countS=countS+25;
                else if(word[i]=='z')
                    countS=countS+26;
            }
            else
            {
                if(word[i]=='A')
                    countS=countS+27;
                else if(word[i]=='B')
                    countS=countS+28;
                else if(word[i]=='C')
                    countS=countS+29;
                else if(word[i]=='D')
                    countS=countS+30;
                else if(word[i]=='E')
                    countS=countS+31;
                else if(word[i]=='F')
                    countS=countS+32;
                else if(word[i]=='G')
                    countS=countS+33;
                else if(word[i]=='H')
                    countS=countS+34;
                else if(word[i]=='I')
                    countS=countS+35;
                else if(word[i]=='J')
                    countS=countS+36;
                else if(word[i]=='K')
                    countS=countS+37;
                else if(word[i]=='L')
                    countS=countS+38;
                else if(word[i]=='M')
                    countS=countS+39;
                else if(word[i]=='N')
                    countS=countS+40;
                else if(word[i]=='O')
                    countS=countS+41;
                else if(word[i]=='P')
                    countS=countS+42;
                else if(word[i]=='Q')
                    countS=countS+43;
                else if(word[i]=='R')
                    countS=countS+44;
                else if(word[i]=='S')
                    countS=countS+45;
                else if(word[i]=='T')
                    countS=countS+46;
                else if(word[i]=='U')
                    countS=countS+47;
                else if(word[i]=='V')
                    countS=countS+48;
                else if(word[i]=='W')
                    countS=countS+49;
                else if(word[i]=='X')
                    countS=countS+50;
                else if(word[i]=='Y')
                    countS=countS+51;
                else if(word[i]=='Z')
                    countS=countS+52;
            }
        }
        if(1==prime(countS))
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}

int prime(int n)
{
    int i;
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3; i<=n/2; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;

}
