#include <stdio.h>

int sort(int x[], int n)

{
    int k=0, j=0, t=0,count=0;


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
    int sort(int a[1000], int n);
    int n, i, result;
    int a[1000];
    while(scanf("%d",&n)!=EOF)
    {
    i=0;
    while(i<n)
        {
            scanf("%d",&a[i]);
            i++;
        }

result=sort(a,n);
printf("Minimum exchange operations : %d\n",result);
    }
return 0;

}

