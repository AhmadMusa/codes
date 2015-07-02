#include <stdio.h>
int array[1000];
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int num_of_cows;
        scanf("%d",&num_of_cows);
        int i;
        for(i=0;i<num_of_cows;i++)
        {
            scanf("%d",&array[i]);
        }

    }
}
