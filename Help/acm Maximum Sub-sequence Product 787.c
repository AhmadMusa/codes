#include <stdio.h>
long  int array[101];
int main()
{
    freopen("new.txt","r",stdin);
    int c=0;
    long int temp;
    while(scanf("%ld",&temp)==1)
    {

        if(temp==-999999)
        {
            int i =0, j=0;
            long long int total=1, sum=0;
            for(i=0;i<c;i++)
                total*=array[i];
            for(i=1;i<c;i++)
            {

                sum=1;
                for(j=i;j<c;j++)
                    sum*=array[j];
                 if(sum>total)
                    total=sum;
            }
            printf("%lld\n",total);
            c=0;
        }
        else
            array[c++]=temp;
    }
    return 0;
}
