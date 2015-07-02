#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];

    while(gets(a))
    {
        gets(b);
        int digit1=0, digit2=0,temp1=0,temp2=0;
        int i;
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]>='a'&&a[i]<='z')
                digit1+= (a[i]-96);
            else if(a[i]>='A'&&a[i]<='Z')
                digit1+=(a[i]-64);
        }
        for(i=0; i<strlen(b); i++)
        {
            if(b[i]>='a'&&b[i]<='z')
                digit2+= (b[i]-96);
            else if(b[i]>='A'&&b[i]<='Z')
                digit2+=(b[i]-64);
        }

        if(digit1>=10){

            int total(int n);
            temp1=total(digit1);
        }
        else
            temp1=digit1;


        if(digit2>=10){

            int total(int n);
            temp2=total(digit2);

        }
        else
        {
            temp2=digit2;
        }
        double m=(double)temp2*100/temp1;
        double n=(double)temp1*100/temp2;
        if(temp1>temp2)
            printf("%.2lf %%\n",m);
        else
            printf("%.2lf %%\n",n);

    }
    return 0;
}

int total(int n)
{

    int i=0;
    int t=n;
    int s=t;
    while(1)
    {
        if(t==0 && i>9)
        {
            t=i;
            i=0;
        }
        if(t==0 && i<=9)
        {
            break;
        }
        i+=t%10;
        t=t/10;
    }
    return i;
}
