#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int m ;
    while(scanf("%d",&m)==1)
    {

        int arr[m];
        for(int i=0; i<m; i++)
            scanf("%d",&arr[i]);
        int low , high;
        scanf("%d %d",&low,&high);
        long int sum=0,pass=0;
        for(int i=0; i<m; i++)
        {
            sum=sum+arr[i];
            if(sum>=low && sum<=high)
            {
                pass=i+2;
                break;
            }
        }
        printf("%ld\n",pass);

    }
    return 0;
}
