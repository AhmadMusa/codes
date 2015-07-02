#include <stdio.h>
int main()
{
    int a[1000];
    int n, i, j, k,l;
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        scanf("%d",&l);
        k=0;
        while(k<l)
        {
            scanf("%d",&a[k]);
            k++;
        }
        i++;
        j=l/2;
        printf("Case %d: %d\n",i,a[j]);
    }
}
