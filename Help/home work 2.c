#include <stdio.h>
int main()
{
    printf("How many numbers?\n");
    int num;
    scanf("%d",&num);
    int numbers[num];

    int i=0;
    for(i=0; i<num; i++)
    {
        scanf("%d",&numbers[i]);
    }
    printf("\n Result : \n");
    int count=1;
    for(i=0; i<num; i++)
    {
        if(numbers[i]!=-1)
        {
            count=1;
            for(j=i+1; j<num; j++)
            {
                if(numbers[i]==numbers[j])
                {
                    count++;
                    numbers[j]=-1;
                }
            }
            printf("%d : %d times\n",numbers[i],count);
        }
    }

return 0;
}
