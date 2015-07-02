#include <stdio.h>
int main()
{
    long int total_street , num;
    long int cs=1;
    while(scanf("%ld %ld",&total_street,&num)==2)
    {
        if(total_street==0 && num==0)
            break;

        long int ans;

        if((total_street-num)%num>0)
            ans= ((total_street-num)/num) + 1;
        else
            ans = ((total_street-num)/num);
        if(ans>26)
            printf("Case %ld: impossible\n",cs++);
        else
            printf("Case %ld: %ld\n",cs++,ans);
    }
    return 0;
}
