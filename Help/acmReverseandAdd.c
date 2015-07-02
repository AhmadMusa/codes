#include <stdio.h>
int main()
{
    long long n,num,i=0,j,sum1=0,temp,save,rev=0,rev1=0,count=0;
    scanf("%lld",&n);
    while(i<n)
    {
        scanf("%lld",&num);

        save=num;
        while(save!=0)
        {
            temp=save%10;
            rev=rev*10+temp;
            save=save/10;
        }

        while(rev!=num)
        {
        num=num+rev;
        sum1=num;
        rev=0;
        while(sum1!=0)
        {
            temp=sum1%10;
            rev=rev*10+temp;
            sum1=sum1/10;
        }
        count++;
        }

        printf("%lld %lld\n",count,rev);
        i++;
        rev=0;
        count=0;

    }
    return 0;
}
