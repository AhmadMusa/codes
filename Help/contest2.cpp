#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    long int i=0, n;
    while(scanf("%ld",&n)==1)
    {
        i=0;
        long long int num[100000+1];
        long int k =n ;
        while(k--)
        {
            long long int input;
            cin>>input;
            num[i++]=input;
        }
        sort(num,num+n);
         long long int ans[100000+1];
        long int count=0;
        if(n==1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else if(n==2)
        {
             long long int t = num[1]-num[0];
            if(t==0)
            {
                cout<<"1\n"<<num[0]<<endl;
                continue;
            }
            else
            {
                ans[count++]= num[0]-t;
                if((num[1]-num[0]) % 2==0)
                {
                    ans[count++]=(num[0]+num[1])/2;
                }
                ans[count++]=num[1]+t;
            }
        }
        else
        {
            long int  j;
            long long int t = num[1]-num[0];
            for(j=1; j<n-1 ; j++)
            {
                if(num[j+1]-num[j]!=t)
                    break;
            }
            if(j==n-1)
            {
                ans[count++]= num[0]-t;
                ans[count++]=num[n-1]+t;
            }
            else
            {
                if((num[j+1]-num[j]) && t && (num[j+1]-num[j])%t==0)
                    cout<<"1\n"<<num[j]+t<<endl;
                else
                {
                    t= num[n-1]-num[n-2];
                    for(j=n-2; j>0 ; j--)
                    {
                        if(num[j]-num[j-1]!=t)
                            break;
                    }
                    if(j==0)
                    {
                        ans[count++]= num[0]-t;
                        ans[count++]=num[n-1]+t;
                    }
                    else
                    {
                        if((num[j]-num[j-1])%t==0 &&t&& (num[j]-num[j-1]))
                            cout<<"1\n"<<num[j]-t<<endl;
                        else
                            cout<<"0"<<endl;
                    }
                }
                continue;
            }
        }

        if(count==2)
        {
            if(ans[0]==ans[1])
                cout<<"1\n"<<ans[0]<<endl;
            else
            {
                cout<<count<<endl;

            for(long int j=0; j<count-1 ; j++)
                cout<<ans[j]<<" ";
            cout<<ans[count-1]<<endl;
            }
        }
        else
        {
            cout<<count<<endl;

            for(long int j=0; j<count-1 ; j++)
                cout<<ans[j]<<" ";
            cout<<ans[count-1]<<endl;
        }
    }
    return 0;

}
