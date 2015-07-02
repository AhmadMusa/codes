#include <stdio.h>
int start[1000000];
int end[10000000];
int dieroll[1000001];
int player[1000001];
int main()
{
    freopen("too.txt","r",stdin);

    int match(int array1[],int array2[],int ladder,int n);
    long long int test;
    scanf("%lld",&test);
    while(test--)
    {
        long long players, ladder_snake, die;

        scanf("%lld %lld %lld",&players,&ladder_snake,&die);

        int i;
        for(i=0; i<players; i++)
            player[i]=1;
        for(i=0; i<ladder_snake; i++)
        {
            scanf("%d %d",&start[i],&end[i]);
        }
        int cou=-1;
        for(i=0; i<die; i++)
        {
            scanf("%d",&dieroll[i]);
        }
        for(i=0; i<die; i++)
        {
            player[++cou]+=dieroll[i];
            int temp=match(start,end,ladder_snake,player[cou]);
            if(temp!=0)
            {
                player[cou]=temp;
            }
            if(player[cou]>=100)
                break;
            if(cou==players-1)
                cou=-1;
        }
        for(i=0; i<players; i++)
            printf("Position of player %d is %d.\n",i+1,player[i]);

    }
}
int match(int array1[],int array2[],int ladder,int n)
{
    int i;
    for(i=0; i<ladder; i++)
    {
        if(n==array1[i])
        {
            int temp=array2[i];
            return temp;
            break;
        }
    }
    if(i==ladder)
        return 0;
}
