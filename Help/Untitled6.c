#include <stdio.h>
int main()
{
    int arr[4]={1,2,3,4};
    S(arr,2,4);
    int i;
    for(i=0;i<4;i++)
        printf("%d ",arr[i]);
}
int S(int *p, int n,int s)
{
    int i;
    for(i=0; i<s; i++)
    {
        *(p+i)=*(p+i)+n;
    }
    printf("[%d]\n",*(p+0));
}
