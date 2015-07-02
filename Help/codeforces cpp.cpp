#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int  n , k , x ;
    while(cin>>n>>k>>x)
    {
        int arr[n+1];
        for(int i =0; i<n; i++)
        {
            cin>>arr[i];
        }

        int total = 0;
        int mtotal  =0;
        for(int i =0; i<n; i++)
        {
            if(arr[i]==x && arr[i+1]==x && n!=1)
            {
                total = 2;
                if(arr[i-1]==arr[i+2])
                {

                    int cmp = arr[i-1], j= i-2, l= i+3;
                    int f = 0;
                    cases:

                    for( j ;j>=0; j--)
                    {
                        if(arr[j]!=cmp)
                            break;
                        f=1;
                        total++;
                    }


                    for(l ;l<n; l++)
                    {
                        if(arr[l]!=cmp)
                            break;
                        f=1;
                        total++;
                    }
                    if( f==1)
                    {
                        total+=2;
                    }
                    if(arr[l]==arr[j] &&( j>=1 || l<n-1)){
                            cmp = arr[l];
                            j--; l++;
                            f=0;
                        goto cases;
                    }
                }
                 if(mtotal<total)
                 {
                     mtotal=total;
                 }
                 total=0;
            }
        }

        cout<<mtotal<<endl;
    }
}
