#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    unsigned long long int a , b,remainder;
    while(cin>>a>>b)
    {
      unsigned long long  int x=a, y=b;
        if(a==b)
        {
            printf("0\n");
            continue;
        }
if(b<=0)
{
    printf("-1\n");
    continue;
}
        while( b != 0 )
        {
            remainder = a % b;
            a = b;
            b= remainder;
        }

      unsigned  long long  int t= a;
       unsigned long long int count1=0,count2=0,flag=0;

        while(x!=t)
        {


             if(x%2==0)
               {

                   x=x/2;
               }
            else if(x%3==0)
                {

                    x=x/3;
                }
            else if(x%5==0)
               {

                x=x/5;
               }
            else
            {
                flag=1;
                break;
            }
            count1++;
        }

        while(y!=t)
        {
            if(y%2==0)
                y=y/2;
            else if(y%3==0)
                y=y/3;
            else if(y%5==0)
                y=y/5;
            else
            {
                flag=1;
                break;
            }
            count2++;
        }
        if(flag==1 )
            printf("-1\n");
        else
        {
        cout<<count1+count2<<endl;
        }
    }
    return 0;
}
