#include <stdio.h>
#include <windows.h>   // or other WinApi header
#include <stdlib.h>
#include <conio.h>
int main()
{
  HANDLE  hConsole;
    int k;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 3);
    printf("\n                       WELCOME ");
    SetConsoleTextAttribute(hConsole, 10);
    printf("xxxxxxxxx\n");
Sleep(1200);
    SetConsoleTextAttribute(hConsole, 8);
    printf("\n\n                       Special day , isn't it ? %c ",1);

     SetConsoleTextAttribute(hConsole, 8);
     printf("\n\n            LET'S read some great quotes , shall we ?\n\n");

 Sleep(5300);
     SetConsoleTextAttribute(hConsole, 11);
     printf("\"I would rather walk with a friend in the dark, than alone in the light.\"\n");
     SetConsoleTextAttribute(hConsole, 9);
     printf("-Helen Keller");
Sleep(5555);
     printf("\n\n");
      SetConsoleTextAttribute(hConsole, 13);
      printf("Asking urself why have i done this ? Made this for u ?\n");
Sleep(1300);
SetConsoleTextAttribute(hConsole, 15);
Sleep(3000);
printf("                \n                Here is the ANSWER\n\n");
Sleep(3000);
SetConsoleTextAttribute(hConsole, 11);
printf("\'Why did you do all this for me?' he asked. \n'I don't deserve it. I've never done anything for you.'\n\n");
Sleep(5855);
printf("'You have been my friend,' replied Charlotte. 'That is a tremendous thing.'");
  SetConsoleTextAttribute(hConsole, 9);
  printf(" \n- E.B. White, Charlotte's Web");
  SetConsoleTextAttribute(hConsole, 15);
  Sleep(8550);
  printf("\n\n                  SURPRIZE is waiting! WAIT 2 SECONDS!! %c",2);
         Sleep(5500);// cheap wait
  system("cls");
  Sleep(1000);
     SetConsoleTextAttribute(hConsole, 10);

  printf("\n\n\n\n                NOW IT IS TIME TO WISH YOU !\n\n");
Sleep(3000);
system("cls");
Sleep(1000);
     SetConsoleTextAttribute(hConsole, 10);
     printf("\n\n\n\n\n\n                              HAPPY BIRTHDAY TO YOU ! \n");
       Sleep(2300);
SetConsoleTextAttribute(hConsole, 13);
printf("\n\n\n\n                    HAPPY BIRTHDAY TO MY DEAR xxxxx\n\n ");
Sleep(3300);
SetConsoleTextAttribute(hConsole, 10);
     printf("\n\n\n\n                              HAPPY BIRTHDAY TO YOU ! \n");

Sleep(3000);

  return 0;
}

