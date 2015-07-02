#include <stdio.h>
int a[10];
int main()
{
    int i, j;
    printf("Enter 10 numbers : ");
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);
    /* rearrange the even and odd*/
    int save;

    for(i=0; i<10; i++)
    {
        if(0==evenodd(a[i]))
        {
            for(j=i+1; j<10; j++)
            {
                if(1==evenodd(a[j]))
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    save=i;
                    break;
                }
            }
        }
    }
    //sort the odd numbers
    for(i=0; i<save; i++)
    {
        for(j=0; j<save; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
//sort the even numebrs
    for(i=save+1; i<10; i++)
    {
        for(j=save+1; j<9; j++)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
//print the numbers
    for(i=0; i<10; i++)
        printf("%d ",a[i]);
    return 0;
}


int evenodd(int n)
{
    if(n%2==1)
        return 1;
    else
        return 0;
}

