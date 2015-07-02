#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.out","w",stdout);
    int testcase, cases=1;
    cin>>testcase;
    while(testcase--)
    {
        long int numberOfMotes;
        long long int sizeOfInit ;
        cin>>sizeOfInit>>numberOfMotes;
        long int arr[numberOfMotes+1];
        for(int i=0; i<numberOfMotes; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+numberOfMotes);
        long int operation=0;
        long int ans = numberOfMotes;
        for(int i=0; i<numberOfMotes; i++)
        {
            if((operation + numberOfMotes-i) < ans) {
				ans = operation + numberOfMotes-i;
			}
            while(sizeOfInit<=arr[i] && operation<=ans)
            {
                sizeOfInit = sizeOfInit + (sizeOfInit-1) ;
                operation++;
            }
            if(operation>ans)
                break;
            sizeOfInit+=arr[i];
        }
        if(operation<ans)
            ans = operation;
        printf("Case #%d: %ld\n",cases++,ans);

    }
    return 0;
}
