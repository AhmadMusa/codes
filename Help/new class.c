#include <stdio.h>
int main()
{
  int array[25], maximum, minimum,size,test,c;
  scanf("%d", &test);
  while(test--)
{
  scanf("%d", &size);
  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);
  maximum = 0;
      minimum = 100;
  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
    }

     if (array[c] < minimum)
    {
       minimum  = array[c];
    }
  }
  printf("%d %d %d\n",maximum,minimum,2*(maximum-minimum));
}
  return 0;
}
