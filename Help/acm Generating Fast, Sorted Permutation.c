# include <stdio.h>
char comp(const void *a,const void *b)
{
    char *x=(char *)a;
    char *y=(char *)b;
    return *x-*y;
}
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int i, int n)
{
   int j;
   if (i == n)
     printf("%s\n", a);
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j));
       }
   }
}

int main()
{
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char str[1000];
        scanf("%s",str);
//        sort(str,strlen(str));
        permute(str,0,strlen(str)-1);
    }
    return 0;
}
