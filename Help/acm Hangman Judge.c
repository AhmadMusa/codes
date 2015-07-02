#include <stdio.h>
int main()
{
    freopen("too.txt","r",stdin);
    int round;
    while(scanf("%d",&round)==1)
    {
        if(round==-1)
            return 0;

        char correct[1000];
        char answer[1000];
        scanf("%s",&correct);
        scanf("%s",&answer);

        int wrong=0, i, j ,flag=0;



    }
    return 0;
}
