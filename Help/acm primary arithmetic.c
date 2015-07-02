#include <stdio.h>
int main()
{

    long long int a,b,temp=0,d,i,count=0;

    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        temp=0;
        for(i=1; a!=0||b!=0; i++)
        {

            temp=temp+a%10;
            a=a/10;
            temp=temp+b%10;
            b=b/10;
            if(temp>9)
            {
                count++;
                temp=temp/10;
            }
            else
                temp=0;

        }
        if(count==0)
            printf("No carry operation.\n");
        else if(count==1)
            printf("1 carry operation.\n");
        else
            printf("%lld carry operations.\n",count);


        d=0,count=0;
    }
    return 0;
}
