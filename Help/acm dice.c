#include <stdio.h>
int main()
{
    int t, i=0;
    scanf("%d",&t);
    while(i<t)
    {
        int j=0,sum1=0,sum2=0;
        char a[7];
        char b[7];
        scanf("%s",&a);
        scanf("%s",&b);

        for(j=0;j<6;j++)
        {
            sum1=sum1+a[j]-'0';
            sum2=sum2+b[j]-'0';

        }
        if(sum1!=sum2)
            printf("Not Equal\n");
        else
            printf("Equal\n");
        i++;
    }
return 0;
}
