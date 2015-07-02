#include <stdio.h>
int main()
{
    int test,Case=1;
    scanf("%d",&test);
    while(test--)
    {
        int n, p ,q;
        scanf("%d %d %d",&n,&p,&q);
        int egg[n];
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&egg[i]);
        }
        int temp;
        for(i=0;i<n-1;i++)
        {
            if(egg[i]>egg[i+1])
            {
                temp=egg[i];
                egg[i]=egg[i+1];
                egg[i+1]=temp;
            }
        }
        int sum=0,count=0;
        for(i=0;i<n;i++)
        {
            if(count==p || (q-sum)<egg[i])
                break;
            sum+=egg[i];
            count++;

        }
        printf("Case %d: %d\n",Case++,count);

    }
    return 0;
}
