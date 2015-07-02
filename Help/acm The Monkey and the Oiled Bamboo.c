#include <stdio.h>
#include <math.h>
#include <stdlib.h>
long long array[100000];
int main()
{
    long long test,c=1;
    scanf("%lld",&test);
    while(test--)
    {
        long long n, i , max=0 ,save=0,temp=0, pos=0, flag=0;
        scanf("%lld",&n);

        array[0]=0;
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&array[i]);
            temp=(array[i]-array[i-1]);
            if(temp>max)
            {

                max=temp;
            }
        }

        save=max;
        for(i=1; i<=n; i++)
        {
            temp=(array[i]-array[i-1]);
            if(temp==max)
            {
                max--;
            }
            else if(temp>max){
                save++;
                break;
            }
        }
        printf("Case %lld: %lld\n",c++,save);


    }
    return 0;
}
