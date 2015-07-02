#include <stdio.h>
int main()
{
    int n , k;
    while(scanf("%d %d",&n,&k)==2)
    {
        int i;
        int s[101];
        for(i=0;i<n;i++)
            scanf("%d",&s[i]);
        int a =0, b=0;
        for(i=0;i<k;i++)
        {
            if(s[i]==1)
                a++;
            else
                b++;
        }
        int j,a1=0,b1=0,count=0;
        for(i=k;i<n-k;i++)
        {
            int t=i+k;
            a1=0,b1=0;
            for(j=i;j<t;j++)
            {
                if(s[j]==1)
                    a1++;
                else
                    b1++;
            }
            if((a1-a)>(b1-b))
                count+=a1-a;
            else
                count+=b1-b;
        }
        printf("%d\n",count);
    }
}
