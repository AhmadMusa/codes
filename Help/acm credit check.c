#include <stdio.h>
#include <string.h>
int credit(char x[])
{
    int k,t=0,m, sum1=0, sum2=0, sum=0;;

    for(k=0;k<4;k++)
    {
        if(k==0 || k==2)
        {
            m=x[k]-'0';
            m=m*2;
            if(m<10)
            {
                t=m;
            }
            else
            {
                    t=m/10;
                    t=t + (m%10);
            }
            sum1=sum1+t;
        }
        else
        {
            m=x[k]-'0';
            sum2=sum2+m;
        }
    }
    sum=sum1+sum2;
    return sum;

}

int main()
{

    char a[5],b[5], c[5], d[5];
    int s1,s2,s3,s4, s,n, i=0;
    scanf("%d",&n);
    while(i<n)
    {
    scanf("%s %s %s %s",&a,&b,&c,&d);
    s1=credit(a);
    s2=credit(b);
    s3=credit(c);
    s4=credit(d);
    s=s1+s2+s3+s4;
    if(s%10==0)
        printf("Valid\n");
    else
        printf("Invalid\n");
    i++;
    }
return 0;
}
