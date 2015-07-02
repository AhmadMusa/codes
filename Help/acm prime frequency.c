#include <stdio.h>
#include <string.h>
int main()
{
    int t,i=0;
    scanf("%d",&t);
    while(i<t)
    {
        char s[2001];
        int j,count=0,m=0,k,o,count1=0,l;
        scanf("%s",&s);
        l=strlen(s);
        j=0;
        while(j<(l-1))
        {
            o=j;
            m=m+count;
            count=0;
            for(k=j+1;k<l;k++)
            {
                if(s[k]==s[j])
                {
                    count++;
                }
            }
            if(1==prime(count))
                printf("%c",s[o]);
            if(count==0)
                j=j+1;
            else
                j=j+m+count+1;
        }

        i++;
    }

}

int prime(int n)
{
    int i=0;
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3;i<=sqrt(n);i++)
        if(n%i==0)
    {
        return 0;
    }
    return 1;


}
