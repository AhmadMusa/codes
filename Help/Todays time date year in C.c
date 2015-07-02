#include<stdio.h>
#include <time.h>
int main()
{
    time_t biggest= 0x7FFFFFFF;
    time(&biggest);
    printf("   %s\n",ctime(&biggest));
    return 0;
}

