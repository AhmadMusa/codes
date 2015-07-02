#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    char ps[1000];
    char n[1000];
    scanf("%s",ps);
    int length1, length2;
    int i,j;
    length1=strlen(ps);
    i=length1-1;
    while(1)
    {

        scanf("%s",s);
        int f,d=-1,temp=0,save=0;

         printf("%d %d",strlen(ps),strlen(s));
        length2=strlen(s);
        j=length2-1;

        while(i>=0)
        {
            if(j<0)
                s[j]=0;
            temp=ps[i]+s[j]+ save*10;

            if(temp>=10)
            {
                f=temp;
                temp=temp%10;
                n[d++]= temp+'0';
                printf("%d\n",temp);
                save=f/10;
            }
            else
                {
                    n[d++]=temp+'0';
                    printf("%d\n",temp);
                }
            i--;
            j--;
        }
        printf("%s",(n));

    }
}
