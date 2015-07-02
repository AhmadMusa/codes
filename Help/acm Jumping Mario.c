#include <stdio.h>
int main()
{
    int n, t, i, k,countB,countS;
    int a[50];
    scanf("%d",&t);
    i=1;
    while(i<=t)
    {
        countB=0,countS=0;
        scanf("%d",&n);
        for(k=0;k<n;k++)
            scanf("%d",&a[k]);

        for(k=0;k<n-1;k++)
        {
            if(a[k+1]-a[k]<0)
                countS++;
            else if(a[k+1]-a[k]>0)
                countB++;
        }
        printf("Case %d: %d %d\n",i,countB,countS);
       i++;
    }
    return 0;
}
