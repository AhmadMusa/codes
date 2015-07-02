#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int check[101];
int sum=0;
int maxSum;
void subsetSum(int n, int i , int target, int num[])
{


}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int num[101];
        int no, s=0 , division;
        cin>>no;
        for(int i=0; i<no ; i++)
        {
            cin>>num[i];
            s+=num[i];
        }
        int target = s/2;
        long int secSum=0;
        sum =0, maxSum=0;

        memset(check,0,sizeof(check));


    }

    return 0;
}
