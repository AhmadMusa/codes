#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
long long int arr[101];
int f(long long int num,int k);
int main()
{
    int k , n;
    while(scanf("%d %d",&n,&k)==2)
    {
        int i,flag=1,count=0;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            if(f(arr[i],k)==0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;

}
int f(long long int num,int k)
{
    int a[10];
    int flag=0;
    int c=0,i;
    int av[10]={1,1,1,1,1,1,1,1,1,1};
    do
    {
        a[c++]=num%10;
        num=num/10;
    }while(num!=0);
    for(i=0;i<c;i++)
    {
        if(a[i]==0)
            av[0]=0;
        else if(a[i]==1)
            av[1]=0;
        else if(a[i]==2)
            av[2]=0;
        else if(a[i]==3)
            av[3]=0;
        else if(a[i]==4)
            av[4]=0;
            else if(a[i]==5)
            av[5]=0;
        else if(a[i]==6)
            av[6]=0;
            else if(a[i]==7)
            av[7]=0;
            else if(a[i]==8)
            av[8]=0;
        else if(a[i]==9)
            av[9]=0;
    }

    for(i=0;i<c;i++)
    {
        if(av[i]==1)
            flag=1;
    }
   if(flag==1)
    return 1;
   else
    return 0;
}
