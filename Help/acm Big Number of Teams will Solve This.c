#include <stdio.h>
#include <string.h>
int main()
{
    int alphabet(char s);

    int test,k=1,cou=1;
    scanf("%d",&test);
    char c;
    while((c=getchar())!='\n' && c!=EOF);
    while(k<=test)
    {
        char in[100];
        char out[100];

        gets(in);
        gets(out);

        int i,j=0,flag=0,shit=0,count=0,n=1;

        for(i=0; i<strlen(in); i++ )
        {
            if(in[i]==' ')
            {
                if(i==strlen(in)-1)
                    count=1;
                else
                    shit=1;
            }
            if(alphabet(in[i])==1)
            {
                if(in[i]==out[j])
                {
                    j++;
                }
                else
                {
                    flag=1;
                    break;
                }
            }

        }
        if(flag==0  && j==strlen(out))
        {
            if(shit==1)
                printf("Case %d: Output Format Error\n",cou++);
            else
            {
                if(strlen(in)==strlen(out) && count==0 )
                    printf("Case %d: Yes\n",cou++);
                else
                {
                    if(strlen(out)<strlen(in))
                        printf("Case %d: Output Format Error\n",cou++);
                    else
                        printf("Case %d: Wrong Answer\n",cou++);
                }
            }
        }
        else
            printf("Case %d: Wrong Answer\n",cou++);

        k++;
    }
    return 0;
}
int alphabet(char s)
{
    if((s>='a' && s<='z') || (s>='A' && s<='Z'))
        return 1;
    else
        return 0;
}
