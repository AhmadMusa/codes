#include <stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n1,n2,count=0;
    int temp;
    char r[100];
    char ch;
    while(gets(r))
    {

        if(sscanf(r,"%d%c%d=%d",&n1,&ch,&n2,&temp)!=4)
            continue;

        if(ch=='+')
        {
            if(n1+n2==temp)
                count++;
        }
        else if(ch=='-')
        {
            if(n1-n2==temp)
                count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
