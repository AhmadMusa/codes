#include <stdio.h>
int main()
{
    freopen("too.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n , m;
        scanf("%d %d",&n,&m);
        int arr[n];
        char c;
        int n1,n2;
        int i=0,j;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(j=0; j<m; j++)
        {
            scanf("%c",&c);
            if(c=='P')
            {
                scanf("%d %d",&n1,&n2);
                P(arr,n1,n2);
            }
            else if(c=='R')
                R(arr,n);
            else
            {
                scanf("%d",&n1);
                if(c=='S')
                    S(arr,n1,n);
                else if(c=='M')
                    M(arr,n1,n);
                else if(c=='D')
                    D(arr,n1,n);
            }
        }

        for(i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");

    }

}
int S(int *p, int n,int s)
{
    int i;
    for(i=0; i<s; i++)
    {
        *(p+i)+=n;
    }
    printf("[%d]\n",*(p+0));
}
int M(int *p, int n,int s)
{
    int i;
    for(i=0; i<s; i++)
    {
        *(p+i)=(*(p+i)) *(n);
    }
}
int D(int *p, int n,int s)
{
    int i;
    for(i=0; i<s; i++)
    {
        *(p+i)=*(p+i)/n;
    }
}
int R(int *p, int s)
{
    int i;
    int arr[s];
    int j=0;
    for(i=s-1; i>=0; i--)
    {
        arr[j++]=*(p+i);
    }
    for(i=0; i<s; i++)
    {
        *(p+i)=arr[i];
    }

}
int P(int *p , int n1, int n2)
{
    int t;
    t=*(p+n1);
    *(p+n1)=*(p+n2);
    *(p+n2)=t;
}
