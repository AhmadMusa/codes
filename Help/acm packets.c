#include <stdio.h>
int main()
{
    freopen("PACKET.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    long int a,b,c,d,e,f;
    while(scanf("%ld %ld %ld %ld %ld %ld",&a,&b,&c,&d,&e,&f)==6)
    {
        if(a==0 && b==0 && c==0 && d==0 &&e==0 &&f==0)
            break;

        //long long first , sec , third, fourth , fifth , sixth;

        long long total;
        total+=f+e+(c/4)+;
        a=a-9;

        //total = first + sec + third + fourth + fifth + sixth ;
        //long check , ans;

        //check = 36 * ans;
        //if(check!=total)
            ans++;

        printf("%ld\n",total);

    }
    return 0;
}
