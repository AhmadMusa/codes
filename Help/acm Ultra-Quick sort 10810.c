#include <stdio.h>

int sort(long long int x[], int n)

{
    int k=0, j=0, count=0;

long long t=0;
    for(k=0;k<(n-1);k++)
        {
            for(j=0;j<(n-1);j++)
            {
            if(x[j]>x[j+1])
            {
                count++;
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
            }
        }
 return count;
}


int main()
{
    int sort(long long int a[1000], int n);
    int n, i, result;
    long long int a[1000];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
    i=0;
    while(i<n)
        {
            scanf("%lld",&a[i]);
            i++;
        }

result=sort(a,n);
printf("%d\n",result);
    }
return 0;

}


