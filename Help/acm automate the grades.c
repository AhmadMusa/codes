#include <stdio.h>

int main()
{
    int test;
    scanf("%d",&test);
    int i=1;
    while(i<=test)
    {
        int term1,term2,finalMarks, att, ct1,ct2,ct3,temp1,temp2,total=0;
        scanf("%d %d %d %d %d %d %d",&term1,&term2,&finalMarks,&att,&ct1,&ct2,&ct3);
        if(ct1>ct2)
        {
            temp1=ct1;
            if(ct2>ct3)
                temp2=ct2;
            else
                temp2=ct3;
        }
        else
        {
            temp1=ct2;

            if(ct1>ct3)
                temp2=ct1;
            else
                temp2=ct3;
        }
        total+=term1+term2+finalMarks+att+(temp1+temp2)/2;
        printf("Case %d: %c\n",i,grade(total));
        i++;
    }
    return 0;
}

int grade(int n)
{
    if(n<60)
        return 'F';
    else if(n<70)
        return 'D';
    else if(n<80)
        return 'C';
    else if(n<90)
        return 'B';
    else
        return 'A';
}
