#include <stdio.h>
int main()
{
    long int n , m;
    while(scanf("%ld %ld",&n,&m)==2)
    {
        long int house[m];
        int i;
        for(i=0;i<m;i++)
            scanf("%ld",&house[i]);
        long int total=0;
        long int beg=1;
        for(i=0;i<m;i++)
        {
            if(house[i]>=beg)
            {
                total+=house[i]-beg;
                beg=house[i];
            }
            else
            {
                total+=n-beg+house[i];
                beg=house[i];
            }
        }
        printf("%ld\n",total);

    }
    return 0;
}
