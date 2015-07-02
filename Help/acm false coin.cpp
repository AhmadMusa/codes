#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define notTaken 0
#define NoPossibility -1

using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    int dataset;
    cin>>dataset;

    while(dataset--)
    {

        int total_coins, measures;
        cin>>total_coins>>measures;

        int arr[1000];

        memset(arr, notTaken , sizeof(arr));

        for(int i=0; i<measures; i++)
        {
            int coins, save[1000];
            scanf("%d",&coins);

            for(int j=1; j<=2*coins; j++)
            {
                scanf("%d",&save[j]);
            }
            getchar();

            char c;
            scanf("%c",&c);
            if(c=='=')
            {
                for(int j=1; j<=2*coins; j++)
                {
                    arr[save[j]]=NoPossibility;
                }
            }
            else
            {
                for(int j=1; j<=2*coins; j++)
                {
                    if(arr[save[j]]!=NoPossibility)
                        arr[save[j]]++;
                }
            }
        }

        int f=0;

        int m = *max_element(arr,arr+total_coins);
        int ans ;
        for(int i=1; i<=total_coins; i++)
        {
            if(arr[i]==m)
            {
                f++;
                ans = i;
            }
        }

        if(f==0 || f>1)
            printf("0\n");
        else
            printf("%d\n",ans);
        if(dataset)
            printf("\n");
    }
    return 0;
}
