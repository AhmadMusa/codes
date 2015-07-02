#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    freopen("too.txt","r",stdin);
    int test;
    scanf("%d",&test);
    char str[9][9];

    while(test--)
    {
        int a=0,b=0;
        int ki[2],kj[2];
        int i , j;
        getchar();
        char ch;
        for(i=0; i<8; i++)
        {
            scanf("%s",&str[i]);
        }

        for(i=0;i<8;i++)
        {

            for(j=0;j<8;j++)
            {
                if(str[i][j]=='K')
                {

                    ki[a++]=i+1;
                    kj[b++]=j+1;
                }
            }
        }

        if((ki[1]-ki[0])==0)
        {
            if((kj[1]-kj[0])%2==0 && kj[1]-kj[0]>2)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else if(kj[1]-kj[0]==0)
        {
            if((ki[1]-ki[0])%2==0 && ki[1]-ki[0]>2)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            if((ki[1]-ki[0])%2==0 && (kj[1]-kj[1])%2==0)
                printf("YES\n");
            else
                printf("NO\n");
        }

  return 0;
    }
    return 0;
}

