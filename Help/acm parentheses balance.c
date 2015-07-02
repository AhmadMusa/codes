#include <stdio.h>
#include <string.h>
char str[129000];
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(str);
        int i,j,countR=0,count=0,flag=0;
        for(i=0; str[i]!='\0'; i++)
        {
            if(str[i]==')'|| str[i]==']')
            {
                flag=1;
                if(str[i]==')')
                {
                    str[i]=1;
                    countR++;
                    for(j=i-1; j>=0; j--)
                    {
                        if(str[j]!=1)
                        {
                            if(str[j]=='(')
                            {
                                str[j]=1;
                                count++;
                            }
                            break;
                        }
                    }
                }
                else if(str[i]==']')
                {
                    str[i]=1;
                    countR++;
                    for(j=i-1; j>=0; j--)
                    {

                        if(str[j]!=1)
                        {
                            if(str[j]=='[')
                            {
                                str[j]=1;
                                count++;
                            }
                            break;
                        }
                    }
                }
            }
        }
        if((flag==1 && (count+countR)%2==0 && (countR+count)==strlen(str)) || strlen(str)==0)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}
