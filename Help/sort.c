#include <stdio.h>
void sort(int a[], int n)
{
    int i , j , temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int i;
    int array[5]={3,6,45,5,7};
    void sort(int a[], int n);

    for(i=0;i<5;i++)
        printf("%i\n",array[i]);
    printf("\n");

    sort(array,5);

    for(i=0;i<5;i++)
        printf("%i\n",array[i]);

}
