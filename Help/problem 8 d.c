#include <stdio.h>
int main()
{
    char dic[100][2][1000];
    int i;
    printf("Enter words and meanings :");
    for(i=0; i<3; i++)
    {
        scanf("%s",&dic[i][0]);
        getchar();
        gets(dic[i][1]);
    }

    char word[1000];
    scanf("%s",word);

    for(i=0; i<3; i++)
    {
        if(strcmp(word,dic[i][0])==0)
        {
            printf("Meaning of %s is %s\n",word,dic[i][1]);
            break;
        }
    }
}
