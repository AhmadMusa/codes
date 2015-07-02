#include <stdio.h>
void main ()
{
char *day[7]= {"sunday","monday","tuesday","wednesday","thursday","friday","satarday"},g;
char Day[10];
printf("Enter group (a or b):");
scanf("%c", &g);
printf("Enter day (sunday or monday or tuesday or wednesday or thursday or friday or satarday):");
scanf("%s",Day);

if(g=='a')
{
printf("\n\t\t Routine CSE 2K12 Group A\n");

if (strcmp(day[0],Day)==0)
{
printf("***************************%s*******************\n", day[0]);
printf("08:00-10:30\t10:40-11:30\t11:30-12:20\t12:20-01:10\n");
printf("-----------\t-----------\t-----------\t-----------\n");
printf("Phy 1108(Lab)\t Math 1107\t Phy 1107\t EEE 1107\n\n");
}

if (strcmp(day[1],Day)==0)
{
printf("***************************%s***************************\n", day[1]);
printf("08:50-09:40\t09:40-10:30\t10:40-01:10\n");
printf("-----------\t-----------\t-----------\n");
printf(" Hum 1107\t CSE 1101\tCSE 1102(Lab)\n\n");
}

if (strcmp(day[2],Day)==0)
{
printf("***************************%s***************************\n", day[2]);
printf("08:00-10:30\t08:50-09:40\t11:30-12:20\t12:20-01:100\t02:30-05:00\n");
printf("-----------\t-----------\t-----------\t-----------\t-----------\n");
printf(" Hum 1107\t CSE 1101\t Math 1107\t Phy 1107\tEEE 1108(Lab)\n\n");
}

if (strcmp(day[3],Day)==0)
{
printf("***************************%s***************************\n", day[3]);
printf("08:00-08:50\t08:50-09:40\t09:40-10:30\t10:40-11:30\t11:30-12:20\n");
printf("-----------\t-----------\t-----------\t-----------\t-----------\n");
printf(" CSE 1101\t Phy 1107\t Hum 1107\t EEE 1107\t Math 1107\n\n");
}

if (strcmp(day[4],Day)==0)
{
printf("***************************%s***************************\n", day[4]);
printf("08:50-09:40\t09:40-10:30\n");
printf("-----------\t-----------\n");
printf(" EEE 1107\t Phy 1107\n\n");
}

if (strcmp(day[5],Day)==0)
{
printf("weekly holiday\n");
}

if (strcmp(day[6],Day)==0)
{
printf("\nweekly holiday\n");
}
if((g!='a') && (Day!=day))
printf("\nwrong input\n");

printf("\ncopyright (c) golap cse 2k12\n");

}

else if(g=='b')
{
printf("\n\t\t Routine CSE 2K12 Group B\n");

if (strcmp(day[0],Day)==0)
{
printf("**************************%s*******************\n", day[0]);
printf("10:40-11:30\t11:30-12:20\t12:20-01:10\n");
printf("-----------\t-----------\t-----------\n");
printf(" Math 1107\t Phy 1107\t EEE 1107\n\n");
}

if (strcmp(day[1],Day)==0)
{
printf("***************************%s***************************\n", day[1]);
printf("08:50-09:40\t09:40-10:30\t02:30-05:0\n");
printf("-----------\t-----------\t-----------\n");
printf(" Hum 1107\t CSE 1101\tEEE 1108(Lab)\n\n");
}

if (strcmp(day[2],Day)==0)
{
printf("***************************%s*******************\n", day[2]);
printf("08:00-10:30\t08:50-09:40\t11:30-12:20\t12:20-01:100\t02:30-05:00\n");
printf("-----------\t-----------\t-----------\t-----------\t-----------\n");
printf(" Hum 1107\t CSE 1101\t Math 1107\t Phy 1107\tCSE 1102(Lab)\n\n");
}

if (strcmp(day[3],Day)==0)
{
printf("***************************%s*******************\n", day[3]);
printf("08:00-08:50\t08:50-09:40\t09:40-10:30\t10:40-11:30\t11:30-12:20\n");
printf("-----------\t-----------\t-----------\t-----------\t-----------\n");
printf(" CSE 1101\t Phy 1107\t Hum 1107\t EEE 1107\t Math 1107\n\n");
}

if (strcmp(day[4],Day)==0)
{
printf("*******************%s***************************\n", day[4]);
printf("08:50-09:40\t09:40-10:30\t10:40-01:10\n");
printf("-----------\t-----------\t-----------\n");
printf(" EEE 1107\t Phy 1107\tPhy 1108(Lab)\n\n");
}

if (strcmp(day[5],Day)==0)
{
printf("\nweekly holiday\n");
}

if (strcmp(day[6],Day)==0)
{
printf("\nweekly holiday\n");
}
if((g!='b') && (Day!=day))
printf("\nwrong input\n");

printf("\ncopyright (c) golap cse 2k12\n");
}
getch();

}
