#include <cstdio>
#include <cstring>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;
int main()
{
    HANDLE txtcolor;
    txtcolor = GetStdHandle(STD_OUTPUT_HANDLE);
    while(1)
    {
        system("cls");

        printf("\t\t\tWELCOME !");
        printf("\n\n\t KUET_DESLOR proudly presents CSE 2k12 1-1 result !\n\n");

        printf("\n\n\tEnter Nick Name , Full Name  Or Roll ( press 1 to see all result! ) : \n\t\t\n\t");
//        SetConsoleTextAttribute(txtcolor,830);
        string name[63]=
        {
            "abdul aziz 1207001",
            "masum billah 1207002",
            "mahmudur rahman tanim (mama tanim) patla tanim 1207003",
            "asad opu 1207004",
            "asaf-uddowla golap 1207005",
            "kareema zohora karima kurkuri 1207006",
            "jannatul ferdous sharmi shormi sormi 1207007",
            "tanjim fatima muna 1207008",
            "shahnaj kabir soma 1207009",
            "kazi afsana akhtar moushumi mousumi  1207010",
            "akib shahriar shawon shaon 1207011",
            "masum al masba 1207012",
            "nabil sarwar rahat 1207013",
            "salman ferdous 1207014",
            "md. armanuzzaman tomal 1207015",
            "nabil ashab 1207016",
            "shadman sakib 1207017",
            "a.s.m al zihadi jihadi 1207018",
            "susmita kundu 1207019",
            "md. rayhan nabi jonom janam raihan1207020",
            "ahmad musa 1207021",
            "nafis akram 1207022",
            "md. montasir bin shams 1207023",
            "priyabrota sen papon 1207024",
            "abu zafar md. nuruzzaman abir 1207025",
            "sunanda das 1207026",
            "mahmudul hasan shuvro 1207027",
            "tanmoy kumar ghosh tonmoy 1207028",
            "nahid hasan kakon 1207029",
            "s.m. abu taher asif 1207030",
            "md. mohaimin billah fahad 1207031",
            "abu naser md. nafew nafeu nafiu 1207032",
            "fahim al mahmud ashik piyar vai 1207033",
            "md. rashed minhaz 1207034",
            "rifat ara tasnim promi 1207035",
            "rifat haque amit omit 1207036",
            "aney rani paul any 1207037",
            "sumaiya tasneem mashfi 1207038",
            "md. mehadi hassan mehedi 1207039",
            "mehtaz quraishi sazid 1207040",
            "md. wahidul islam leon sunny leone 1207041",
            "md. farhabi helal ayon oyon 1207042",
            "md. biswas tanvir yasin mota tanim 1207043",
            "faisal ahmed emil amil 1207044",
            "pial kanti samadder 1207045",
            "saif mahmud parvez 1207046",
            "maaheer ameer bin sheraj mahir 1207047",
            "nasrin akter rima 1207048",
            "rajuanul haque riju reju 1207049",
            "alamin hossain 1207050",
            "piyal  shuvro pial 1207051",
            "zakir ahmed 1207052",
            "sk. sabbir hosain sazal sajal sojol 1207053",
            "foysal ahmed nibir 1207054",
            "rajesh bhartia 1207055",
            "zahurul islam prince johurul 1207056",
            "jyotirmoy saha jotirmoy joti 1207057",
            "dilshadur rahman dolon 1207058",
            "abdul fattah sopnil shopnil fatta 1207059",
            "rubel ahmed 1207060",
            "rupayon dhrubo 1107031",
            "sayem bin 1207040",
            "wasim reza 0807021",
        };
        string profile[63] =
        {
            " Name : Abdul Aziz \t Roll : 1207001" ,
            " Name : Masum Billah \t Roll : 1207002" ,
            " Name : Mahmudur Rahman Tanim \t Roll : 1207003" ,
            " Name : Asad Opu \t Roll : 1207004" ,
            " Name : Asaf-Uddowla Golap \t Roll : 1207005" ,
            " Name : Kareema Zohora \t Roll : 1207006" ,
            " Name : Jannatul Ferdous Sharmi \t Roll : 1207007" ,
            " Name : Tanjim Fatima Muna \t Roll : 1207008" ,
            " Name : Shahnaj Kabir Soma \t Roll : 1207009" ,
            " Name : Kazi Afsana Akhtar \t Roll : 1207010" ,
            " Name : Akib Shahriar \t Roll : 1207011" ,
            " Name : Masum Al Masba \t Roll : 1207012" ,
            " Name : Nabil Sarwar Rahat \t Roll : 1207013" ,
            " Name : Salman Ferdous \t Roll : 1207014" ,
            " Name : Md. Armanuzzaman Tomal  \t Roll : 1207015" ,
            " Name : Nabil Ashab \t Roll : 1207016" ,
            " Name : Shadman Sakib  \t Roll : 1207017" ,
            " Name : A.S.M Al Zihadi \t Roll : 1207018" ,
            " Name : Susmita Kundu \t Roll : 1207019" ,
            " Name : Md. Rayhan Nabi Janom \t Roll : 1207020" ,
            " Name : Ahmad Musa \t Roll : 1207021" ,
            " Name : Nafis Akram \t Roll : 1207022" ,
            " Name : Md. Montasir Bin Shams \t Roll : 1207023" ,
            " Name : Priyabrota Sen Papon \t Roll : 1207024" ,
            " Name : Abu Zafar Md. Nuruzzaman Abir \t Roll : 1207025" ,
            " Name : Sunanda Das \t Roll : 1207026" ,
            " Name : Mahmudul Hasan Shuvro \t Roll : 1207027" ,
            " Name : Tanmoy Kumar Ghosh \t Roll : 1207028" ,
            " Name : Nahid Hasan Kakon \t Roll : 1207029" ,
            " Name : S.M. Abu Taher Asif \t Roll : 1207030" ,
            " Name : Md. Mohaimin Billah Fahad  \t Roll : 1207031" ,
            " Name : Abu Naser Md. Nafew \t Roll : 1207032" ,
            " Name : Fahim Al Mahmud Ashik \t Roll : 1207033" ,
            " Name : Md. Rashed Minhaz  \t Roll : 1207034" ,
            " Name : Rifat Ara Tasnim Promi  \t Roll : 1207035" ,
            " Name : Rifat Haque Amit  \t Roll : 1207036" ,
            " Name : Aney Rani Paul \t Roll : 1207037" ,
            " Name : Sumaiya Tasneem Mashfi \t Roll : 1207038" ,
            " Name : Md. Mehadi Hassan \t Roll : 1207039" ,
            " Name : Mehtaz Quraishi Sazid \t Roll : 1207040" ,
            " Name : Md. Wahidul Islam \t Roll : 1207041" ,
            " Name : Md. Farhabi Helal Ayon \t Roll : 1207042" ,
            " Name : Md. Biswas Tanvir Yasin(tanim2)\t Roll : 1207043" ,
            " Name : Faisal Ahmed Amil \t Roll : 1207044" ,
            " Name : Pial Kanti Samadder\t Roll : 1207045" ,
            " Name : Saif Mahmud Parvez \t Roll : 1207046" ,
            " Name : Maaheer Amaeer Bin Sheraj  \t Roll : 1207047" ,
            " Name : Nasrin Akter Rima \t Roll : 1207048" ,
            " Name : Rajuanul Haque Riju \t Roll : 1207049" ,
            " Name : alamin hossain \t Roll : 1207050" ,
            " Name : piyal  shuvro \t Roll : 1207051" ,
            " Name : zakir ahmed  \t Roll : 1207052" ,
            " Name : sk. sabbir hosain sazal sajal  \t Roll : 1207053" ,
            " Name : Foysal Ahmed Nibir \t Roll : 1207054" ,
            " Name : Rajesh Bhartia \t Roll : 1207055" ,
            " Name : Zahurul Islam Prince \t Roll : 1207056" ,
            " Name : Jyotirmoy Saha Jotirmoy  \t Roll : 1207057" ,
            " Name : Dilshadur Rahman Dolon \t Roll : 1207058" ,
            " Name : Abdul Fattah Sopnil \t Roll : 1207059" ,
            " Name : Rubel Ahmed \t Roll : 1207060",
            " Name : Rupayon Dhrubo \t Roll : 1107031",
            " Name : Sayem Bin \t Roll : 1107040",
            " Name : Wasim Reza \t Roll : 0807021",
        };
        string result[63] =
        {
            "     A+      A+        B+       A+       A+        A+        A+       A+",
            "     B+       A-       A-       A+       B+         B+         A+       A-",
            "     B+       B+       B        A+       B           A-         A+        A-",
            "     B         B        B+         B-        D          C+         A        A-",
            "     A-       A+       B+       A-        A         A+         A+        A-",
            "     A-      B+       A        A-         B+         B         A+        A",
            "     B-        B        A-       A         B-         C+         A+        A-",
            "     B+       A+        A-       A+       B-         B        A        A",
            "     B+      A-        A-        A+        B+         B+        A        A-",
            "     B-       B-        A-        D         B         D         A-        A-",
            "     A        A        A+        A         A+         A-         A+        A+",
            "     A        A+       A-       A+        A-         A+         A+      A-",
            "     B+       A        B+        B+         B         B+         A+        A",
            "     D        D         B        C         F            A-         A-        B",
            "     A-       B+        B       A+        A-         A-         A        B+",
            "     C        C         B-        C         F         B-        B+        C",
            "     A        A-      A-        A+        A-         A-         A+      A-",
            "     C+       C+       A-        C         C         C         A-       C",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
            "     A        B        B+        C         B+         B-         A        A+",
        };
        float cgpa[63]= {3.89,3.23,2.78,3.13};

        string input;
        getline(cin,input);
        int i,j;
        string all = "1";
        if(input==all)
        {
            system("cls");
            for( i=0; i<63; i++)
            {
                cout<<"\t"<< profile[i];

                cout<< "\tCGPA == " << cgpa[i]<<"                                      \n"<<endl;
            }
            break;
        }
        SetConsoleTextAttribute(txtcolor,830);

        cout<<endl;
        system("cls");
        int saveposition =0, wrongenter[60], count =0;

        for( i=0; i<63; i++)
        {
            size_t found = name[i].find(input);
            if (found!=string::npos)
            {
                wrongenter[count]=i;
                count++;
                saveposition=i;
            }
        }
        if(count==1)
        {
            cout<<"\n\n\t       "<< profile[saveposition]<<"\n"<<endl;
            SetConsoleTextAttribute(txtcolor,58);
            cout<< "\t\t       1st year 1st Term RESULT "<<"\n";
            SetConsoleTextAttribute(txtcolor,76);
            for(j=0; j<80; j++)
                printf("%c",177);
            SetConsoleTextAttribute(txtcolor,298);
            printf("\nCSE 1101  EEE 1107  HUM 1107 MATH 1107   PHY 1107  CSE 1102  EEE 1108  PHY 1108 \n");
            SetConsoleTextAttribute(txtcolor,282);
            cout<<result[saveposition]<<"    "<<endl;
            cout<< "\n\n\t\t\t      CGPA == " << cgpa[saveposition]<<"                                      "<<endl;

        }
        else if(count>1)
        {
            int p=1;
            printf("%d Results found! Please choose Correct Name / Roll number from the list %c \n\n",count,1);
            while(count--)
            {
                printf("#%d : ",p++);
                cout<<profile[wrongenter[count]]<<endl;
            }

            goto xx;

        }
        if(count==0)
        {
            cout<<"SORRY !  RESULT NOT FOUND ! PLEASE CONTACT MAMA ! "<<endl;
        }
        char c;
        SetConsoleTextAttribute(txtcolor,67);
        printf("\n\n\t--> If You wanna check another result , PRESS 'y'<--\n");
        scanf("%c",&c);
        if(c=='y' || c=='Y')
        {
            SetConsoleTextAttribute(txtcolor,830);
            getchar();
            continue;
        }
        else
        {
            break;
        }
xx:
        getchar();
        ;
    }
    getchar();
}
