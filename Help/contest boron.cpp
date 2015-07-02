#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    int t,cases=1;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i,flag=1;
        long int a[10002], place[n];
        memset(place,-1,sizeof(place));
        for(i=0; i<n; i++)
        {
            scanf("%ld",&a[i]);
            if(place[a[i]]==-1)
            {
                place[a[i]]=a[i];
            }
            else if(place[n-1-a[i]]==-1)
            {
                place[n-1-a[i]]=a[i];
            }
            else
                flag=0;
        }


        if(flag==0 )
            printf("Case %d: no\n",cases++);
        else
            printf("Case %d: yes\n",cases++);
    }
    return 0;
}

