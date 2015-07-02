//ACCEPTED
#include <iostream>
#include <stack>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int num;
    while(scanf("%d",&num)==1 && num)
    {

        int i ,j;
        int sign =1;
        while(sign)
        {

            stack <int> rails;

            int t=1, flag=0 ;
            for(i=1 ; i <= num ; i++)
            {
                int temp;
                scanf("%d",&temp);
                if(temp==0)
                {
                    sign=0;
                    printf("\n");
                    break;
                }
                if(rails.size())
                {
                    if(temp==rails.top() && flag==0)
                    {
                        flag=0;
                        rails.pop();
                        continue;
                    }
                }
                for( j=t; j<=num ; j++)
                {
                    if(j!=temp)
                    {
                        rails.push(j);
                    }
                    else
                    {
                        t=j+1;
                        break;
                    }
                }
                if(j==num+1)
                {
                    flag=1;
                }
            }
            if(sign)
            {
                if(flag==1)
                    printf("No\n");
                else
                    printf("Yes\n");
            }

        }

    }
    return 0;
}
