#include <stdio.h>
int main()
{
    int n;
    int Case=1;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        int i=0;
        int temp,count=0,sum=0;
        int a[100];
        while(i<n)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
            i++;
        }
        temp=sum/n;
        for(i=0;i<n;i++)
        {
            if(temp>a[i])
                count+=temp-a[i];
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",Case,count);
        Case++;
    }
    return 0;
}
