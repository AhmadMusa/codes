#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int convert(char c)
{
    if(c>='A'&&c<='C')
        return 2;
    else  if(c>='D'&&c<='F')
        return 3;
    else  if(c>='G'&&c<='I')
        return 4;
    else  if(c>='J'&&c<='L')
        return 5;
    else if(c>='M'&&c<='O')
        return 6;
    else  if(c>='P'&&c<='S')
        return 7;
    else if(c>='T'&&c<='V')
        return 8;
    else if(c>='W'&&c<='Y')
        return 9;

}
int main()
{
    freopen("input.txt","r",stdin);
    int dataset;
    cin>>dataset;

    while(dataset--)
    {
        getchar();
        char input[100001][20];
        long int total_strings;
        cin>>total_strings;

        vector<string> work;
        map<string, int> count;

        for(long int i=0; i<total_strings; i++)
        {
            string str;
            char cstr[100];
            scanf("%s",&input[i]);

            int j, length=0;
            for( j=0; j<strlen(input[i]); j++)
            {
                if(input[i][j]!='-')
                {
                    if(input[i][j]>='A' && input[i][j]<='Z')
                    {
                        int n = convert(input[i][j]);
                        cstr[length++]=n+'0';
                    }
                    else
                    {
                        cstr[length++]=input[i][j];
                    }
                }
            }

            cstr[length]='\0';
            str = cstr;

            work.push_back(str);
            count[str]++;
        }
        sort(work.begin(),work.end());
        int flag=0;
        for(long int i=0; i<work.size(); i++)
        {
            if(count[work[i]]>1)
            {
                const char *cstr = work[i].c_str();
                for(int i=0; i<3; i++)
                {
                    printf("%c",cstr[i]);
                }
                printf("-");
                for(int i=3; i<strlen(cstr); i++)
                {
                    printf("%c",cstr[i]);
                }
                printf(" %d\n",count[work[i]]);
                count[work[i]]=1;
                flag=1;
            }
        }
        if(flag==0)
            printf("No duplicates.\n");
        if(dataset)
            printf("\n");
    }
    return 0;
}
