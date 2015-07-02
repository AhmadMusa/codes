#include <stdio.h>
#include <string.h>
#include <stdlib.h>
long int bin(long long int num);
int main()
{

    int test,te=1;
    scanf("%d",&test);
    while(test--)
    {
        int flag=0;
        long long int i,num1,num2,num3,num4,b1,b2,b3,b4,res=0;
        scanf("%lld.%lld.%lld.%lld",&num1,&num2,&num3,&num4);
        scanf("%lld.%lld.%lld.%lld",&b1,&b2,&b3,&b4);
        if(b1==bin(num1) && b2==bin(num2) && b3==bin(num3) && b4==bin(num4))
        {
            printf("Case %d: Yes\n",te++);
        }
        else
            printf("Case %d: No\n",te++);
    }
    return 0;
}

long int bin(long long int num)
{
    long int i=1,res=0,rem;
     while(num!=0)
        {
            rem=num%2;
            num=num/2;
            res=res+(i *rem);
            i=i*10;
        }
return res;
}
