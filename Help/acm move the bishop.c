#include <stdio.h>
int main()
{
    freopen("t.txt","r",stdin);
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n , b;
        scanf("%d %d",&n,&b);

        int r1,c1,r2,c2;
        while(n--)
        {
            scanf("%d %d %d %d",&r1,&c1,&r2,&c2);

            if((r1+c1)%2!=(r2+c2)%2)
                printf("no move\n");
            else
            {
                if(r1==r2 && c1==c2)
                    printf("0\n");
                else if (r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2)
                    printf("1\n");
                else
                    printf("2\n");
            }
        }
    }
    return 0;
}
