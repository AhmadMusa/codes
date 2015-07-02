#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int arr[1000000];
int main()
{
  long long int n,k,l,r,sall,sk ;
  while(cin>>n>>k>>l>>r>>sall>>sk)
 {
     long int a1=0, c=0,a2=0, l1=0, r1=0, k1=0;
     long int arr[1000];
long int rest=0, t=0,t1=0,re=0, re1=0;
     if(sk%k==0){
        long int ans1= sk/k;
        k1+=ans1;

  rest= sall-sk;
    re = n-k;
     if(rest%re==0)
     {
          re1= (rest/re);
     }
     else
     {
        while(rest%re!=0)
{
    rest=rest-r;
    re--;
    r1++;

}
t=rest/re;
t1=re;
re=0;
     }
     }
     else
     {
 rest= sk;
    re = k;
     if(rest%re==0)
     {
          re1= (rest/re);
     }
     else
     {
      while(rest%re!=0)
{
    rest=rest-r;
    re--;
    r1++;

}
t=rest/re;
t1=re;
re=0;
     }
      rest= sall-sk;
    re = n-k;
     if(rest%re==0)
     {
          re1= (rest/re);
     }
     else
     {
        while(rest%re!=0)
{
    rest=rest-r;
    re--;
    r1++;

}
l=rest/re;
l1=re;
re=0;

     }
     }

     for(long int i=0;i<r1;i++)
        arr[c++]=r;
for(long int i=0;i<t1;i++)
        arr[c++]=t;


    for(long int i=0;i<l1;i++)
        arr[c++]=l;


    for(long int i=0;i<re;i++)
     arr[c++]=re1;

    for(long int i=0;i<k1;i++)
        arr[c++]=k;

for(long int i=0;i<c-1;i++)
    printf("%d ",arr[i]);
if(c!=0)
printf("%d",arr[c-1]);

            printf("\n");


 }
 return 0;
}

