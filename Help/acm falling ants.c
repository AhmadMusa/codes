#include <stdio.h>
int main()
{
    long long  int number;
    while(scanf("%lld",&number)==1 &&  number )
    {
        long long int L, W , H, volume=1, highest=1;
        while(number--)
        {
            scanf("%lld %lld %lld",&L,&W,&H);
            if(H>highest)
            {
                volume= L*H*W;
                highest = H;
            }
            else if(H==highest)
            {
                if(volume< (L*H*W))
                {
                    volume= L*H*W;
                }
            }
        }
        printf("%lld\n",volume);
    }
    return 0;
}
