#include <stdio.h>
#include <limits.h>
int main()
{


    long int test;
    scanf("%ld",&test);
    while(test--)
    {
        long int length , number ;
        scanf("%ld %ld",&length, &number);
        long int lowest =INT_MAX ,highest=0, mean = length / 2, minimum=INT_MAX, save=0;
        long int temp;
        while(number--)
        {
            scanf("%ld",&temp);
            if(lowest > temp)
                lowest = temp;
             if(highest < temp)
                highest = temp;
            if(fabs(temp-mean) < minimum)
            {
                minimum = fabs(temp-mean);
                save=temp;
            }
        }
           if((length-save)<(save))
            save=length-save;
           if((length-lowest)>(highest))
            highest=length-lowest;


            printf("%ld %ld\n",save, highest);

    }
    return 0;
}
