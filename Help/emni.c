#include<stdio.h>
int main()
{
    int i,j,k,l,m,n=10,p,temp;
    int a[10];
    printf("Enter 10 value : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
        /*arranging odds together then evens together*/
    for(i=n-1;i>=0;i--)
        for(j=0;j<i;j++)
    {
        if(a[j]%2==0&&a[j+1]%2==1)
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
//    for(i=0;i<n;i++)
//    printf("\n%d",a[i]);

    int even=0,odd=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even+=1;
        else odd+=1;
    }
    //printf("\nEven=%d,Odd=%d",even,odd);
    /*printing odds in ascending order first*/
    for(i=odd-1;i>=0;i--)
        for(j=0;j<i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    printf("\nnew array is : ");
    for(i=0;i<odd;i++)
        printf("%d  ",a[i]);
    /*then printing evens in descending order*/
    for(i=n-1;i>=odd;i--)
        for(j=odd;j<i;j++)
    {
        if(a[j]<a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    for(i=odd;i<n;i++)
        printf("%d  ",a[i]);
    return 0;
}
