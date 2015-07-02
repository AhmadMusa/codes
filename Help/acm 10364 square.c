#include <stdio.h>
int main()
{
    int t,i=0;
    scanf("%d",&t);
    while(i<t)
    {
        int n, a[100];
        scanf("%d",&n);
    int j,sum=0;
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
        sum=sum+a[j];
    }
    int temp;
    temp=sum/4;
    j=0;
    while(j<n)
    {
        if(a[j]>temp)
            break;
        j++;
    }
    if(j==(n))
        printf("yes\n",j);
    else
        printf("no\n",j);
    i++;
    }
    return 0;
}


