#include <stdio.h>

void quickSort(int[],int, int);
int partition(int[],int,int);

void main()
{
    int a[]={4,6,3,-1,15,63,5,2,93};
    int i;
    quickSort(a,0,8);
    for(i=0;i<9;i++)
        printf("%d",a[i]);


}

void quickSort(int a[],int l, int r)
{
    int j;
    if(l<r)
    {
        j=partition(a,l,r);
        quickSort(a,l,j-1);
        quickSort(a,j+1,l);
    }
}

int partition(int a[],int l, int r)
{
    int pivot, i,j,t;

    pivot=a[l];
    i=l, j=r+1;

    while(1)
    {
        do ++i;
        while(a[i]<=pivot && i <=r);
        do --j;
        while(a[j]>pivot);

        if(i>=j)
            break;
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    t=a[i];
        a[i]=a[j];
        a[j]=t;
        return t;
}
