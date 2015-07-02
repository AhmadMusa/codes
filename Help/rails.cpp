#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    freopen("cr.txt","r",stdin);
    int n, arr[1000];
    vector <int> save;
    vector <int>:: iterator it;
    it=save.begin();
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        int count=0;

        while(count<n)
        {
            scanf("%d",&arr[count++]);

            int target=n;
            int flag=0;
            if(count==1 && arr[count-1]==0)
                break;
            if(count==n)
            {
                int index=n-1,c=0;
                while(index>=0)
                {

                    if(arr[index]!=target)
                    {

                        if(c>1)
                        {

                            if(save.back()==target)
                            {
                                it=save.end();
                                save.erase(it);
                            }
                            else
                            {
                                if(save[c-2] - save[c-1] != 1)
                                {
                                    flag=1;
                                    break;
                                }
                            }
                        }

                        save[c++]=arr[index];

                        index--;
                    }
                    else
                    {
                        printf("s");
                        index--;
                        target--;
                    }
                }
                if(index<0 || (flag==0 &&target==n-1))
                    printf("Yes\n");
                else
                    printf("No\n");
                count=0;
            }

        }

    }
}

