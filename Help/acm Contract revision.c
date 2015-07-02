#include <stdio.h>
#include <string.h>
int main()
{
    //freopen("too.txt","r",stdin);
    char input[1000];
    int num;
    while(scanf("%d",&num)==1)
    {

        if(num==0)
            return 0;
        scanf("%s",&input);

        char output[1000];
        int count=0,flag=0, i;
        int length= strlen(input);
        for(i=0; i<length; i++)
        {

            if(input[i]-'0'!=num)
            {
                if(input[i]-'0'==0)
                {
                    if(flag)
                        output[count++]=input[i];
                }
                else
                {
                    output[count++]=input[i];
                    flag=1;
                }
            }
        }
        output[count]='\0';
        if(strlen(output)==0)
            printf("0\n");
        else
            printf("%s\n",output);
    }
return 0;
}
// Solved and AC in 0.012 sec.
