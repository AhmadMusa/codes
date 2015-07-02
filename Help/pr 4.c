// palindrome or not
#include <stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
    int rev=0;

    int save=n;

    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==save)
        printf("Palindrome");
    else
        printf("Not palindrome");
}
