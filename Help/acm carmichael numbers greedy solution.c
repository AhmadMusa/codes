#include <stdio.h>
int main()
{
    int binarySearch(long long int a[], long long int value, int left, int right);

    long int array[16]= {561,1105,1729,2465,2821,6601,8911,10585,15841,29341,41041,46657,52633,62745,63973};

    long int n;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            return 0;
        if(1==binarySearch(array,n,0,15))
            printf("The number %ld is a Carmichael number.\n",n);
        else
            printf("%ld is normal.\n",n);

    }
    return 0;
}
int binarySearch(long long int a[], long long int value, int left, int right)
{

    if (right < left)
        return 0 ;
    int mid = floor((left+right)/2);
    if (a[mid] == value)
        return 1;
    if (value < a[mid])
        binarySearch(a, value, left, mid-1);
    else
        binarySearch(a, value, mid+1, right);
}
