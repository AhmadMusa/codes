#include <stdio.h>
int count=0;
int sum=0;
int f=0;
int main()
{
    freopen("input.txt","r",stdin);
    int t,c=1;
    scanf("%d\n",&t);
     int total =0;
    while(c<t)
    {
        int flag=0;
        while(1)
        {
            int flag=func(1);
            total += sum;
            count=0;
            sum=0;
            f=0;
            if(flag==1)
            {
                break;
            }
        }
        printf("%d\n",total);
        total=0;
        c++;
    }
    char str[10000];
    scanf("%s",str);
    int i ;
    count=0;
    total=0;
    for(i=0; i<strlen(str);i++)
    {
        if(str[i]=='O')
        {
            count++;
             total+=count;
        }
        else
        {
            count=0;
        }
    }
    printf("%d\n",total);
    return 0;
}

int func(int n)
{
    char c;
    scanf("%c",&c);
    if(c=='X')
    {
        return 0;
    }
    if(c=='\n')
    {
        f=1;
        return 1;
    }

    count++;
    func(n+1);

    sum +=(count);
    count--;
    if(f)
        return 1;
    else
        return 0;
}
