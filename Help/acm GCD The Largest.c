#include <stdio.h>
int main()
{
    unsigned long long int test , n;
    scanf("%llu",&test);
    while(test--)
    {
        scanf("%llu",&n);
        printf("%llu\n",n/2);

    }
    return 0;
}
