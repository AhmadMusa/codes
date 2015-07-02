#include <stdio.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    char c;
    while((c=getchar())!='\n' && c!=EOF);
    while(i<n)
    {
        char a[200];
        int t,sum=0;

        gets(a);
        for(t=0;a[t]!='\0';t++)
        {
            sum=sum+a[t]-'0';
        }
        if(sum%2==0)
            printf("YES\n");
        else
            printf("NO\n");
    i++;
    }
    return 0;
}
