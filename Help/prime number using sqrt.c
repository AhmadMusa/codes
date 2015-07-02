#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
   int i, root;
   if(n == 2)
    {
   return 1;
    }

if(n % 2 == 0) {
return 0;
}
root = sqrt(n);
for(i = 3; i <= root; i = i + 2)
{
if(n % i == 0)
{
return 0;
}
}
return 1;
}

int reverse(int n)
{
    int temp, i ,j;
    temp=n;
    while(temp!=0)
    {
        i = i*10 + temp%10;
        temp = temp/10;
    }
    int is_prime(int n);
    j=is_prime(i);
    return j;
}
int main()
{
int n, m;
while(1)
{
printf("Please enter a number (enter 0 to exit): ");
scanf("%d", &n);
if(n == 0) {
break;
}
if(1 == is_prime(n) && 1==reverse(n)) {
printf("%d is a emirp number.\n", n);
}
else {
printf("%d is not a prime number.\n", n);
}
}
return 0;
}
