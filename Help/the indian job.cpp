#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int check[101];
long int sum=0;
int knapSack(int total ,int n ,int count, int target, int num[])
{

}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int no;
        long int cond;
        cin>>no>>cond;
        long int total=0;
        int target;
        int num[101];
        for(int i =0; i<no; i++)
        {
            scanf("%d",&num[i]);
            total+=num[i];
        }
        target = total/2;
        long int secsum=0;
        sum=0;
        memset(check,0,sizeof(check));
        sort(num,num+no);

        for(int i=0; i<no; i++)
        {
            if(check[i])
                secsum+=num[i];
        }
        cout<<secsum<<endl;
        total = fabs(total-secsum);

        long int ans = max(total, secsum);

        if(ans>cond)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
}
