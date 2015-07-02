#include <stdio.h>
#include <string.h>
int main()
{
    char s1[200];
    char s2[200];
    char s3[1000];
    int num[1000];
    int num2[1000];

    long int i=0,n ;

    scanf("%ld",&n);
    while(i<n)
    {
        int sum[1000];
        int k, p1=0,l,a=0,p2=0,temp=0;
        scanf("%s %s",&s1,&s2);
        for(k=strlen(s1)-1;k>=0;k--)
        {
            num[p1++]=s1[k]-'0';
        }
        for(k=strlen(s1)-1;k>=0;k--)
        {
            num2[p2++]=s2[k]-'0';
        }
        /*while(p1--)
            printf("%d ",num[p1]);
        printf("\n");
        while(p2--)
            printf("%d ",num2[p2]);
        printf("\n");
*/
    for(k=0,l=0;k<p1&&l<p2;k++,l++)
    {

            temp=temp+num[k]+num2[l];
//printf("%d ",temp);
            if(temp>=10){
               while(temp>=10)
                {
                    sum[a++]=temp%10;
                    temp=temp/10;
                }
            }
            else
            {
                sum[a++]=temp%10;
                temp=temp/10;
            }

    }
    while(a--)
        {
            printf("%d",sum[a]);
        }
    i++;
    }
}
