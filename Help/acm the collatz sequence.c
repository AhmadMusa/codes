#include <stdio.h>
int main()
{

    long long int l, Case=1;
    long long int i,j;
    while(scanf("%lld %lld",&i,&j)==2)
    {
        if(i<0 && j<0)
            break;
        long long count=0;

            l=i;
            while(1)
            {
                if(l%2==0)
                {
                    l=l/2;
                    count++;
                 if(l==1){
                        count++;
                    break;
                 }
                }
                else
                {
                    l=3*l +1;
                    count++;
if(l>j)
    break;
                }
            }


        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",Case,i,j,count);

        Case++;

    }
    return 0;
}

