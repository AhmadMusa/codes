#include <stdio.h>
int main()
{
    struct subject
    {
        float gp;
        float credit;
    };

    struct stu
    {
        int roll ;
        char name[10];
        struct subject course[3]; /*3 ta course per student*/
    };

    struct stu s[4]; /*4 jon student er profile*/

    int i, j;
    for(i=0;i<4;i++)
    {
        float total=0, totalcredit=0;
        printf("Enter roll and name of student %d : ",i+1);
        scanf("%d %s",&s[i].roll,s[i].name);
        for(j=0;j<3;j++)
        {
            printf("Subject %d\nGP Credit\n",j+1);
            scanf("%f %f",&s[i].course[j].gp, &s[i].course[j].credit);
            total+= (s[i].course[j].gp)*(s[i].course[j].credit);
            totalcredit+=s[i].course[j].credit;

        }
        printf("Student Name : %s\nTotal GP = %.2f and Total credit of subjects %.2f\n\n",s[i].name,total,totalcredit);
    }
    return 0;
}
